#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h> 

//SO FUNCIONA PRA TRES CASOS AAAAAAAAAAAAAAA

#define MAX 20

int primo(int n) 
{
    if (n < 2) return false;
    
    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) return false;
    }
    
    return true;
}

int soma_diag(int mat[2][2]) 
{
    int s = 0;
    
    if (primo(mat[0][0])) s += mat[0][0];
    if (primo(mat[1][1])) s += mat[1][1];
    
    return s;
}

void melhor_sub(int mat[MAX][MAX], int n, int m, int melhor[2][2]) 
{
    int m_soma = -1;
    int m_primo = -1;

    // Alterando para iterar sobre todas as poss?veis submatrizes 2x2
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < m - 1; j++) 
        {
            int submat[2][2] = 
            {
                {mat[i][j], mat[i][j+1]},
                {mat[i+1][j], mat[i+1][j+1]}
            };

            int soma = soma_diag(submat);
            int maior_primo = (primo(submat[0][0]) ? submat[0][0] : 0);
            
            maior_primo = (primo(submat[1][1]) && submat[1][1] > maior_primo) ? submat[1][1] : maior_primo;

            if (soma > m_soma || (soma == m_soma && maior_primo > m_primo)) 
            {
                m_soma = soma;
                m_primo = maior_primo;
                
                melhor[0][0] = submat[0][0];
                melhor[0][1] = submat[0][1];
                melhor[1][0] = submat[1][0];
                melhor[1][1] = submat[1][1];
            }
        }
    }
}

int main() 
{
    int n, m;
    int mat_kcaj[MAX][MAX], mat_ansa[MAX][MAX];
    int melhor_kcaj[2][2], melhor_ansa[2][2];
    int soma_kcaj, soma_ansa;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &mat_kcaj[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &mat_ansa[i][j]);
        }   
    }
    
    melhor_sub(mat_kcaj, n, m, melhor_kcaj);
    melhor_sub(mat_ansa, n, m, melhor_ansa);

    soma_kcaj = soma_diag(melhor_kcaj);
    soma_ansa = soma_diag(melhor_ansa);

    printf("%d %d\n%d %d\n\n", melhor_kcaj[0][0], melhor_kcaj[0][1], melhor_kcaj[1][0], melhor_kcaj[1][1]);
    printf("%d %d\n%d %d\n\n", melhor_ansa[0][0], melhor_ansa[0][1], melhor_ansa[1][0], melhor_ansa[1][1]);

    if (soma_kcaj > soma_ansa) 
    {
        printf("Kcaj ganhou\n");
    } 
    else if (soma_ansa > soma_kcaj) 
    {
        printf("Ansa ganhou\n");
    } 
    else 
    {
        int m_primo_kcaj = (primo(melhor_kcaj[0][0]) ? melhor_kcaj[0][0] : 0);
        
        if (primo(melhor_kcaj[1][1]) && melhor_kcaj[1][1] > m_primo_kcaj) m_primo_kcaj = melhor_kcaj[1][1];

        int m_primo_ansa = (primo(melhor_ansa[0][0]) ? melhor_ansa[0][0] : 0);
        
        if (primo(melhor_ansa[1][1]) && melhor_ansa[1][1] > m_primo_ansa) m_primo_ansa = melhor_ansa[1][1];

        if (m_primo_kcaj > m_primo_ansa) 
        {
            printf("Kcaj ganhou\n");
        } 
        else if (m_primo_ansa > m_primo_kcaj) 
        {
            printf("Ansa ganhou\n");
        } 
        else 
        {
            printf("Empate\n");
        }
    }

    return 0;
}

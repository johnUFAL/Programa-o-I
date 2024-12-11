#include <stdio.h>

#define VIDA 15

int mat_valida(int mat[3][3]) 
{
    int diagonal_p = 1, diagonal_s = 1;
    
    for (int i = 0; i < 3; i++)  
    {
        for (int j = 0; j < 3; j++) 
        {
            if (i == j) 
            {  
                if (mat[i][j] != 1) 
                {
                    diagonal_p = 0;
                }
            } 
            else if (i + j == 2)
            {
                if (mat[i][j] != 1) 
                {
                    diagonal_s = 0;
                }
            } 
            else 
            {  
                if (mat[i][j] != 0) 
                {
                    return 0;
                }
            }
        }
    }
    
    return diagonal_p || diagonal_s;
}

int main() {

    int v_luke, v_vader;
    int mat_luke[3][3], mat_vader[3][3];

    scanf("%d %d", &v_luke, &v_vader);
    
    while (1) 
    {
        int valida_luke, valida_vader;
        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (scanf("%d", &mat_luke[i][j]) == EOF) goto result;
            }    
        }
        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &mat_vader[i][j]);
            }    
        }
        
        valida_luke = mat_valida(mat_luke);
        valida_vader = mat_valida(mat_vader);
        
        if (valida_luke && valida_vader) 
        {
            int diagonal_luke = (mat_luke[0][0] == 1 && mat_luke[1][1] == 1 && mat_luke[2][2] == 1);
            int diagonal_vader = (mat_vader[0][0] == 1 && mat_vader[1][1] == 1 && mat_vader[2][2] == 1);
            
            if (diagonal_luke == diagonal_vader) 
            {
                v_luke -= VIDA;
                v_vader -= VIDA;
            }
        } 
        else if (valida_luke) 
        {
            v_vader -= VIDA;
        } 
        else if (valida_vader) 
        {
            v_luke -= VIDA;
        }
    }

result:

    if (v_luke > v_vader) 
    {
        printf("Luke Skywalker venceu.\n");
    } 
    else if (v_vader > v_luke) 
    {
        printf("Darth Vader venceu.\n");
    } 
    else 
    {
        printf("Houve empate.\n");
    }

    return 0;
}

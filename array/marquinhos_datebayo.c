#include <stdio.h>

void ler_i(int energia_i[], int n, int i) 
{
    if(i==n) return;
    scanf("%d", &energia_i[i]);
    ler_i(energia_i, n, i + 1);
}

void ordem(int ord[], int n, int i) 
{
    if(i==n) return;  
    scanf("%d", &ord[i]);
    ordem(ord, n, i + 1);  
}

int fight(int energia_m, int energia_i[], int ord[], int n, int i, int* derrotados) 
{
    if (i==n) return energia_m;
   
    int inimigo_x = ord[i] - 1;
    if (energia_m>=energia_i[inimigo_x]) 
    {
        energia_m  += (energia_m-energia_i[inimigo_x]); 
        (*derrotados)++;
    }
        
    return fight(energia_m, energia_i, ord, n, i + 1, derrotados); 
}

void impressora(int energia_m, int n, int derrotados) 
{
    printf("N�vel de energia: %d\n", energia_m);
    
    float porc = (derrotados/(float)n) * 100;
    printf("%.2f%%\n", porc);
    
    if (energia_m> 20000) 
    {
        printf("Marquinhos � o novo Mestre da Vila da �rvore!\n");
    } 
    else 
    {
        printf("Continue tentando!\n");
    }
}

int main() {
    int energia_m;  
    int n;                  
    int energia_i[100]; 
    int ord[100];       
    int derrotados = 0;  
    
    scanf("%d", &energia_m);
    scanf("%d", &n);
    
    ler_i(energia_i, n, 0);
    ordem(ord, n, 0);
    
    energia_m = fight(energia_m, energia_i, ord, n, 0, &derrotados);
    
    impressora(energia_m, n, derrotados);
    
    return 0;
}

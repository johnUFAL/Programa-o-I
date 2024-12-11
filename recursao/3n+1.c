#include <stdio.h>

int loop (int n) 
{
    if (n==1) return 1;

    if (n%2==0)
    {       
        return 1 + loop(n/2); 
    }
    else 
    {                  
        return 1 + loop(3*n+1); 
    }
}

int maximo(int i, int j)
{
    if (i > j) return 0; 


    int atual = loop(i); 
    int resto = maximo(i+1, j); 

    if (atual > resto)
    {
        return atual;
    }
    else 
    {
        return resto;
    }
}

void imput() 
{
    int i, j;

    if (scanf("%d %d", &i, &j) == 2) 
    { 
        int cmc, fim;

        if (i<j)
        {
            cmc=i;
        }
        else
        {
            cmc=j;
        }

        if (i>j)
        {
            fim=i;
        }
        else
        {
            fim=j;
        }

        int result = maximo(cmc, fim); 

        printf("%d %d %d\n", i, j, result);

        imput(); 
    }
}

int main() {
    
    imput();

    return 0;
}
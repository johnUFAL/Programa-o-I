#include <stdio.h>

int decompor(int n, int i){
    if(i >= 10) return 0;
    if(n > 0) 
    {
        int dg = n % 10;

        if(dg % 2 == 0)
        {
            printf(".");
        }
        else
        {
            printf("-");
        }
    }
    decompor(n / 10 , i + 1);
}

void ler(int i){
    int n;

    if(i >= 10) return;

    scanf("%d", &n);
    decompor(n, 0);
    printf("\n");    
    ler(i + 1);
}

int main() {
    ler(0);

    return 0;
}
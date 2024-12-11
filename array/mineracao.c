#include <stdio.h>


int achar(int tunel[], int cmc) 
{
    if (tunel[cmc] == -1) {
        return cmc;
    }
    return achar(tunel, tunel[cmc]);  
}

int main() {

    int n;  
    scanf("%d", &n);

    int tunel[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &tunel[i]);
    }
    int cmc;
    scanf("%d", &cmc);

    int fim = achar(tunel, cmc);
    printf("%d\n", fim);

    return 0;
}

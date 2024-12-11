#include <stdio.h>

void quimica()
{
    float pH = 0;
    scanf("%f\n", &pH);
    
    if (pH == -1) return;    

    if (pH > 7) {
        printf("BASICA");
        printf("\n");
    } else if (pH < 7) {
        printf("ACIDA");
        printf("\n");
    } else {
        printf("NEUTRA");
        printf("\n");
    }
    quimica();
}

int main() {
    quimica();
    
    return 0;
}
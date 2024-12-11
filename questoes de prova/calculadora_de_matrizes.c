#include <stdio.h>

int main() {

    printf("soma\n");
    int soma_um[3][3];
    int soma_dois[3][3];

    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            scanf("%d", &soma_um[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            scanf("%d", &soma_dois[i][j]);
        }
    }
    
    printf("Multi\n");

    int mult_um[3][3];
    int mult_dois[3][3];

    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            scanf("%d", &mult_um[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            scanf("%d", &mult_dois[i][j]);
        }
    }

    printf("Sub\n");
    int sub_um[3][3];
    int sub_dois[3][3];

    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            scanf("%d", &sub_um[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            scanf("%d", &sub_dois[i][j]);
        }
    }
    printf("Fim\n");

    //soma 
    printf("Resultado Soma:\n");
    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            int soma = soma_um[i][j]+soma_dois[i][j];
            printf("%d ", soma);
        }
        printf("\n");
    }
    //Multi
    int mult [3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            mult[i][j] = 0;
            for(int k = 0; k < 3; k++){
                mult[i][j] += mult_um[i][k] * mult_dois[k][j];
            }
        }
    }
    printf("Resultado Multi:\n");
    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }
    //subtracao
    printf("Resultado Sub:\n");
    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            int sub = sub_um[i][j]-sub_dois[i][j];
            printf("%d ", sub);
        }
        printf("\n");
    }
}
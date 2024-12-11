#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];

    for (int i = 0; i < n; i++){ //ler a matriz
        for (int j = 0; j < m; j++){
            scanf("%d", &mat[i][j]);
        }
    }

printf("\n");

    for (int i = 0; i < n; i++){  //inverte as linha
        for (int j = m - 1; j >= 0; j--){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

printf("\n");

    for (int i = n - 1; i >= 0; i--){ //inverte as coluna ou girar a matriz 90 grau
        for (int j = 0; j < m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

printf("\n");

    for (int i = n - 1; i >= 0; i--){ //doideira do porra mas isso aqui inverte a posicao da linha e a ordem tbm
        for (int j = m - 1; j >= 0; j--){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

printf("\n");

for(int i = 0; i < n; i++){ //transpondo uma matriz... ex: 3x2 em 2x3
    for(int j = 0; j < m; j++){
        printf("%d ", mat[j][i]);
    }
    printf("\n");
}

printf("\n");

for(int i = 0; i < n; i++){ //diagnal principal \.
    printf("%d ", mat[i][i]);
    printf("\n");
}

printf("\n");

for(int i = 0; i < n; i++){ //diagonal secundaria /
    printf("%d ", mat[i][n - 1 - i]);
    printf("\n");
}

printf("\n");

for(int i = 0; i < 2; i++){ //submatriz a matriz 
    for(int j = 0; j < 2; j++){
        printf("%d ", mat[i][j]);
    }
    printf("\n");
}

printf("\n");

//BORA SOMAR?? JA TA PODENDO SOMAR??????

for(int i = 0; i < n; i++){ // SOMAR AS LINHASSSSSSSSSSSSS
    int soma = 0;
    for(int j = 0; j < m; j++){
        soma += mat[i][j];
    }
    printf("Soma LINHAS: %d\n", soma);
}

printf("\n");

for(int j = 0; j < m; j++){ // SOMAR AS COLUNASSSSSSSSSSS
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += mat[i][j];
    }
    printf("Soma COLUNAS: %d\n", soma);
}

printf("\n");

int soma_tudo = 0;
for(int i = 0; i < n; i++){ // SOMAR TUDOOOOOOOOOOOO
    for(int j = 0; j < m; j++){
        soma_tudo += mat[i][j];
    }
}
printf("Soma TUDO: %d\n", soma_tudo);
printf("\n");

//MULTIPLICAÇÃO DE CRIA

long long total = 1; 

for(int i = 0; i < n; i++){ // linhas y linhas
    long long linha = 1;
    for(int j = 0; j < m; j++){
            linha *= mat[i][j];    
            total *= mat[i][j];
        }
    printf("LINHA %d: %lld\n", i+1, linha);
}

printf("\n");

for(int j = 0; j < m; j++){ // colunas y colunas
    long long coluna = 1;
    for(int i = 0; i < n; i++){
            coluna *= mat[i][j];    
        }
    printf("COLUNA %d: %lld\n", j+1, coluna);
}

printf("\n");

printf("Produto TOTAL: %lld\n", total); //TUDOOOOOOOO

    return 0;
}
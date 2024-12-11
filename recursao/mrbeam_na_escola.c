#include <stdio.h>
#include <stdbool.h>

bool primo(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int maiorPar(int n){
    if(n % 2 == 0) return n;
    return -1;
}

int menorImpar(int n){
    if(n % 2 != 0) return n;
    return -1;
}

int main() {
    int n, num;
    int maior_par = -1, menor_impar = -1;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &num);

        if(num % 2 == 0 && (maior_par == -1 || num > maior_par)){
            maior_par = num;
        }
        if(num % 2 != 0 && (menor_impar == -1 || num < menor_impar)){
            menor_impar = num;
        }
    }

    if(maior_par != -1){
        printf("Maior par: %d\n", maior_par);
        int primo_antes= maior_par - 1;
        while(!primo(primo_antes)){
            primo_antes--;
        }
        printf("Primo anterior ao maior: %d\n", primo_antes);
    }    
    else {
        printf("Sem numeros pares\n");
    }

    if(menor_impar != -1){
        printf("Menor impar: %d\n", menor_impar);
        int primo_antes= menor_impar - 1;
        while(!primo(primo_antes)){
            primo_antes--;
        }
        printf("Primo anterior ao menor: %d\n", primo_antes);
    }    
    else {
        printf("Sem numeros impares\n");
    }

    return 0;
}
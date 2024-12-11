#include <stdio.h>
#include <stdbool.h>

int eq_recorrente(int n){ //equacao recorrente como t(n -1) + n
    if(n == 0) return 0;
    return eq_recorrente(n-1) + n;
}

void fatores(int n, int div){ //fatoracao de um numero
    if(div > n) return;
    if(n % div == 0) printf("%d\n", div);
    fatores(n, div+1);
}

int multiplicar(int n, int m){ //mupliplicacao recursiva: 3x2 = 3+3
    if(m == 0) return 0;
    return n + multiplicar(n, m-1);
}

int somar_dg_pares(int n){
    if(n == 0) return 0;
    int dg = n%2;
    if(dg % 2 == 0) return dg + somar_dg_pares(n/10); // se for mpar troca == !=
    return somar_dg_pares(n/10);
}

void decimal_binario(int n){ //conversao de decimal para binario
    if(n == 0) return decimal_binario(n/2);
    printf("%d\n", n%2);

}

int contar_impar(int n ){
    if(n <= 0) return 0;
    if(n % 2 != 0) return 1 + contar_impar(n-1); //mudar 1 para n e != para == se for par
    return contar_impar(n-1);
}

int inverter(int n, int rev){ //inverter numero
    if (n == 0) return rev;
    return inverter(n/10, rev*10 + n%10);
}

int palindromo(int n){ //verificar se um numero eh palindromo
    if (n < 0) n = -n;
    return n == inverter(n, 0);
}

int potencia(int base, int exp){ //potenciacao
    if(base == 0) return 1;
    return base * potencia(base, exp-1);
}

int num_digitos(int n){ //numero de digitos de um numero
    if(n == 0) return 0;
    return 1 + num_digitos(n/10);
}

int mdc(int a, int b){ //maximo divisor comum
    if(b == 0) return a;
    return mdc(b, a%b);
}

int soma_digitos(int n){ //soma dos digitos de um numero
    if(n == 0) return 0;
    return n%10 + soma_digitos(n/10);
}

int fibonacci(int n){ //fibonacci
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int primo(int x, int k){ //verificar se um numero eh primo
    if (x<=1) return 0;
    if ((k*k)>x) return 1;
    if (x%k==0) return 0;

    return primo(x, k+1);
}

int fat(int n){ //fatorial de um numero
    if(n == 0) return 1;
    return n * fat(n-1);
}

int combinacoes(int n, int k){ //combinacoes
    if(k > n ||n < 0 || k < 0) return 0;
    return fat(n)/(fat(k)*(fat(n-k)));
}

int soma(int n){ //soma de um numero    
    if(n == 1) return 1;
    return n + soma(n-1);
}

void ler_numero(int i){ //ler uma lista de numeros
    if(i < 10){
        int n;
        scanf("%d", &n);
        ler_numero(i+1);
    }
}

int main(){ 
    int num, num2;
    scanf("%d %d", &num, &num2);

    int fatorial = fat(num);
    printf("Fatorial: %d\n", fatorial);

    int s = soma(num);
    printf("Soma: %d\n", s);

    int p = primo(num, 2);
    printf("Primo: %d\n", p);

    int inv = inverter(num, 0);
    printf("Inverso: %d\n", inv);

    int fibo = fibonacci(num);
    printf("Fibonacci: %d\n", fibo);

    int digito = soma_digitos(num);
    printf("Soma dos digitos: %d\n", digito);

    int MDC = mdc(num, num2);
    printf("MDC: %d\n", MDC);

    int n_digitos = num_digitos(num);
    printf("Numero de digitos: %d\n", n_digitos);

    int pot = potencia(num, 2); //2 é o expoente 
    printf("Potencia: %d\n", pot);

    int pali = palindromo(11); //precisa do inverso e de palindromo(binominaal)
    printf("Palindromo: %d\n", pali);

    if(num >= num2 && num >= 0 && num2 >= 0) //precisa do fibonacci
    {
        printf("Combinacoes: %d\n", combinacoes(num, num2));
    }else {
        printf("Erro\n");
    }

    int impar = contar_impar(num);
    printf("Quantidade de impares: %d\n", impar);

    decimal_binario(num);

    int pares = somar_dg_pares(num);
    printf("Soma dos digitos pares: %d\n", pares);

    int multi = multiplicar(num, num2);
    printf("Multiplicacao: %d\n", multi);

    fatores(num, 1);

    int rec = eq_recorrente(num);
    printf("T(n - 1) + n: %d\n", rec);

    ///gasosa = getchar();

    return 0;
}
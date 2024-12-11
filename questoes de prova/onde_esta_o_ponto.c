#include <stdio.h>

int main() {
    
    int x, y, raio, equacao_c;
    
    scanf("%d %d %d", &x, &y, &raio);
    
    equacao_c = (x*x) + (y*y);
    
    if (equacao_c < (raio*raio))
    {
        printf("Dentro");
    }
    else if (equacao_c == (raio*raio))
    {
        printf("Sobre");
    }
    else
    {
        printf("Fora");
    }
    
    return 0;
}
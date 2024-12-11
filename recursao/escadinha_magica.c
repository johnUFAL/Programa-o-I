#include <stdio.h>

void num(int n)
{
    if (n==0)
    {
        return;
    }

    num(n-1);
    if(n > 1) printf(" %d", n);
    else printf("%d", n);
}

void escada(int n, int m)
{
    if (m==0)
    {
        return;
    }

    escada(n, m-1);
    num(m);
    printf("\n");

}

int main() {

    int n; 

    scanf("%d", &n);

    escada(n, n);

    return 0;
}

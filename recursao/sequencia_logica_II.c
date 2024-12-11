#include <stdio.h>

void seq(int x, int y, int aux)
{
    if (aux > y)
    {
        return;
    }

    printf("%d", aux);

    if (aux%x==0)
    {
        printf("\n");
    }
    else
    {
        printf(" ");
    }

    seq(x, y, aux+1);

}

int main() {

    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    seq(x, y, 1);


    return 0;
}
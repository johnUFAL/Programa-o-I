#include <stdio.h>
#include <math.h>

int main() {

    int s, min, h, dia;

    scanf("%d", &s);

    dia = s/86400;
    h = (s/3600)-(dia*24);
    min = (s%3600)/60;
    s = s%60;

    printf("%d\n%d\n%d\n%d", dia, h, min, s);

    return 0;

}
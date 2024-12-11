 #include <stdio.h>

 void search (int x, int y, int num)
 {
    if (num < x)
    {
        return 0;
    }

    search(x, y, num-1);

    int ultimo = num % 10;
    int semdig = num /10;

    if (ultimo != 0 && num%semdig == 0)
    {
        printf("%d\n", num);
    }
   
 }

 int main() {

    int x, y; 

    scanf("%d %d", &x, &y);

    search(x, y, y);

    return 0;

 }
 
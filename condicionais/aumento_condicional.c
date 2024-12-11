#include <stdio.h>

int main() {

    int percent;
    double money, new_money, plus;

    scanf("%lf", &money);

    if (money <= 280.00)
    {
        percent = 20;
    }
    else if (money > 280.00 && money <= 700.00)
    {
        percent = 15;
    }
    else if (money > 700.00 && money < 1500.00)
    {
        percent = 10;
    }       
    else
    {
        percent = 5;
    }

    plus = (percent/100.00)*money;
    new_money = money + plus;

    printf("%.2lf\n%d\n%.2lf\n%.2lf", money, percent, plus, new_money);

    return 0;
}
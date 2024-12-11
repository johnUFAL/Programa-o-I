#include <stdio.h>
#include <math.h>

int main(){

  int codigo, quantidade;
  float preco, total; 

  scanf("%d\n%d", &codigo, &quantidade);

  switch (codigo)
  {
  case 1:
    preco = 5.30;
    break;
  case 2: 
    preco = 6.00;
    break;
  case 3: 
    preco = 3.20;
    break;
  case 4:
    preco = 2.50;
    break;
  }
    (total = quantidade * preco);

  if (total >= 40 || quantidade >= 15)
  {
    (total = total - ((total*15)/100));
  }
  
  printf("R$ %.2lf", total);

    return 0;
}
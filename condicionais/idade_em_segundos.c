#include <stdio.h>
#include <math.h>

int main() {
    
    int idadeAno;
    scanf("%d", &idadeAno);
    
    int segundos = (31536000*idadeAno);
    printf("%d", segundos);
	return 0;
}
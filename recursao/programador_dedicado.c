#include <stdio.h>

#define META_PROG 5
#define META_LINHA 100
#define DAY 7

//usei de artificios para me corrigir, vi os erros e funcionou, porem nao acho justo ganhar merito por isso, por vou deicar como errado

void ler(int m_prog, int m_linha, int stop, int dia, int max_linha, int dia_prod)
{
    if (stop>= DAY)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGGIU MEDIA DE PROGRAMAS: %d\n", m_prog);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", m_linha);
        printf("DIA QUE MAIS PRODUZIU: ");

        switch (dia_prod)
        {
        case 0:
            printf("DOMINGO\n"); break;
        case 1:
            printf("ABADO\n"); break;
        case 2:
            printf("SEGUNDA\n"); break;
        case 3:
            printf("TERCA\n"); break;
        case 4:
            printf("QUARTA\n"); break;
        case 5:
            printf("QUINTA\n"); break;
        case 6:
            printf("SEXTA\n"); break;
        
        }

        return;

    }

    int x, y;

    scanf("%d", &x);
    scanf("\n");
    scanf("%d", &y);

    if (x >= META_PROG)
    {
        m_prog++;
    }

    if (y >= META_LINHA)
    {
        m_linha++;
    }

    if (y >= max_linha)
    {
        max_linha = y;
        dia_prod = stop;

    }

    ler(m_prog, m_linha, stop+1, dia+1, max_linha, dia_prod);
}

int main() {

    ler(0, 0, 0, 0, 0, 0)

    return 0;
}
#include <stdio.h>

void impressora(int a[], int tam, int i, char *tipo)
{
    if (i == tam) return;
    printf("%s[%d] = %d\n", tipo, i, a[i]);
    impressora(a, tam, i+1, tipo);
}

void par_impar(int a[], int i, int par[], int impar[], int m_par, int m_impar)
{
    if(i == 15)
    {
        if(m_impar > 0) impressora(impar, m_impar, 0, "impar");
        if(m_par > 0) impressora(par, m_par, 0, "par");
        return;
    }

    if(a[i]%2 == 0)
    {
       par[m_par++]=a[i];
       if(m_par == 5)
       {
        impressora(par, 5, 0, "par");
        m_par = 0;
       }
    }
    else
    {
        impar[m_impar++]=a[i];
        if(m_impar == 5)
        {
            impressora(impar, 5, 0, "impar");
            m_impar = 0;
        }
    }

    par_impar(a, i+1, par, impar, m_par, m_impar);
}

void ler(int a[], int i) {

    if (i == 15) return;    
    scanf("%d", &a[i]);
    ler(a, i+1);
}

int main() {

    int a[15];
    int par[5], impar[5];

    ler(a, 0);

    par_impar(a, 0, par, impar, 0, 0);

    return 0;
}
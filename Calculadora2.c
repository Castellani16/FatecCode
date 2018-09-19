#include<stdio.h>

int main()
{
    int operacao;
    float a,b,produto;
    a
    printf("Escolha a operacao que deseja = \n");
    printf("0 para *mult | 1 para /div = \n");
    scanf("%d", &operacao);
    if (operacao == 0)
        {
        printf("Voce selecionou multiplicacao digite um valor de cada vez :\n");
        scanf("%f", &a);    // Pede um elemento (Scan um elemento).
        scanf("%f", &b);    // Pede um elemento.
        produto = a * b;    // Faz o produto do elemento.
        printf("O produto de a.b = %f", produto);   // Mostra o resultado do elemento.
        printf("\n");
        }
    if (operacao == 1)
        {
        printf("Voce selecionou divisao digite um valor de cada vez :\n");
        scanf("%f", &a);    // Pede um elemento (Scan um elemento).
        scanf("%f", &b);    // Pede um elemento.
        produto = a / b;    // Faz o produto do elemento.
        printf("O produto de a/b = %f", produto);   // Mostra o resultado do elemento.
        printf("\n");
        }
    return 0;
}
kjokjdfjlkdsjlkfdslkjflkds
fsdkjdsk

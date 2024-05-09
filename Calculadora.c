#include <stdio.h>

int main (){

float a, b;
char calc;

printf("Digite um numero: ");
scanf("%f", &a);

printf("Digite o segundo numero: ");
scanf("%f", &b);

printf("Selecione a operacao: ");
scanf(" %c", &calc);

switch (calc)
{
    case '+':
        printf("%f", a+b);
    break;

    case '-':
        printf("%f", a-b);
    break;

        case '*':
        printf("%f", a*b);
    break;

    case '/':
        printf("%f", a/b);
    break;
}

}

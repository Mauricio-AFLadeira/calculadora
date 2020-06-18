#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");

    int opcao;
    float resultado, primeiroNum, segundoNum;

    printf("\r\nCalculadora\r\n");

    printf("\r\nSelecione uma das opções\r\n");
    printf("\r\nn1 - Soma\r\n");
    printf("\r\nn2 - Subtração\r\n");
    printf("\r\nn3 - Multiplicação\r\n");
    printf("\r\nn4 - Divisão\r\n");

    printf("\r\nDigite a opção desejada:\r\n");
    scanf("%d", &opcao);

    printf("\r\nDigite o primeiro número da operação:\r\n");
    scanf("%f", &primeiroNum);

    printf("\r\nDigite o segundo número da operação:\r\n");
    scanf("%f", &segundoNum);

    switch (opcao){
        case 1:
            resultado = primeiroNum + segundoNum;
            break;

        case 2:
            resultado = primeiroNum - segundoNum;
            break;

        case 3:
            resultado = primeiroNum * segundoNum;
            break;

        case 4:
            if (segundoNum == 0){
                return 0;
            }

            resultado = primeiroNum / segundoNum;
            break;


        default:
            printf("\r\nO número digitado está incorreto");
            return 0;

    }

    printf("\r\n\O resultado da sua operação é: %.2f\r\n", resultado);
}

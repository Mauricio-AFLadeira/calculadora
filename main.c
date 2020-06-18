#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");

    int opcao;
    float resultado, primeiroNum, segundoNum;

    printf("\r\nCalculadora\r\n");

    printf("\r\nSelecione uma das op��es\r\n");
    printf("\r\nn1 - Soma\r\n");
    printf("\r\nn2 - Subtra��o\r\n");
    printf("\r\nn3 - Multiplica��o\r\n");
    printf("\r\nn4 - Divis�o\r\n");

    printf("\r\nDigite a op��o desejada:\r\n");
    scanf("%d", &opcao);

    printf("\r\nDigite o primeiro n�mero da opera��o:\r\n");
    scanf("%f", &primeiroNum);

    printf("\r\nDigite o segundo n�mero da opera��o:\r\n");
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
            printf("\r\nO n�mero digitado est� incorreto");
            return 0;

    }

    printf("\r\n\O resultado da sua opera��o �: %.2f\r\n", resultado);
}

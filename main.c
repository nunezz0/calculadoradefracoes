/* Um lojista atribui o pre�o de venda dos itens de sualoja com um n�mero
racional (uma fra��o de inteiros).Este comerciante precisa de uma calculadora capaz derealizar as
opera��es de soma, subtra��o,multiplica��o e divis�o de fra��es, a qual exibe oresultado como uma fra��o
 na forma mais simplificadaposs�vel.
Desenvolva um programa que implementeesta�calculadora. */

#include <stdio.h>
//biblioteca para realizar opera��es de entrada e sa�da.

int main(){
    double numerador1, denominador1, numerador2, denominador2; //Utilizando o tipo "double" para que os c�lculos funcionem com melhor precis�o, pois � mais adequado para as opera��es matem�ticas utilizadas no programa.
    char operador; //Palavra reservada para armazenar os operadores (+, -, *, /) solicitados.
    double resultado; //Armazenamento dos resultados calculados.

    printf("Digite o numerador da primeira fracao: "); //Solicitando o primeiro n�merador e o primeiro denomiador.
    scanf("%lf", &numerador1);// "lf" utilizado para ler o valor inserido e armazenar.
    printf("Digite o denominador da primeira fracao: ");
    scanf("%lf", &denominador1);

    printf("Escolha a operacao (+, -, *, /): "); //Solicitando um operador para realizar o c�lculo desejado.
    scanf(" %c", &operador); //"%c" para que seja poss�vel a leitura do caractere do operador.

    printf("Digite o numerador da segunda fracao: "); //Solicitando o segundo n�merador e o segundo denomiador.
    scanf("%lf", &numerador2);
    printf("Digite o denominador da segunda fracao: ");
    scanf("%lf", &denominador2);

    if (operador == '+') {  //"if" para controlar o fluxo de execu��o do programa
        resultado = (numerador1 / denominador1) + (numerador2 / denominador2);
        printf("Resultado da soma: %.2f\n", resultado);
    } else if (operador == '-') {
        resultado = (numerador1 / denominador1) - (numerador2 / denominador2);
        printf("Resultado da subtracao: %.2f\n", resultado);
    } else if (operador == '*') {
        resultado = (numerador1 / denominador1) * (numerador2 / denominador2);
        printf("Resultado da multiplicacao: %.2f\n", resultado);
    } else if (operador == '/') {
        if (numerador2 != 0 && denominador2 != 0) { //Fun��o para dividir as fra��es convertendo-as para n�meros racionais.
            resultado = (numerador1 / denominador1) / (numerador2 / denominador2);
            printf("Resultado da divisao: %.2f\n", resultado); //"%.2f\n" para formatar a sa�da dos n�meros.
        } else {
            printf("Erro: Divisao por zero nao � permitida.\n"); //Caso ocorra alguma divis�o por zero.
        }
    } else {
        printf("Operador invalido!\n");//Mensagem caso o operador seja inv�lido.
    }

    return 0;
}

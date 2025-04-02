/* Um lojista atribui o preço de venda dos itens de sualoja com um número
racional (uma fração de inteiros).Este comerciante precisa de uma calculadora capaz derealizar as
operações de soma, subtração,multiplicação e divisão de frações, a qual exibe oresultado como uma fração
 na forma mais simplificadapossível.
Desenvolva um programa que implementeesta calculadora. */

#include <stdio.h>
//biblioteca para realizar operações de entrada e saída.

int main(){
    double numerador1, denominador1, numerador2, denominador2; //Utilizando o tipo "double" para que os cálculos funcionem com melhor precisão, pois é mais adequado para as operações matemáticas utilizadas no programa.
    char operador; //Palavra reservada para armazenar os operadores (+, -, *, /) solicitados.
    double resultado; //Armazenamento dos resultados calculados.

    printf("Digite o numerador da primeira fracao: "); //Solicitando o primeiro númerador e o primeiro denomiador.
    scanf("%lf", &numerador1);// "lf" utilizado para ler o valor inserido e armazenar.
    printf("Digite o denominador da primeira fracao: ");
    scanf("%lf", &denominador1);

    printf("Escolha a operacao (+, -, *, /): "); //Solicitando um operador para realizar o cálculo desejado.
    scanf(" %c", &operador); //"%c" para que seja possível a leitura do caractere do operador.

    printf("Digite o numerador da segunda fracao: "); //Solicitando o segundo númerador e o segundo denomiador.
    scanf("%lf", &numerador2);
    printf("Digite o denominador da segunda fracao: ");
    scanf("%lf", &denominador2);

    if (operador == '+') {  //"if" para controlar o fluxo de execução do programa
        resultado = (numerador1 / denominador1) + (numerador2 / denominador2);
        printf("Resultado da soma: %.2f\n", resultado);
    } else if (operador == '-') {
        resultado = (numerador1 / denominador1) - (numerador2 / denominador2);
        printf("Resultado da subtracao: %.2f\n", resultado);
    } else if (operador == '*') {
        resultado = (numerador1 / denominador1) * (numerador2 / denominador2);
        printf("Resultado da multiplicacao: %.2f\n", resultado);
    } else if (operador == '/') {
        if (numerador2 != 0 && denominador2 != 0) { //Função para dividir as frações convertendo-as para números racionais.
            resultado = (numerador1 / denominador1) / (numerador2 / denominador2);
            printf("Resultado da divisao: %.2f\n", resultado); //"%.2f\n" para formatar a saída dos números.
        } else {
            printf("Erro: Divisao por zero nao é permitida.\n"); //Caso ocorra alguma divisão por zero.
        }
    } else {
        printf("Operador invalido!\n");//Mensagem caso o operador seja inválido.
    }

    return 0;
}

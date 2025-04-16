#include <stdio.h>
#include <stdlib.h>

void obter_fracoes();
void somar_fracoes(int x, int y, int u, int v);
void subtrair_fracoes(int x, int y, int u, int v);
void multiplicar_fracoes(int x, int y, int u, int v);
void dividir_fracoes(int x, int y, int u, int v);
void simplificar_fracao(int x, int y);

int a, b, c, d;

int main() //Função principal

{

    char r; // Variável para armazenar a escolha do usuário

    while (1) // Loop principal do programa

    {
        system("ClS"); //Limpa a tela (Específico Windows)

//Menu de opções

        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("9. Fim\n");

        r = getchar(); //Lê uma tecla do usuário sem precisar
        if ( r == '9') // Sai do loop se a opção for 9
            break;

        obter_fracoes(); // Pede ao usuário que insira duas frações

        switch (r) // Executa a operação conforme a escolha do usuário
        {
        case '1':
            somar_fracoes(a, b, c, d);
            break;
        case '2':
            subtrair_fracoes(a, b, c, d);
            break;
        case '3':
            multiplicar_fracoes(a, b, c, d);
            break;
        case '4':
            dividir_fracoes(a, b, c, d);
            break;
        }
    }

    return 0;

}

void obter_fracoes()
{
    printf("\n1a fracao: ");
    scanf("%d %d", &a, &b);
    printf("\n2a fracao: ");
    scanf("%d %d", &c, &d);
}

void somar_fracoes(int x, int y, int u, int v) // Funçao para somar as duas frações (x/y) + (u/v)
{
    int n, d;
    n = x * v + u * y;
    d = y * v;
    simplificar_fracao(n, d);
}


void subtrair_fracoes(int x, int y, int u, int v) // Funçao para subtrair as duas frações (x/y) - (u/v)
{
    int n, d;
    n = x * v - u * y; // Subtração dos numeradores
    d = y * v; // Subtração dos denominadores
    simplificar_fracao(n, d);
}

void multiplicar_fracoes(int x, int y, int u, int v) // Funçao para multiplicar as duas frações (x/y) * (u/v)
{
    int n, d;
    n = x * u; // Multiplica os numeradores
    d = y * v; // Multiplica os denominadores
    simplificar_fracao(n, d);
}

void dividir_fracoes(int x, int y, int u, int v) // Funçao para multiplicar as duas frações (x/y) / (u/v)
{
    int n, d;
    n = x * u;
    d = y * v;
    simplificar_fracao(n, d);
}

int mdc(int x, int y)
{

    int r = 1;
    while (r != 0)
    {
        r = x % y;
        x = y;
        d = y = r;
    }

    return x;

}
void simplificar_fracao(int x, int y)
{
    int m, n, d;
    m = mdc(x, y);
    n = x / m;
    d = y / m;
    printf("Resultado: %d / %d\n", n, d);
    system("PAUSE");
}





#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "pilhadechars.h"
#include "projeto2.h"
#define MAX 20




int main()
{



/*****************
        Funciona
****************/


/**Não funciona **/
/*

    char c;
    char v;
    Calc*calc_prog;
    calc_prog=cria_calc_prog("%c\n");

    do
    {
        scanf(" %c",&c);

        if (c=='+' || c=='-' || c=='*' || c=='/')
        {
            operador_prog(calc_prog,c);
        }
        // devolve caractere lido e tenta ler número
        else
        {
            ungetc(c,stdin);
            if (scanf("%d",&v) == 1)
                operando_prog(calc_prog,v);

        }
    }
    while (c!='q');
    libera_calc_prog(calc_prog);


*/

    /*
    char c;
    float v;
    Calc* calc;
    // cria calculadora com precisão de impressão de duas casas decimais

    printf("Digite o numero \n");
    calc = cria_calc("%.2f\n");
    do
    {
        // le proximo caractere nao branco


        scanf(" %c",&c);

        // verifica se e' operador valido

        if (c=='+' || c=='-' || c=='*' || c=='/')
        {
            operador(calc,c);
        }
        // devolve caractere lido e tenta ler número
        else
        {
            ungetc(c,stdin);
            if (scanf("%f",&v) == 1)
                operando(calc,v);

        }
    }
    while (c!='q');
    libera_calc(calc);

    */


    /**Pilha char ***/


    Pilha*p=cria();
    push(p,'a');
    push(p,'b');

    pop(p);
    imprime(p);

    printf("outra pilha\n");
    Pilha*p1=criaPilha();



    empilha(p1,'2');
    empilha(p1,'c');

    empilha(p1,'A');
    imprime(p1);

    desempilha(p1);
    imprime(p1);






    system("pause");

    return 0;
}

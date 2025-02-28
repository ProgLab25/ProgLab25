#include <stdio.h>

int main(){
    int idade=18;
    float altura=1.78;
    double saldoBancario=15500.80;
    char inicial='k';
    char nome[10]="kai";

    printf("Idade: %d anos \n", idade); //%d Imprime um inteiro decimal.
    printf("Altura: %.2f metros\n", altura); //%f Imprime um número de ponto flutuante no formato padrão.
    printf("Saldo Bancário: %2f reais\n", saldoBancario); //%f Imprime um número de ponto flutuante no formato padrão.
    printf("Inicial do nome: %c\n", inicial); //%c Imprime um único caractere. 
    printf("Nome: %s\n", nome); //Imprime uma cadeia (string)de carcteres.
    
    return 0;
}
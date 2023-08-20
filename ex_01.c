#include <stdio.h>
int verificarResposta(char resposta)
{
    int retorno = 0;
    
    switch(resposta)
    {
        case 's':
        case 'S':
            retorno = 1;
            break;
        case 'n':
        case 'N':
            retorno = 0;
            break;
        default:
            printf("\nOpção inválida, tente novamente...");
    }
    
    return retorno;
}

float calcular_valor(float quilo, int calda, int recipiente)
{
    float valorSorvete;
    
    valorSorvete = quilo * 33.00;
    
    if (calda == 1)
    {
        valorSorvete += 1.00;
    }
    
    if (recipiente == 1)
    {
        valorSorvete += 1.50;
    } 
    
    return valorSorvete;
}

int main()
{
    //Treinando C - Exercício 01
    float quiloSorvete;
    int temCalda;
    int usaRecipiente;
    char temp;
    
    printf("Digite o KG de sorvete:");
    scanf("%f", &quiloSorvete);
    
    printf("\nHá alguma calda [S/N]?");
    scanf(" %c", &temp);
    
    temCalda = verificarResposta(temp);
    
    printf("\nUsa algum recipiente [S/N]?");
    scanf(" %c", &temp);
    
    usaRecipiente = verificarResposta(temp);
    
    printf("\nO valor a ser pago pelo sorvete é: R$%.2f", calcular_valor(quiloSorvete, temCalda, usaRecipiente));
    
}

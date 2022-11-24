#include <stdio.h>

#include <conio.h>

int main(void) {

int i,n,p=0;

float Med; //vetor de valores das medições

//float *Med= new float[n];

char resp;

float soma=0;

float valorpago;


system("cls"); //limpa a tela acima

printf("*************************\n");

printf(" COMBINACAO DE VALORES DE ORDEM BANCARIA\n\n");

printf("*************************\n\n\n");

printf("Separe por ponto as casas decimais\n\n");

printf("\n\n\Digite o valor pago: ");

scanf("%f",&valorpago);

fflush(stdin);

printf("\n\nDigite o numero de medicoes a somar: ");

scanf("%d",&n);

fflush(stdin);

for (i = 0;i<n;i++) //gera um looping para inserir valores em sequência

{

printf("\nDigite o %2do. valor: ",i+1 );

scanf("%f",&Med);//scanf("%f",&Med);

fflush(stdin);


soma = soma + Med; //soma a cada looping os valores que são inseridos


printf("\nTotal: %.2f\n",soma);

fflush(stdin);

{

if (soma==valorpago){

printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

printf("VALOR ENCONTRADO. BATE COM VALOR PAGO. BAIXE OS DEBITOS !!!\n\n");

printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

system("PAUSE");

system("cls"); //limpa a tela acima


//Relatório de valores fornecidos e aparece normalmente

printf("\n\n\nxxxxxxxxxx RELACAO DE VALORES FORNECIDOS xxxxxxxxxxxxxxx");

printf("\n\nValor Pago: %.2f \t\n\nQtde de Valores: %d\t\n\nSoma Calculada: %.2f\n ", valorpago, n, soma);

for (i=0;i<n;i++) //Lista todos os valores do cálculo se a comparação tem sucesso

{

printf("\n\n %d.o Valor Fornecido: %.2f ",i+1,Med);

}

printf("\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");

break;

}

else

if (soma<valorpago){

printf("\n==>Falta: %.2f\n",valorpago-soma);

fflush(stdin);

continue;

system("PAUSE");

system("cls"); //limpa a tela acima


//Relatório de valores fornecidos. MAS não aparece


printf("\n\n\nxxxxxxxxxx RELACAO DE VALORES FORNECIDOS xxxxxxxxxxxxxxx");

printf("\n\nValor Pago: %.2f \t\n\nQtde de Valores: %d\t\n\nSoma Calculada: %.2f\n ", valorpago, n, soma);

for (i=0;i<n;i++) //Lista todos os valores do cálculo se a comparação tem sucesso

{

printf("\n\n %d.o Valor Fornecido: %.2f ",i+1,Med);

}

printf("\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");

break;

}



else{

printf("\n\n==>Ultrapassou: %.2f\n",soma-valorpago);

fflush(stdin);

continue;

system("PAUSE");

system("cls"); //limpa a tela acima


//Relatório de valores fornecidos. MAS não aparece


printf("\n\n\nxxxxxxxxxx RELACAO DE VALORES FORNECIDOS xxxxxxxxxxxxxxx");

printf("\n\nValor Pago: %.2f \t\n\nQtde de Valores: %d\t\n\nSoma Calculada: %.2f\n ", valorpago, n, soma);

for (i=0;i<n;i++) //Lista todos os valores do cálculo

{

printf("\n\n %d.o Valor Fornecido: %.2f ",i+1,Med);

}

printf("\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");

break;

}


getch();

}


}

printf("\n\nFim do Programa...");

getch();

}

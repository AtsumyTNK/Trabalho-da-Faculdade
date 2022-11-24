#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 10000

/* Estrutra para armazenar a ficha do cliente*/

struct cadastro
{
     int cod; /* Matricula do cliente*/
     char nome[50]; /* Nome do cliente*/
     char cpf[11]; /*CPF do cliente */
};

struct cadastro cliente[MAX];
int topo;
void inserir();
void excluir();
void pesquisar();
void alterar();

/* Programa Principal*/

int main()
{
    int opcao;
      char seguir = 's';

      topo = 0;

      while(seguir == 's')
      {
          printf("    * Cadastro de Cliente * \n\n");
          printf("        1) NOVO \n");
          printf("        2) REMOVER \n");
          printf("        3) PESQUISAR \n");
          printf("        4) ALTERAR \n");
          printf(" Digite sua opcao: ");
          scanf("%d%*c",&opcao);
          printf("\n");


      switch(opcao)
      {
        case 1:
             {
               printf(" INSERINDO NOVO REGISTRO \n\n");
               if(topo < MAX)
               {
                 inserir();
                 printf(" DADO INSERIDO COM SUCESSO!\n\n");
               }
               else
               {
                 printf(" Desculpe, Sitema de Cadastro esta no limite!\n\n");
               }
               break;
             }

        case 2:
             {
               if(topo == 0)
               {
                 printf("não há dados para serem excluidos!\n\n");
               }
               else
               {
                 excluir();
                 printf(" DADO EXCLUIDO COM SUCESSO!\n\n");
               }
               break;
             }
        case 3:
             {
               if(topo == 0)
               {
                 printf("não há dados no sistema!\n\n");
               }
               else
               {
                 printf(" PESQUIZANDO DADO\n\n");
                 pesquisar();
               }
               break;
             }
        case 4:
             {
               if(topo == 0)
               {
                 printf("não há dados no sistema!\n\n");
               }
               else
               {
                 printf(" ALTERARANDO DADOS!\n\n");
                 alterar();
                 printf(" DADOS ALTERADOS COM SUCESSO!\n\n");
               }
               break;
             }

        default:
               printf(" ( OPCAO INVALIDA! )\n\n");


      }
      printf(" CONTINUAR?(S/N) ");
      scanf("%c",&seguir);

      printf("\n");
      }

getch();
return 0;

}

    /* Funcao para inserir registros*/
     void inserir()
    {
         cliente[topo].cod = topo+1;
         printf(" MATRICULA : %d\n",cliente[topo].cod);
         printf(" NOME: ");
         fgets(cliente[topo].nome,50,stdin);
         printf (" CPF: ");
         fgets (cliente [topo]. cpf,14,stdin); /*Apenas numeros não aceitando caracteres especiais*/

         printf("\n");

         topo = topo + 1;
        }

void excluir()
{
     topo  = topo - 1;
}

//Função para listar os funcionarios cadastrados no Sistema

void listar()
{
     int i;

     for(i = 0;i < topo; i++)
     {
           printf(" ARQUIVO %d\n",(i+1));
           printf(" MATRICULA: %d \n",cliente[i].cod);
           printf(" NOME: %s",cliente[i].nome);
           printf("\n\n");
     }
}

//Função para alterar os clientes cadastrados no Sistema/

void alterar()
{
     int i,dado,cont = 0;

     printf(" ATENCAO! PARA ALTERAR UM REGISTRO \n");
     printf(" EFETUE UMA PESQUIZA PELO SEU CODIGO. \n\n");
     printf(" CODIGO DO REGISTRO: ");
     scanf("%d",&dado);
     for(i = 0;i < topo; i++)
     {
       if(dado == cliente[i].cod)
       {
         cont = cont + 1;

           printf(" NOME: ");
           fgets(cliente[topo].nome,50,stdin);

          printf(" CPF: ");
          fgets(cliente[topo].cpf,30,stdin);
       }
     }
     if(cont == 0)
     {
       printf(" DADO não ENCONTRADO!\n\n");
     }
}

//Função para pesquisar dados cadastrados no Sistema/

void pesquisar()
{
     int i,dado,cont = 0;
     printf(" PESQUIZA POR CODIGO: ");
     scanf("%d",&dado);
     for(i = 0;i < topo; i++)
     {
       if(dado == cliente[i].cod)
       {
          printf("Dado Encontrado \n\n");
          printf(" CODIGO: %d \n",cliente[i].cod);
          printf(" NOME: %s",cliente[i].nome);
          printf (" CPF: %s", cliente[i].cpf);
          printf("\n");
         cont = cont + 1;
       }
     }
     if(cont == 0)
     {
       printf(" Registro não Encontrado!\n\n");
     }
}

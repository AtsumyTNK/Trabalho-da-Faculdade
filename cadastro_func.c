#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 1000

/* Estrutra para armazenar a ficha do funcionario*/

struct cadastro
{
     int cod; /* Matricula do funcionario*/
     char nome[50]; /* Nome do funcionario*/
     char cargo[30]; /* Cargo do funcionario*/
     char cpf[11]; /*CPF do funcionario */
};

struct cadastro funcionario[MAX];
int topo;
void inserir();
void excluir();
void listar();
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
          printf("    * Cadastro de Funcionarios * \n\n");
          printf("        1) NOVO \n");
          printf("        2) REMOVER \n");
          printf("        3) LISTAR \n");
          printf("        4) PESQUISAR \n\n");
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
                 printf(" Listando os Funcionarios cadastrados\n\n");
                 listar();
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
                 printf(" PESQUIZANDO DADO\n\n");
                 pesquisar();
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
         funcionario[topo].cod = topo+1;
         printf(" MATRICULA : %d\n",funcionario[topo].cod);
         printf(" NOME: ");
         fgets(funcionario[topo].nome,50,stdin);
         printf(" CARGO: ");
         fgets(funcionario[topo].cargo,30,stdin);
         printf (" CPF: ");
         fgets (funcionario [topo]. cpf,14,stdin); /*Apenas numeros não aceitando caracteres especiais*/

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
           printf(" MATRICULA: %d \n",funcionario[i].cod);
           printf(" NOME: %s",funcionario[i].nome);
           printf(" CARGO: %s", funcionario [i]. cargo);
           printf("\n\n");
     }
}

//Função para alterar os funcionarios cadastrados no Sistema/

void alterar()
{
     int i,dado,cont = 0;

     printf(" ATENCAO! PARA ALTERAR UM REGISTRO \n");
     printf(" EFETUE UMA PESQUIZA PELO SEU CODIGO. \n\n");
     printf(" CODIGO DO REGISTRO: ");
     scanf("%d",&dado);
     for(i = 0;i < topo; i++)
     {
       if(dado == funcionario[i].cod)
       {
         cont = cont + 1;

           printf(" NOME: ");
           fgets(funcionario[topo].nome,50,stdin);

          printf(" CARGO: ");
          fgets(funcionario[topo].cargo,30,stdin);
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
       if(dado == funcionario[i].cod)
       {
          printf("Dado Encontrado \n\n");
          printf(" CODIGO: %d",funcionario[i].cod);
          printf(" NOME: %s",funcionario[i].nome);
          printf(" CARGO: %s",funcionario[i].cargo);
          printf("\n");
         cont = cont + 1;
       }
     }
     if(cont == 0)
     {
       printf(" Registro não Encontrado!\n\n");
     }
}

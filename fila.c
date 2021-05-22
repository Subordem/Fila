//João Gabriel
#include<stdio.h>
#include<stdlib.h>
#define TAMFILA 10


int fila[TAMFILA]={0,0,0,0,0,0,0,0,0,0};
int head=0,tail=0;
void lista_elementos(){

printf("\n============fila atual===========\n");
for (int i = 0; i < TAMFILA; i++)
{
    printf("-");
    printf("|%d|",fila[i]);
    printf("-");

    
    
}
 printf("\nHead: %d\n",head);
    printf("\ntail: %d\n",tail);
    printf("\n\n");

}

void enqueue(){

int val;
if (tail<TAMFILA)
{
    printf("\nInforme o elemento para adicionar a fila: ");
    scanf("%d",&val);
    fila[tail]=val;
    tail++;
    lista_elementos();
}



else{
    printf("\nA fila esta cheia...");
}




}

void dequeue(){

if (head<tail)
{
    fila[head]=0;
    head++;
    lista_elementos();
}
else{
    printf("\nA fila esta vazia...");
}



}

void clear(){

for (int i = 0; i < TAMFILA; i++)
{
    fila[i]=0;
}
head=0;
tail=0;




}


int main(){

int opcao=0;

do
{
   printf("\nSelecione a opcao\n\n");
   printf("\n[1] inserir(enqueue)");
   printf("\n[2] remover(dequeue)");
   printf("\n[3] listar elementos");
   printf("\n[4] limpar fila");
   printf("\n[-1] sair");
   printf("\nopcao: ");
   scanf("%d",&opcao);

   switch (opcao)
{
case 1:
    enqueue();
    break;


    case 2:
    dequeue();
    break;


    case 3:
    lista_elementos();

    break;


    case 4:
    clear();

    break;

case -1:
break;

default:
printf("\nOpcao invalida, mocorongo");
    break;
}
} while (opcao != -1);


    return 0;
}
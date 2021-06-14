//Eleicoes
//Para vereadores, segue lista: 111 - Joao do Frete; 222 - Maria da Pamonha; 333 - Ze da Farmacia; 444 - Voto Nulo.
//Para prefeito, segue lista: 11 - Dr. Zureta; 22 - Senhor Gomes; 44 - Voto Nulo.
//Contar com opcoes de: 1 - Votar; 2 - Apurar votos; 3 - Sair.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu,cv1,cv2,cv3,cv4,cp1,cp2,cp3,vtv,vtp;

int main(){

setlocale(LC_ALL, "Portuguese");



cv1,cv2,cv3,cv4,cp1,cp2,cp3=0;



do{

printf("\nBem vindo as eleicoes, escolha uma das seguintes opcoes:\n");

printf("\n 1 - Votar \n 2 - Apurar \n 3 - Sair\n");
printf("\nEscolha uma das opcoes acima para prosseguir e digite seu respectivo numero: ");

scanf("%d",&menu);

system("cls");

switch(menu){

   case 1:

    printf("\nPara quem voce deseja votar para Vereador?\n");

  printf("\n [111] Joao do Frete\n [222] Maria da Pamonha\n [333] Ze da Farmacia\n [444] Voto Nulo\n");
  printf("\nDigite o numero do candidato: ");

     scanf("%d",&vtv);


                                    system("cls");






switch (vtv){

     case 111:

      printf("\nVoto contabilizado.\n");

    cv1=cv1+1;

    break;

    case 222:

     printf("\nVoto contabilizado.\n");

    cv2=cv2+1;

    break;

    case 333:

     printf("\nVoto contabilizado.\n");

    cv3=cv3+1;

    break;

    case 444:

     printf("\nVoto contabilizado.\n");

    cv4=cv4+1;

    break;

    default:

    printf("\nNao ha opcao vinculada ao numero inserido, voto nao contabilizado para a estatistica\n");



}



  printf("\nE para o cargo de Prefeito?\n");

  printf("\n [11] Dr. Zureta\n [22] Senhor Gomes\n [44] Voto nulo\n");
    printf("\nDigite o numero do candidato: ");

     scanf("%d",&vtp);



                                        system("cls");


switch(vtp){


 while (vtp!=11,22,44);{

    case 11:

     printf("\nVoto contabilizado.\n");

    cp1=cp1+1;

    break;

    case 22:

     printf("Voto contabilizado.\n");

    cp2=cp2+1;

    break;

    case 44:

     printf("Voto contabilizado.\n");

    cp3=cp3+1;

    break;

    default:

    printf("\nNao ha opcao vinculada ao numero inserido, voto nao contabilizado para a estatistica\n");


  }

   }
printf("\n");
system("pause");

   case 2:



    printf("\nNumero de votos para vereadores, por candidato:\n");

    printf("\nVoto para Joao do Frete:%d", cv1);

    printf("\nvoto para Maria da Pamonha:%d", cv2);

    printf("\nvoto para Ze da Farmacia: %d", cv3);

    printf("\nvoto nulo: %d\n", cv4);

    printf("\nNumero de votos para Prefeito, por candidato:\n");

    printf("\nVoto para Dr. Zureta:%d", cp1);

    printf("\nvoto para Senhor Gomes: %d" , cp2);

    printf("\nvoto para nulo: %d", cp3);

    printf("\n");

    break;

  }

 } while (menu!=3);
  return 0;
 }

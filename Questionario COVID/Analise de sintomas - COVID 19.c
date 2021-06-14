//O paciente precisa ser abordado pela interface e preencher os seguintes dados para se cadastrar no sistema:

//1ºCPF; 2º Nome; 3º Sexo; 4º Idade.

//Após se cadastrar, precisará responder algumas questões sobre sintomas, que somarão pontos, mas não irão
//subtrair. São eles:

//Tem Febre? (5 pontos);
//Tem dor de cabeça? (1 ponto);
//Tem secreção nasal ou espirros? (1 ponto);
//Tem dor/irritação na garganta? (1 ponto);
//Tem tosse seca? (3 pontos);
//Tem dificuldade respiratória? (10 pontos);
//Tem dores no corpo? (1 ponto);
//Tem diarréia? (1 ponto);
//Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19? (10 pontos);
//Esteve em locais com grande aglomeração? (3 pontos).

//Se 0 a 9 - Ala de Baixo Risco;
//Se 10 a 19 - Ala de Médio Risco;
//Se 20 ou mais - Ala de Alto Risco.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


//system("pause") - segura o sistema para não ir para a proxima etapa, pedindo para o usuario teclar algo.
//setlocale(LC_ALL, "Portuguese") - Teoricamente, usa-se para possibilitar caracteres especiais do Portugues, como ^,´,Ç e etc...
//system("cls") - //apaga o texto mostrado em tela.
//printf("...") - Usa para textos em tela.


char personalregister[100][50];
char age[100][50];
char name[100][50];
char sex[100][50];

char respostas;
int paciente=0;

int main(){


setlocale(LC_ALL, "ptb");


personalregister,name,sex,age;


printf("\nOla, bem-vindo ao auto-atendimento para analise dos sintomas do Covid-19.\n");

system("pause");
system("cls");

printf("\nAntes de iniciarmos os procedimentos, precisamos realizar o seu cadastro.\n");

system("pause");
system("cls");


printf("\nPor favor, informe seu CPF sem tracos, pontos, virgulas e espaços: \n");
scanf("%s",&personalregister);

fflush(stdin);

printf("\nAgora, escreva somente seu primeiro nome: \n");
scanf("%s",&name);

fflush(stdin);

printf("\nPreciso saber sua idade: \n");
scanf("%s",&age);

fflush(stdin);

printf("\nAgora diga seu sexo: Masculino ou Feminino?\n");
scanf("%s",&sex);

fflush(stdin);

system("cls");

printf("\nVamos confirmar?\n");
printf("\nSeu nome e: %s.\n", &name);
printf("\nSua idade e: %s.\n", &age);
printf("\nSeu sexo e: %s.\n", &sex);
printf("\nPor ultimo, seu CPF e: %s.\n", &personalregister);

system("pause");
system("cls");


printf("\nAgora preciso que responda algumas questoes sobre sintomas relacionados ao COVID-19.\n");
printf("\nConforme as respostas, poderemos lhe encaminhar para o local mais apropriado.\n");

system("pause");
system("cls");

printf("\nLembre-se, e necessario ser sincero em todas as respostas.\n");
printf("\nUse 1 para sim e 0 para nao, nao esqueca desse detalhe.\n");
printf("\nEntao, vamos la...\n");

system("pause");
system("cls");

//Pergunta 1:

printf("\nEsta com febre?\n");
scanf("%i", &respostas);

if (respostas == 1){

  paciente=paciente+5;

}
system("cls");
system("pause");
fflush(stdin);

//Pergunta 2:

printf("\nTem dores de cabeca?\n");
scanf("%i", &respostas);

if (respostas == 1){

    paciente=paciente+1;
}
system("cls");
system("pause");
fflush(stdin);

//Pergunta 3:

printf("\nEsta com secrecao nasal ou espirros?\n");
scanf("%i", &respostas);

if (respostas == 1){

    paciente=paciente+1;
}
system("cls");
system("pause");
fflush(stdin);

//Pergunta 4:

printf("\nTem dores ou irritacao na garganta?\n");
scanf("%i", &respostas);

if (respostas == 1){

    paciente=paciente+1;
}
system("cls");
system("pause");
fflush(stdin);

//Pergunta 5:

printf("\nEsta com tosse seca?\n");
scanf("%i", &respostas);

if (respostas == 1){

    paciente=paciente+3;
}
system("cls");
system("pause");
fflush(stdin);

//Pergunta 6:

printf("\nEsta com dificuldade respiratoria?\n");
scanf("%i", &respostas);

if (respostas == 1){

    paciente=paciente+10;
}
system("cls");
system("pause");
fflush(stdin);

//Pergunta 7:

printf("\nTem dores corporais?\n");
scanf("%i", &respostas);

if (respostas == 1){

    paciente=paciente+1;
}
system("cls");
system("pause");
fflush(stdin);

//Pergunta 8:

printf("\nEsta ou teve diarreia?\n");
scanf("%i", &respostas);

if (respostas == 1){

    paciente=paciente+1;
}
system("cls");
system("pause");
fflush(stdin);

//Pergunta 9:

printf("\nEsteve em contato, nos ultimos 14 dias, com um caso diagnosticado com COVID-19?\n");
scanf("%i", &respostas);

if (respostas == 1){

    paciente=paciente+10;
}
system("cls");
system("pause");
fflush(stdin);

//Pergunta 10:

printf("\nEsteve em locais com grande aglomeração?\n");
scanf("%i", &respostas);

if (respostas == 1){

    paciente=paciente+3;
}
system("cls");
system("pause");
fflush(stdin);

//Fim das perguntas.

printf("\nAgora vamos analisar os seus sintomas...\n");
system("pause");
system("cls");

//Agora é necessário fazer a condição das alas.

if (paciente == 0){

printf("\nProvavelmente este nao e o melhor lugar para se estar no momento.\n");

}else if (paciente <= 9){

printf("\nVoce deve se encaminhar para a ala de baixo risco.\n");

}else if (paciente >= 10 && paciente < 20){

printf("\nVoce deve se encaminhar para a ala de medio risco.\n");

}else if (paciente >= 20){

printf("\nVoce deve se encaminhar para a ala de alto risco.\n");

}

system("pause");

return 0;

}


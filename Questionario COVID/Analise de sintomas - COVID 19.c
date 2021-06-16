char personalregister[100][50];
char age[100][50];
char name[100][50];
char sex[100][50];

char respostas;
int paciente=0;

int main(){


setlocale(LC_ALL, "ptb");

    //Create a archive
    FILE *sin_arq;

    //Command to open the file (To save data)
    sin_arq = fopen("data patient COVID.txt","a");



personalregister,name,sex,age;


printf("\nHello, here you will be able to answer some question about the symptoms that you are feeling, related to COVID.\n");

system("pause");
system("cls");

printf("\nBefore we get started, we need to create your patient archive.\n");

system("pause");
system("cls");


printf("\nWrite your first name: \n");
scanf("%s",&name);
fprintf(sin_arq, "\nName: %s.\n", name);
fflush(stdin);

printf("\nI need to know your age: \n");
scanf("%s",&age);
fprintf(sin_arq, "Age: %s.\n", age);
fflush(stdin);

printf("\nNow tell me, are you a woman or men?\n");
scanf("%s",&sex);
fprintf(sin_arq, "Sex: %s.\n", sex);
fflush(stdin);

printf("\nNow your personal register (ID): \n");
scanf("%s",&personalregister);
fprintf(sin_arq, "ID: %s.\n", personalregister);
fflush(stdin);
system("cls");


printf("\nLet's check it out.\n");
printf("\nYour name is: %s.\n", &name);
printf("\nYour age is: %s.\n", &age);
printf("\nYour sex is: %s.\n", &sex);
printf("\nAnd your ID is: %s.\n", &personalregister);

system("pause");
system("cls");


printf("\nNow some question will be asken, you need to be honest about your symptoms related to COVID-19.\n");
printf("\nAfter the questions, we will be able to guide you to the better local.\n");

system("pause");
system("cls");

printf("\nRemember, you need to be honest.\n");
printf("\nUse 1 for yes and 0 for no, don't forget it, okay?\n");

system("pause");
system("cls");

//1º Question:

printf("\nDo you have fever?\n");
scanf("%i", &respostas);
fprintf(sin_arq, "P1: %i.", respostas);


if (respostas == 1){

  paciente=paciente+5;

}
system("cls");
system("pause");
fflush(stdin);

//2º  Question:

printf("\nDo you have headache?\n");
scanf("%i", &respostas);
fprintf(sin_arq, "P2: %i. ", respostas);

if (respostas == 1){

    paciente=paciente+1;
}
system("cls");
system("pause");
fflush(stdin);

//3º Question:

printf("\nDo you have nasal discharge or sneezes?\n");
scanf("%i", &respostas);
fprintf(sin_arq, "P3: %i. ", respostas);

if (respostas == 1){

    paciente=paciente+1;
}
system("cls");
system("pause");
fflush(stdin);

//4º Question:

printf("\nDo you feel pain or irritation in the throat?\n");
scanf("%i", &respostas);
fprintf(sin_arq, "P4: %i. ", respostas);

if (respostas == 1){

    paciente=paciente+1;
}
system("cls");
system("pause");
fflush(stdin);

//5º Question:

printf("\nDo you have a dry cough?\n");
scanf("%i", &respostas);
fprintf(sin_arq, "P5: %i. ", respostas);

if (respostas == 1){

    paciente=paciente+3;
}
system("cls");
system("pause");
fflush(stdin);

//6º Question:

printf("\nAre you with any type of breathing difficulty?\n");
scanf("%i", &respostas);
fprintf(sin_arq, "P6: %i. ", respostas);

if (respostas == 1){

    paciente=paciente+10;
}
system("cls");
system("pause");
fflush(stdin);

//7º Question:

printf("\nDo you have any corporal pain?\n");
scanf("%i", &respostas);
fprintf(sin_arq, "P7: %i. ", respostas);

if (respostas == 1){

    paciente=paciente+1;
}
system("cls");
system("pause");
fflush(stdin);

//8º Question:

printf("\nAre you with diarrhea?\n");
scanf("%i", &respostas);
fprintf(sin_arq, "P8: %i. ", respostas);

if (respostas == 1){

    paciente=paciente+1;
}
system("cls");
system("pause");
fflush(stdin);

//9º Question:

printf("\nDo you, in any case, make contact with someone who got COVID, in these last 14 days?\n");
scanf("%i", &respostas);
fprintf(sin_arq, "P9: %i. ", respostas);

if (respostas == 1){

    paciente=paciente+10;
}
system("cls");
system("pause");
fflush(stdin);

//10º Question:

printf("\nHave you been to crowded places?\n");
scanf("%i", &respostas);
fprintf(sin_arq, "P10: %i.\n", respostas);

if (respostas == 1){

    paciente=paciente+3;
}

system("cls");
system("pause");
fflush(stdin);

//End

printf("\nNow let's us analyze your symptoms...\n");
system("pause");
system("cls");

//Now you must do the if condition

if (paciente == 0){

printf("\nThat's not the best place to be now.\n");

}else if (paciente <= 9){

printf("\nYou must go to the low level ward.\n");

}else if (paciente >= 10 && paciente < 19){

printf("\nYou must go to the medium level ward.\n");

}else if (paciente >= 20){

printf("\nYou must go to the high risk ward.\n");

}


printf("\nFollow the instructions, your answers will be saved for internal uses.\n");
system("pause");
system("cls");


printf("\nYour got %i points in relation about the symptoms that you have.\n", paciente);
fprintf(sin_arq, "Soma de pontos: %i.\n", paciente);
system("pause");



return 0;
    //Used to close an archive and save datas
    fclose(sin_arq);

}


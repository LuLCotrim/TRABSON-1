#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>
#include <time.h>

struct data{

    int dia;
    int mes;
    int ano;
};

struct registro{

    char nome[30];
    struct data date;
    char cpf[16];

}reg;

int id(int dia, int mes, int ano) { //retorna idade de acordo com o nascimento

    int dAtual;
    int mAtual;
    int aAtual;

    time_t myTime;
    myTime = time(NULL);
    struct tm tm = *localtime(&myTime);

    dAtual = tm.tm_mday;
    mAtual = tm.tm_mon + 1;
    aAtual = tm.tm_year + 1900;

    if (mes > mAtual) {
        return aAtual - ano - 1;
    }
    if (mes == mAtual) {
        if (dia > dAtual) {
            return aAtual - ano - 1;
        } else {
            return aAtual - ano;
        }
    }
    if (mes < mAtual) {
        return aAtual - ano;
    }
}

int valid(char x[]){ /*Retorna Valor//Recomendável string ter mais doque preciso*/
    int i,
        aux=1;

    for(i=0;i<15;i++){
        if(((i>=0) && (i<=2)) || ((i>=4) && (i<=6)) || ((i>=8) && (i<=10)) || ((i==12) || (i==13))){
            if(isdigit(x[i])){
            }else{
                return 0;
            }
        }else{
        }if((i==3)||(i==7)){
            if(x[i]!='.'){
               return 0;
            }
        }else{
        }if(i==11){
            if(x[i]!='-'){
                return 0;
            }
        }else{
            if(strlen(x)>14){
                return 0;
            }
        }
    }

    return 1;
}

int valida(char x[]){ /*Retorna com Print//Recomendável string ter mais doque preciso*/
    int i,
        aux=1;

for(i=0;i<15;i++){
        if(((i>=0) && (i<=2)) || ((i>=4) && (i<=6)) || ((i>=8) && (i<=10)) || ((i==12) || (i==13))){
            if(isdigit(x[i])){
            }else{
                aux=0;
                break;
            }
        }else{
        }if((i==3)||(i==7)){
            if(x[i]!='.'){
                aux=0;
                break;
            }
        }else{
        }if(i==11){
            if(x[i]!='-'){
                aux=0;
                break;
            }
            }
    }

    if(aux==0){
        printf("Cpf invalido.\n");
        return 0;
    }else{
        printf("Cpf valido.\n");
    }

}


int main(){

    int idade;

    printf("Digite o seu nome: \n");
    fgets(reg.nome,30,stdin);

    do{    
        printf("Digite o seu CPF: \n");
        
        fgets(reg.cpf,15,stdin);
        setbuf(stdin,NULL);
        if(valid(reg.cpf) == 0){
            printf("Tamanho de cpf incorreto\n");
        }

        valida(reg.cpf);

    }while(valid(reg.cpf) == 0 || valida(reg.cpf) == 0);    

    
    do{

        printf("Digite a data de nascimento\n");
        printf("dia:");
        setbuf(stdin,NULL);
        scanf("%d",&reg.date.dia);
        printf("mes:");
        scanf("%d",&reg.date.mes);
        printf("ano:");
        scanf("%d",&reg.date.ano);

        if(reg.date.dia > 31){
            printf("Digite um dia valido\n");
        }
        if(reg.date.mes > 12){
            printf("Digite um mes valido\n");
        }

        idade = id(reg.date.dia,reg.date.mes,reg.date.ano);

    }while(reg.date.dia >31|| reg.date.mes >12);



    printf("seu nome é: %s",reg.nome);
    printf("Você nasceu no dia: %d/%d/%d\n",reg.date.dia,reg.date.mes,reg.date.ano);
    printf("Você tem %d anos\n",idade);
    printf("Seu cpf é: %s",reg.cpf);



    return 0;
}

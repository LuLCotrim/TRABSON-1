#include <stdio.h>
#include <string.h>

struct data{

    int dia;
    int mes;
    int ano;
};

struct registro{

    char nome[30];
    struct data date;
    char cpf[15];

}reg;


int main(){

    printf("Digite o seu nome: \n");
    fgets(reg.nome,30,stdin);

    printf("Digite o seu CPF: \n");
    fgets(reg.cpf,15,stdin);

    printf("Digite a data de nascimento\n");
    printf("dia:");
    scanf("%d",&reg.date.dia);
    printf("mes:");
    scanf("%d",&reg.date.mes);
    printf("ano:");
    scanf("%d",&reg.date.ano);

    printf("seu nome é: %s",reg.nome);
    printf("Você nasceu no dia: %d/%d/%d\n",reg.date.dia,reg.date.mes,reg.date.ano);
    //IDADE printf("")
    printf("Seu cpf é: %s",reg.cpf);



    return 0;
}
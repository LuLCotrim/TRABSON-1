
/*Verifica apenas o formato do cpf '000.000.000-00'*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

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

void valida(char x[]){ /*Retorna com Print//Recomendável string ter mais doque preciso*/
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
        printf("Cpf invalido.");
    }else{
        printf("Cpf valido.");
    }

}

int main(){ /*Testando a função*/
    char cpf[15];
    printf("Digite o cpf: ");
    gets(cpf);

    if(valid(cpf)==0){
        printf("Cpf invalido.");
    }else{
        printf("Cpf valido.");
    }
    valida(cpf);
    return 0;
}

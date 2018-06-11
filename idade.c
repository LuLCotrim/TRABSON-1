#include <stdio.h>
#include <time.h>

int main(int dia, int mes, int ano) {

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

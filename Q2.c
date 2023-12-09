#include <stdio.h>

int main() {

    int X, Y;
    float valor;

    scanf("%d %d", &X, &Y);

    switch(X){

        case 1:
            valor = Y * 4;
            printf("Total: R$ %0.2lf\n", valor);
            break;
        case 2:
            valor = Y * 4.5;
            printf("Total: R$ %0.2lf\n", valor);
            break;
        case 3:
            valor = Y * 5;
            printf("Total: R$ %0.2lf\n", valor);
            break;
        case 4:
            valor = Y * 2;
            printf("Total: R$ %0.2lf\n", valor);
            break;
        case 5:
            valor = Y * 1.5;
            printf("Total: R$ %0.2lf\n", valor);
            break;
    }

    return 0;
}
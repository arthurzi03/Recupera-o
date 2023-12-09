#include <stdio.h>

int main() {
    int casos, termos;
    scanf("%d", &casos);
    for (int i = 0; i < casos; i++) {
        scanf("%d", &termos);
        int resultado = (termos % 2 == 0) ? 0 : 1;
        printf("%d\n", resultado);
    }
return 0;
}
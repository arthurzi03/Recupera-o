#include <stdio.h>

int main() {
    int grenais = 0, vitoriasInter = 0, vitoriasGremio = 0, empates = 0;
    int golsInter, golsGremio, novoGrenal;
    do {

        scanf("%d %d", &golsInter, &golsGremio);
        grenais++;
        
        if (golsInter > golsGremio) vitoriasInter++;
        else if (golsGremio > golsInter) vitoriasGremio++;
        else empates++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novoGrenal);

    } while (novoGrenal == 1);

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", grenais, vitoriasInter, vitoriasGremio, empates);
    if (vitoriasInter > vitoriasGremio) printf("Inter venceu mais\n");
    else if (vitoriasGremio > vitoriasInter) printf("Gremio venceu mais\n");
    else printf("Não houve vencedor\n");

    return 0;
}

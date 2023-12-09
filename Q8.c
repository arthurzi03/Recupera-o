#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int T;
        scanf("%d", &T);

        int year = 2015 - T;
        
        printf("%d %s\n", (year <= 0) ? -year + 1 : year, (year <= 0) ? "A.C." : "D.C.");
    }

    return 0;
}

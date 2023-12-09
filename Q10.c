#include <stdio.h>
 
int main() {
 
    int T, V;
    double D, L;
    
    scanf("%d", &T);
    scanf("%d", &V);
    
    D = V * T;
    
    L = D / 12;
    
    printf("%0.3lf\n", L);
 
    return 0;
}
#include <stdio.h>

int main() {
    
    
    int V , a, b, c, S;
    printf("Вхідні дані: a = , b = , c = \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    V = a * b * c; 
    S = 2 * (a * b + b * c + a * c);

    printf("Вихідні дані: V = %d, S = %d\n", V, S);

    return 0;
}
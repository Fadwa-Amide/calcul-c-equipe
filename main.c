#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

float moyenne(int a, int b) {
    return (a + b) / 2.0f;
}

int main() {
    printf("Bienvenue dans notre projet C\n");
    
    int x = 4, y = 5;
    printf("Le produit est : %d\n", produit(x, y));
    printf("La moyenne est : %.2f\n", moyenne(x, y));
    return 0;



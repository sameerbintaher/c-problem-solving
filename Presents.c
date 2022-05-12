#include <stdio.h>

int main() {
    int n, b, mas[105];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &b);
        mas[b] = i;
    }
    for (int i = 1; i <= n; i++) {
        printf("%d ",mas[i]); 
    }
}
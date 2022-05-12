#include <stdio.h>
#include <string.h>
int main() {
    int d;
    char s[100], t[100];
    scanf("%s %s", &s, &t);
    d = strcmp(s, t);
    if(d < 0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}

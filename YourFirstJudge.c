#include<stdio.h>
#include<string.h>
int main()
{
    int i, t, n, k;
    char a[15]="Hello,World!", b[15];
    gets(b);
    int d = strcmp(a, b);
    if(d==0) printf("AC\n");
    else printf("WA\n");
}

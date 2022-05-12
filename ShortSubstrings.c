//Bismillahir Rahmanir Rahim
#include<stdio.h>
#include<string.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    while(n--)
    {
        char s[200];
        char t[200];
        scanf("%s", s);
        int len = strlen(s);
        for(int i=0; i<len-1; i++){
            if(i == 0){
                n +=s[i];
            }
            if(s[i] == s[i-1]){
                n +=s[i];
                i++;
            }
        }
        n +=s[len-1];
        printf("%s\n",t);

    }

    return 0;
}
#include<stdio.h>
#include<stdbool.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        int ar[n];
        for (int i = 0; i < n; ++i) {
            scanf("%d",&ar[i]);
        }
        bool found = false;
        for (int i = 1; i <n-1 ; ++i) {
            if (ar[i]!=ar[i-1] && ar[i]!=ar[i+1]){
                printf("%d\n",i+1);
                found = true;
            }
        }
        if (!found){
            if (ar[0]!=ar[1]){
                printf("1\n");
            } else{
                printf("%d\n",n);
            }
        }
    }
}
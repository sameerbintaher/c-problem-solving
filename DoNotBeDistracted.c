#include<stdio.h>
#include<string.h>
int main(){
  int t;
  scanf("%d",&t);
  int n, check;
  char s[200];
  while(t--){
    scanf("%d",&n);
    scanf("%s",s);
    char s2[n], elem = s[0];
    int k = 0;
    check = 0;
    for(int i = 0; i < n; i++){
      if(s[i] != elem){
        s2[k] = elem;
        elem = s[i];
        k++;
      }
      for(int j = 0; j < k; j++){
        if(s[i] == s2[j]){
            printf("NO\n");
          check = 1;
          break;
        }
      }
      if(check == 1){
        break;
      }
    }
    if(check == 0){
        printf("YES\n");
    }
  }
  return 0;
}
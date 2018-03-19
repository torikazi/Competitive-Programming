#include<bits/stdc++.h>

using namespace std;
int main(){
     int n,a[200],b[200],i,j,f;
     scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
     }
     for(i=0,f=0;i<n;i++){
          for(j=0;j<n;j++){
               if(i!=j){
                    if(a[i]+b[i]==a[j]&&a[j]+b[j]==a[i]){
                        f=1;
                        printf("YES\n");
                        break;
                    }
               }
          }
          if(f==1) break;
     }
     if(!f) printf("NO\n");
}

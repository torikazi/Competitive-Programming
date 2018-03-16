#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200005],i,f,k,cs=0,kk;
    while(scanf("%d",&n)==1 && n)
    {
        f=1;

        while(1)
        {
            kk=1;
            stack<int>s;
            for(i=1;i<=n;i++)
            {
                scanf("%d",&a[i]);
                if(a[1]==0)
                {
                    f=0;
                    break;
                }
            }
            if(!f) break;
            for(i=1,k=1;k<=n;)
            {
                if(i<a[k]){
                    s.push(i);
                    i++;
                }
                else if(i>a[k])
                {
                    if(a[k]==s.top())
                    {
                        s.pop();
                        k++;
                    }
                    else
                    {
                        kk=0;
                        cout<<"No"<<endl;
                        break;
                    }
                }
                else{
                    k++;
                    i++;
                }
                //cout<<i<<" "<<k<<endl;
            }
            if(s.empty()) cout<<"Yes"<<endl;
            else if(kk) cout<<"No"<<endl;

        }
        printf("\n");
    }
}

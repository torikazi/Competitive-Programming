#include<bits/stdc++.h>
using namespace std;
int main()
{
      string a[200],x;
      int t,i,j=0,n,cnt[30],m,s,b[200][30],l,ans,mx,k;
      cin>>n;
       memset(b,-1,sizeof(b));
      while(n--)
      {
            memset(cnt,0,sizeof(cnt));
            cin>>x;
            for(i=0;i<x.size();i++)
            {
                  m=x[i]-'a';
                  cnt[m]=1;
            }
            l=0;
            for(i=0,s=0;i<26;i++){
                  if(cnt[i]==1) b[j][l++]=i;
            }
            if(l<=2)
            {
                  a[j]=x;
                  j++;
            }
            else
            {
                b[j][0]=-1;
                b[j][1]=-1;
            }
      }

      ans=0;
      mx=0;

     for(l=0;l<26;l++)
      {
            for(k=0;k<26;k++)
            {
                  for(i=0,ans=0;i<j;i++)
                  {
                       if((b[i][0]==l && b[i][1]==-1)|| (b[i][0]==k && b[i][1]==-1)|| (b[i][0]==l && b[i][1]==k) )
                        {

                              ans+=a[i].size();

                        }
                  }
                  if(ans>=mx) mx=ans;

            }
      }
      cout<<mx<<endl;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
      string a,s,w[100009],n[100009];
      int t,i=0,j=0,k=0,f,l;
      for(i=0;i<=100000;i++)
      {
            w[i]="";
            n[i]="";
      }
      for(i=0;i<5;i++) cout<<w[i];
      cin>>a;

      char h=34;
      s="";
      for(i=0;i<a.size()+1;i++)
      {
            if(a[i]==',' || a[i]==';' || i==a.size())
            {

                  if(a[i-1]==';' || a[i-1]==',')
                  {
                        w[j]="";

                        j++;
                  }
                  else if(s[0]=='0' && s.size()==1)
                  {

                        n[k]+=s;
                        k++;
                  }
                  else if(s[0]>='0' && s[0]<='9')
                  {
                        for(l=0,f=1;l<s.size();l++)
                        {
                              if(s[0]=='0')
                              {
                                    f=0;
                                    break;
                              }
                              else if(s[l]>='0' && s[l]<='9')
                                    f=1;
                              else
                              {
                                    f=0;
                                    break;
                              }
                        }
                        if(f==0 )
                        {
                             // cout<<s<<endl;
                              w[j]+=s;
                              j++;
                        }
                        else
                        {
                               n[k]+=s;
                              k++;
                        }
                  }
                  else
                  {
                        w[j]+=s;
                        j++;
                  }
                  s="";
            }
            else
            {
                  s+=a[i];
            }

      }
      /*cout<<j<<" "<<k<<endl;
      for(i=0;i<j;i++)
            cout<<w[i]<<endl;
      for(i=0;i<k;i++)
            cout<<n[i]<<endl;
*/
      if(k==0) printf("-\n");
      else
      {
            for(i=0;i<k;i++)
            {
                  if(i!=0)
                  {
                        cout<<","<<n[i];
                  }
                  else cout<<h<<n[i];

            }
             cout<<h<<endl;
      }
      if(j==0) printf("-\n");
      else
      {
            for(i=0;i<j;i++)
            {
                  if(i!=0)
                  {
                        cout<<","<<w[i];
                  }
                  else cout<<h<<w[i];

            }
             cout<<h<<endl;
      }

}

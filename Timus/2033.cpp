#include<bits/stdc++.h>
using namespace std;

int main()
{
       string s,a[10];
       int b[10],c[10],k=0,i,j,p,f;
       memset(b,0,sizeof(b));
       memset(c,0,sizeof(c));
       cin>>s;
       cin>>s;
       cin>>p;
       a[k]=s;
       b[k]=p;
       c[k]++;
       k++;

       cin>>s;
       cin>>s;
       cin>>p;
       for(i=0,f=0;i<k;i++)
       {
              if(a[i]==s)
              {
                  c[i]++;
                  if(p<b[i]) b[i]=p;
                  f=1;
                  break;
              }
       }
       if(!f)
       {
              a[k]=s;
              b[k]=p;
              c[k]++;
              k++;
       }

       cin>>s;
       cin>>s;
       cin>>p;
       for(i=0,f=0;i<k;i++)
       {
              if(a[i]==s)
              {
                  c[i]++;
                  if(p<b[i]) b[i]=p;
                  f=1;
                  break;
              }
       }
       if(!f)
       {
              a[k]=s;
              b[k]=p;
              c[k]++;
              k++;
       }

       cin>>s;
       cin>>s;
       cin>>p;
       for(i=0,f=0;i<k;i++)
       {
              if(a[i]==s)
              {
                  c[i]++;
                  if(p<b[i]) b[i]=p;
                  f=1;
                  break;
              }
       }
       if(!f)
       {
              a[k]=s;
              b[k]=p;
              c[k]++;
              k++;
       }

       cin>>s;
       cin>>s;
       cin>>p;
       for(i=0,f=0;i<k;i++)
       {
              if(a[i]==s)
              {
                  c[i]++;
                  if(p<b[i]) b[i]=p;
                  f=1;
                  break;
              }
       }
       if(!f)
       {
              a[k]=s;
              b[k]=p;
              c[k]++;
              k++;
       }

       cin>>s;
       cin>>s;
       cin>>p;
       for(i=0,f=0;i<k;i++)
       {
              if(a[i]==s)
              {
                  c[i]++;
                  if(p<b[i]) b[i]=p;
                  f=1;
                  break;
              }
       }
       if(!f)
       {
              a[k]=s;
              b[k]=p;
              c[k]++;
              k++;
       }

       for(i=0;i<k;i++)
       {
              for(j=0;j<k;j++)
              {
                     if(c[i]>c[j])
                     {
                            swap(a[i],a[j]);
                            swap(b[i],b[j]);
                            swap(c[i],c[j]);
                     }
              }
       }
       for(i=0;i<k;i++)
       {
              for(j=0;j<k;j++)
              {
                     if(c[i]==c[j] && b[i]<b[j])
                     {
                            swap(a[i],a[j]);
                            swap(b[i],b[j]);
                            swap(c[i],c[j]);
                     }
              }
       }

       cout<<a[0]<<endl;
}

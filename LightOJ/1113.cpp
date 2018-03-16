#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1;
    string s,a,c,x;
    cin>>t;
    while(t--)
    {
        stack<string>f,b;
        c="http://www.lightoj.com/";
        printf("Case %d:\n",cs++);
        while(1)
        {
            cin>>s;
            if(s=="QUIT") break;
            else if(s=="VISIT")
            {
                cin>>a;
                b.push(c);
                c=a;
                cout<<c<<endl;
                while(!f.empty())
                {
                    f.pop();
                }
            }
            else if(s=="BACK")
            {

                if(b.empty())
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    f.push(c);

                    c=b.top();
                    cout<<c<<endl;
                    b.pop();
                }
            }
            else if(s=="FORWARD")
            {
                if(f.empty())
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    b.push(c);

                    c=f.top();
                    cout<<c<<endl;
                     f.pop();
                }
            }
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,m,x,cs=1;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        printf("Case %d:\n",cs++);
        deque<int>q;
        for(i=0;i<m;i++)
        {
            cin>>a;
            if(a=="pushLeft")
            {
                cin>>x;
                if(q.size()==n) cout<<"The queue is full"<<endl;
                else
                {
                    q.push_front(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
            }
            else if(a=="pushRight")
            {
                cin>>x;
                if(q.size()==n) cout<<"The queue is full"<<endl;
                else
                {
                    q.push_back(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
            }
            else if(a=="popLeft")
            {
                if(q.empty()) cout<<"The queue is empty"<<endl;
                else
                {
                    cout<<"Popped from left: "<<q.front()<<endl;
                    q.pop_front();
                }
            }
            else if(a=="popRight")
            {
                if(q.size()==0) cout<<"The queue is empty"<<endl;
                else
                {
                    cout<<"Popped from right: "<<q.back()<<endl;
                    q.pop_back();
                }
            }
        }
    }
}

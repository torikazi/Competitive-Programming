#include<iostream>
#include<vector>
using namespace std;
vector <int> v;


int main()
{
    int n;
    while(true)
    {
        cin>>n;
        if(n==0) break;
        vector<int>vii(n);
        for(int i=0;i<n;i++)
            cin>>vii[i];
        for(int i=n;i>0;i--)
            v.insert(v.begin()+vii[i-1],i);
        for(int i=0;i<n-1;i++) cout<<v[i]<<",";
        cout<<v[n-1]<<endl;
        v.clear();


    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool comp(char a, char b){
	if(tolower(a) == tolower(b)){
		return a<b;
	}
	return tolower(a) < tolower(b);
}

int main()
{
    int t,i,j;
    string a;
    map<string,int>mp;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        cin>>a;
        sort(a.begin(),a.end(),comp);
        cout<<a<<endl;
        mp[a]=1;
        while(next_permutation(a.begin(),a.end(),comp)){
            if(!mp[a]){
                cout<<a<<endl;
                mp[a]=1;
            }
        }
    }
}

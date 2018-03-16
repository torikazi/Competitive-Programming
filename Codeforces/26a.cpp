#include<bits/stdc++.h>
using namespace std;

int noOfPrimeDivi[3000];

int main() {
	int i, j, a, count=0;

	for (i = 2; i <= 1500; i++){
		if (noOfPrimeDivi[i] == 0){
			for (j = i * 2; j <= 3000; j += i){
				noOfPrimeDivi[j]++;
			}
		}
	}
	cin >> a;
	for (i = 6; i <= a; i++){
		if (noOfPrimeDivi[i] == 2)count++;
	}
	cout << count << endl;
}

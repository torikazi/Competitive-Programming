#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
   //  ios_base::sync_with_stdio(false); cin.tie(0);
     long long int a, b, x, y;
     cin >> a >> b >> x >> y;
     ll g = __gcd(x, y);
     x = x / g;
     y = y / g;
     ll m = min(a / x, b / y);
     cout << m * x << " " << m * y << "\n";
     return 0;
}

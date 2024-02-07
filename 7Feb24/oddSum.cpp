#include <bits/stdc++.h>
using namespace std;
#define lld long long 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	lld t;
	cin>>t;
	while(t--)
	{
	    lld x;
	    cin>>x;
	    if(x == 0 || x == 1 || x == 2){
	        cout << 1 << "\n";
	        continue;
	    }
	    x-=2;
	    lld sum = 1 + (x*(x+1));
	    cout << sum << "\n";
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int num = 0;
	    while(x != 0){
	        int rem = x%10;
	        num = num*10 + rem;
	        x/=10;
	    }
	    cout << num << endl;
	}
	return 0;
}

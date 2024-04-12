#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b;
	    cin>>a>>b;
	   // cout << ((float)((b*100)/a)) << endl;
	    if((float)((b*100)/a) >= 50.0) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}

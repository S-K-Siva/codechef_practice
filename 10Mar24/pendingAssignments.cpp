#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    int q = z * 24 * 60;
	    if(x*y <= q) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}

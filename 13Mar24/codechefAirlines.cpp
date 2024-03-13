#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    x *= 10;
	    
	    cout << min(x,y)*z << endl;
	}
	return 0;
}

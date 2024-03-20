#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    
	    int liters = w;
	    
	        liters += (y * z);
	        if(liters > x) cout << "overFlow" << endl;
	        else if(liters == x) cout << "filled" << endl;
	        else if(liters < x) cout << "Unfilled" << endl;
	    
	}
	return 0;
}

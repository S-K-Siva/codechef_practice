#include <iostream>
#define lld long long int
using namespace std;

int main() {
	lld t;
	cin>>t;
	while(t--){
	    lld w,x,y,z;
	    cin>>w>>x>>y>>z;
	    
	    lld x1 = x+y;
	    lld x2 = x+z;
	    lld x3 = y+z;
	    
	    if(w == x || w == y || w == z || w == x1 || w == x2 || w == x3 || w == x+y+z){
	        cout << "YES" <<endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}

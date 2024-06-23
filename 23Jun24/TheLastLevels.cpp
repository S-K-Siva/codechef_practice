#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int breaks;
	    if(x%3 == 0){
	        breaks = (x/3) - 1;
	    }else{
	        breaks = (x/3);
	    }
	    cout << (x*y) + (breaks * z) << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,w;
	    cin>>x>>y>>z>>w;
	    
	    if(x == y) cout << "YES" << endl;
	    else if(x > y) {
	        int val = x-y;
	        if(val <= w) cout << "YES" << endl;
	        else cout << "NO" << endl;
	    }else{
	        int val = y-x;
	        if(val <= z){
	            cout << "YES" << endl;
	        }else{
	            cout << "NO" << endl;
	        }
	    }
	    
	}
	return 0;
}

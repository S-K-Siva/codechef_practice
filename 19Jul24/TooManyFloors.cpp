#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int v1,v2;
	    if(x%10 == 0){
	        v1 = x/10;
	    }else{
	        v1 = (x/10)+1;
	    }
	    
	    if(y%10 == 0){
	        v2 = (y/10);
	    }else{
	        v2 = (y/10) + 1;
	    }
	    
	    cout << abs(v1-v2) << endl;
	}
	return 0;
}

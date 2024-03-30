#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int res = -1;
	    if(a%6 == 0){
	        res = a/6;
	    }else{
	        res = (a/6) + 1;
	    }
	    
	    cout << (res * b) << endl;
	}
	return 0;
}

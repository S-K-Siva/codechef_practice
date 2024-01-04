#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a>b){
	        cout << b << endl;
	    }else{
	        cout << a * 2 - b << endl;
	    }
	    
	}
	return 0;
}
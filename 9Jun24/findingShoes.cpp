#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a < b || a == b){
	        cout << a << endl;
	    }else{
	        cout << (a*2) - b << endl;
	    }
	}
	return 0;
}

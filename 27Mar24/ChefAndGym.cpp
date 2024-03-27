#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,z;
	    cin>>a>>b>>z;
	    if(a+b <= z){
	        cout << "2" << endl;
	    }else if(a <= z){
	        cout << "1" << endl;
	    }else{
	        cout << "0" << endl;
	    }
	}
	return 0;
}

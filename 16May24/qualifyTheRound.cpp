#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,a,b;
	    cin>>x>>a>>b;
	    int val = a*1 + (b*2);
	    if(val >= x){
	        cout << "Qualify" << endl;
	    }else{
	        cout << "NotQualify" << endl;
	    }
	}
	return 0;
}

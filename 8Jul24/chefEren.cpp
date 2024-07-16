#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int odd,even;
	    odd = 0;
	    odd = even;
	    if(a%2 == 0){
	        odd = a/2;
	        even = odd;
	    }else{
	        odd = a - (a/2);
	        even = a/2;
	    }
	    
	    cout << (even * b) + (odd * c) << endl;
	}
	return 0;
}

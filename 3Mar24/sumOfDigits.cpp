#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int val;
	    cin>>val;
	    
	    long long result = 0;
	    
	    while(val != 0){
	        int rem = val%10;
	        result += rem;
	        val/=10;
	    }
	    cout << result << endl;
	}
	return 0;
}

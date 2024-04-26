#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int res = 0;
	    while(x--){
	        int val;
	        cin>>val;
	        if(val >= 1000){
	            res++;
	        }
	    }
	    cout << res << endl;
	}
	return 0;
}

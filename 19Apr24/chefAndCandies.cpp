#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(b >= a){
	        cout << "0" << endl;
	    }else{
	        if((a-b) <= 4){
	            cout << "1" << endl;
	        }else{
	            int rem = a-b;
	            if(rem%4 == 0){
	                cout << rem/4 << endl;
	            }else{
	                cout << (rem/4)+1 << endl;
	            }
	        }
	    }
	}
	return 0;
}

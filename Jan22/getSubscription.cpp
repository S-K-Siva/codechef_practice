#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	while(x--){
	    int t;
	    cin>>t;
	    if(t > 30){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}

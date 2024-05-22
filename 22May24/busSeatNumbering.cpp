#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x >= 11 && x <= 15){
	        cout << "Lower Single" << endl;
	    }
	    else if(x >= 26 && x <= 30){
	        cout << "Upper Single" << endl;
	    }else if(x >= 1 && x <= 10){
	        cout << "Lower Double" << endl;
	    }else{
	        cout << "Upper Double" << endl;
	    }
	}
	return 0;
}

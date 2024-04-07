#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<=100) cout  << x << endl;
	    else if(x > 100 && x <= 1000){
	        int dis = 25;
	        if(x-dis <= 0){
	            cout << "0" << endl;
	        }else {
	            cout << x-dis << endl;
	        }
	    }else if(x > 1000 && x <= 5000){
	        int dis = 100;
	        if(x-dis <= 0){
	            cout << "0"<<endl;
	        }else{
	            cout << x-dis << endl;
	        }
	    }else{
	        int dis = 500;
	        if(x-dis <= 0){
	            cout << "0" << endl;
	        }else{
	            cout << x-dis << endl;
	        }
	    }
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int profit = x-y;
	    if(profit){
	        if(profit > 0) cout << "LOSS" << endl;
	        else cout << "PROFIT" << endl;
	    }else{
	        cout << "NEUTRAL" << endl;
	    }
	}
	return 0;
}
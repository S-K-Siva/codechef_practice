#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int lunchTime;
	    cin>>lunchTime;
	    if(1 <= lunchTime && lunchTime <= 4){
	        cout <<"YES"<<endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}

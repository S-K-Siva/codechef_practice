#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    double expected_time = (double) ((x*107)/100);
	 
	    if(y <= expected_time) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}

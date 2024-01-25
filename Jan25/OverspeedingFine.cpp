#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int s;
	    cin>>s;
	    if(s <= 70) cout << "0" << endl;
	    else if( s > 70 && s <= 100) cout << "500" << endl;
	    else cout << "2000" << endl;
	}
	return 0;
}

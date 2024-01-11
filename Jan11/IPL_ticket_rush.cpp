#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int total,bought;
	    cin>>total>>bought;
	    if(total - bought < 0) cout << "0" << endl;
	    else cout << total - bought << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int fever;
	    cin>>fever;
	    if(fever > 98) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}

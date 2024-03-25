#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a <= b) cout << "0" << endl;
	    else cout << abs(a-b) * c << endl;
	}
	return 0;
}

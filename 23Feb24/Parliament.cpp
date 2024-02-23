#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;cin>>x>>y;
	    int half = x/2;
	    if(x%2 == 1){
	        half = (x/2)+1;
	    }
	    if(y >= half ) cout << "YES"<<endl;
	    else cout << "NO"<<endl;
	}
	return 0;
}

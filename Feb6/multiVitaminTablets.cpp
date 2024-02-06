#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	while(x--){
	    int a,b;
	    cin>>a>>b;
	    if(a*3 > b) cout << "NO" << endl;
	    else cout << "YES" << endl;
	}
	return 0;
}

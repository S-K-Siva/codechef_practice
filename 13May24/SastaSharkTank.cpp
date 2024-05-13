#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int first = (a*100)/10;
	    int second = (b*100)/20;
	    if(first == second) cout << "ANY" << endl;
	    else if(first > second) cout << "FIRST" << endl;
	    else cout << "SECOND" << endl;
	}
	return 0;
}

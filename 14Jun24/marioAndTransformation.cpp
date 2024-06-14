#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    string arr[3] = {"NORMAL","HUGE","SMALL"};
	    cout << arr[x%3] << endl;
	    
	}
	return 0;
}

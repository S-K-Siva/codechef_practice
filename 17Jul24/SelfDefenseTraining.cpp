#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int cnt = 0;
	    while(n--){
	        int x;
	        cin>>x;
	        if(x >= 10 && x<=60) cnt++;
	    }
	    cout << cnt << endl;
	}
	return 0;
}

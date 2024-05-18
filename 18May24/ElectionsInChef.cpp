#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,x;
	    cin>>a>>x;
	    int cnt = 0;
	    while(a--){
	        int p;
	        cin>>p;
	        if(p >= x) cnt++;
	    }
	    cout << cnt << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x = b*c;
	    if(a%x == 0){
	        cout << a/x << endl;
	    }else{
	        cout << (a/x)+1 << endl;
	    }
	}
	return 0;
}

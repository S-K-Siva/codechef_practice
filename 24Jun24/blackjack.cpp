#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int first,second;
	    cin>>first>>second;
	    int tot = first + second;
	    int needed = 21 - tot;
	    if(needed >= 1 && needed <= 10){
	        cout << needed << endl;
	    }else{
	        cout << "-1" << endl;
	    }
	}
	return 0;
}

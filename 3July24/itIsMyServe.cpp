#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int x,y;
	    cin>>x>>y;
	    int total_serve = (x+y);
	    if((total_serve/2)%2 == 0){
	        cout << "Alice" << endl;
	    }else{
	        cout << "Bob" << endl;
	    }
	}
	return 0;
}

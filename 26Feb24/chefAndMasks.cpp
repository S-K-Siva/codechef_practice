#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    
	    int disposal = x*100;
	    int cloth = y*10;
	    
	    if(disposal < cloth){
	        cout << "Disposable" << endl;
	    }else{
	        cout << "Cloth" << endl;
	    }
	}
	return 0;
}

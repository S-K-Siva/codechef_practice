#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    if(a - (b+c+d) >= 0) cout << "0" << endl;
	    else{
	    int freeSpace = a-(b+c);
	    if(freeSpace > 0){
	        d-=freeSpace;
	    }
	    if(a-(a-b) >= d || a-(a-c)>=d){
	        cout << "1" << endl;
	    }else{
	        cout << "2" << endl;
	    }
	    }
	}
	return 0;
}

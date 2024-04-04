#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int cnt = 0;
	for(int i = 0;i<t;i++)
	{
	    int x;
	    cin>>x;
	    if(x&1){
	        cnt++;
	    }
	}
	if(cnt >= t-cnt){
	    cout << "NOT READY" << endl;
	}else{
	    cout << "READY FOR BATTLE" << endl;
	}
	return 0;
}

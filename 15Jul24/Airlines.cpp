#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int aeros = 0;
        if(y%100 == 0){
            aeros = y/100;
        }else{
            aeros = (y/100)+1;
        }
        if(aeros <= x) cout << "0" << endl;
        else cout << abs(aeros - x) << endl;
    }
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int total = 0;
        // if(x<10){
        //     cout << x*2 << endl;
        //     continue;
        // }
        bool firstIter = false;
        while(x != 0){
            if(!firstIter){
                total += x%10;
                firstIter = true;
            }
            if(x/10 == 0){
                total += x%10;
                x/=10;
            }
            x/=10;
        }
        cout << total << endl;
    }
	return 0;
}

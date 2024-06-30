#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b%a == 0){
            cout << a/b << endl;
        }else{
            if(a/b != 0)
                cout << (a/b) << endl;
            else
                cout << "0" << endl;
        }
    }
	return 0;
}

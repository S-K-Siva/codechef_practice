#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((c - (b/a)) < 0){
            cout << "0" << endl;
        }else{
            cout << c-(b/a) << endl;
        }
    }
	return 0;
}

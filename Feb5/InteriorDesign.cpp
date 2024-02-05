#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int a = x1+y1;
        int b = x2+y2;
        if(a > b){
            cout << b << endl;
        }else{
            cout << a << endl;
        }
    }
	return 0;
}

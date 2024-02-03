#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int maxi = 0;
        for(int i = 0;i<n;i++){
            int e;cin>>e;
            if(e < x){
                maxi = max(maxi,i+1);
            }
        }
        cout << maxi << endl;
    }
	return 0;
}

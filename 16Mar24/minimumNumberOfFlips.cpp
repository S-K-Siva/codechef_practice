#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int> arr;
        for(int i = 0;i<x;i++){
            int e;cin>>e;
            arr.push_back(e);
        }
        int cnt = 0;
        int tot = 0;
        for(int i = 0;i<x;i++){
            tot += arr[i];
        }
        if(x%2 == 0){
            cout << abs(tot)/2 << endl;
        }else{
            cout << "-1"<<endl;
        }
    }
    return 0;

}

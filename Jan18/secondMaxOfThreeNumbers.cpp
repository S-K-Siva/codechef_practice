#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--){
	    vector<int> arr;
	    for(int i = 0;i<3;i++){
	        int e;
	        cin>>e;
	        arr.push_back(e);
	    }
	    sort(arr.begin(),arr.end());
	    cout << arr[arr.size()-2] << endl;
	}
	
	return 0;
}

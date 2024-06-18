#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    string s;
	    cin>>s;
	    string res = "";
	    for(int i = 0;i<x;i++){
	        switch(s[i]){
	            case 'A':
	                res += 'T';
	                break;
	            case 'T':
	                res += 'A';
	                break;
	            case 'C':
	                res += 'G';
	                break;
	            case 'G':
	                res += 'C';
	                break;
	        };
	        
	    }
	    cout << res << endl;
	    
	}
	return 0;
}

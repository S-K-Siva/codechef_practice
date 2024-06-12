#include <boost/multiprecision/cpp_int.hpp>
#include <bits/stdc++.h>
using namespace std;
using namespace boost::multiprecision;
# define mod 1000000007
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    cpp_int res = 1;
	    for(int i = 1;i<=x;i++){
	        res *= i;
	       
	    }
	    cout << res << endl;
	}
	return 0;
}

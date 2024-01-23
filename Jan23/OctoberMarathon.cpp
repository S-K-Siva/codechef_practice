#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	if(t < 3) cout << "GOLD" << endl;
	else if(t >= 3 && t < 6) cout << "SILVER" << endl;
	else cout << "BRONZE" << endl;
	return 0;
}

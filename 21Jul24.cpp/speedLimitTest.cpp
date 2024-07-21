#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float a,x,b,y;
	   cin>>a>>x>>b>>y;
	   float c=a/x;
	   float d=b/y;
	   if(c>d)
	   {
	       cout<<"Alice\n";
	   }
	   else if(d>c)
	   {
	       cout<<"Bob\n";
	   }
	   else
	   {
	       cout<<"EQUAL\n";
	   }
	}
	return 0;
}

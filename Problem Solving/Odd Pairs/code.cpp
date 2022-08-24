#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long x;
	    cin>>x;
	    long long even = x/2;
	    long long odd = x/2;
	    
	    if(x % 2 != 0){
	        odd++;
	    }
	    cout<<2*even*odd<<endl;
	}
	return 0;
}

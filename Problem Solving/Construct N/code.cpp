#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool x= false;
	    int c=0;
	    while(c <= n){
	        if((n-c)%2==0){
	            x= true;
	            break;
	        }
	        c+=7;
	    }
	    if(x)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	   
	    
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int a,b,c;
	    cin>>a>>b>>c;
	    if(a%b == 0)
	        cout<<"-1"<<endl;
	    else{
	        long long int i = c;
	    
	        if(i%a != 0){
	            i = c+a-(c%a);
	        }
	        for(i;!(i%a==0 && i%b!=0); i=i+a);
	        cout<<i<<endl;
	        
	    }
	    
	    
	}
	return 0;
}

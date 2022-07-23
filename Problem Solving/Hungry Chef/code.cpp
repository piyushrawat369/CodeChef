#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int y = (d-(a*c))/(b-a);
	    
	    if(d/a < c){
	        cout<<"-1"<<endl;
	    }
	    else if(d/b >= c){
	        cout<<"0 "<<c<<endl;
	    }
	    else{
    	    if(y > 0)
    	        cout<<c-y<<" "<<y<<endl;
    	    else
    	        cout<<c<<" 0"<<endl;
	    }
	    
	}
	return 0;
}

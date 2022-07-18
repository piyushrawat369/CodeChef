#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n, d, r=0, s=0, ans=0;
	    cin>>n>>d;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i] >= 80 || arr[i] <= 9){
	            r++;
	        }
	        else{
	            s++;
	        }
	    }
	    if(r%d != 0){
	       ans += r/d + 1; 
	    }
	    else{
	       ans += r/d;
	    }
	    if(s%d != 0){
	        ans += s/d + 1;
	    }
	    else{
	        ans += s/d;
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}

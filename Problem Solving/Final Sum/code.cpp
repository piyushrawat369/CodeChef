#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    
	    int arr[a], ans = 0;
	    for(int i=1; i<=a; i++){
	       cin>>arr[i];
	       ans += arr[i];
	    }
	    for(int i=1; i<=b; i++){
	        int c, d;
	        cin>>c>>d;
	        ans += (d-c+1)%2;
	    }
	    
	    cout<<ans<<endl;
	    
	}
	return 0;
}

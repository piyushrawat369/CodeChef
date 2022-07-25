#include <iostream>
# define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    ll cnt = 0, ans = 0;
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i] == 1) cnt++;
	        else{
	            ans += (cnt*(cnt+1)/2);
	            cnt = 0;
	        }
	    }
	    ans += (cnt*(cnt+1)/2);
	    cout<<ans<<endl;
	}
	return 0;
}

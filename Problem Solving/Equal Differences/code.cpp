#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n, ans = 0;
	    cin>>n;
	    ll arr[n+1];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    if(n > 2){
	        map<ll, ll> m;
	        ll maxi = INT_MIN;
	        
	        for(ll i=0; i<n; i++){
	            m[arr[i]]++;
	        }
	        for(auto it: m){
	            maxi = max(maxi, it.second);
	        }
	        
	        if(maxi == 1){
	            ans = n-2;
	        }
	        else{
	            ans = n-maxi;
	        }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}

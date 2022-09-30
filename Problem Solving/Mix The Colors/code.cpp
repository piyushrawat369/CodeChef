#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, ans = 0;
	    cin>>n;
	    int arr[n];
	    map<int, int> m;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        m.insert({arr[i], m[arr[i]]++});
	    }
	    for(auto &it: m){
	        ans += (it.second - 1);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long int> v;
	    for(int i=0; i<2*n; i++){
	        int a;
	        cin>>a;
	        v.push_back(a);
	    }
	    sort(v.begin(), v.end());
	    long long int x = 1e9;
	    for(int i=0; i<=n; i++){
	        x = min(x, v[n+i-1] - v[i]);
	        
	    }
	    cout<<x<<endl;
	}
	return 0;
}

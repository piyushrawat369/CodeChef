#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; while(t--){
	    int n; 
	    cin>>n;
	    vector<int> a, d;
	    for(int i=0; i<n; i++)
	    {
	        int x; cin>>x; a.push_back(x);
	    }
	    for(int i=0; i<n; i++)
	    {
	        int x; cin>>x; d.push_back(x);
	    }
	    sort(a.begin(), a.end());
	    sort(d.begin(), d.end());
	    
	    int ans=1;
	    for(int i=1, j=0; i<n;){
	        if(a[i]<d[j])
	        {
	            ans++; i++;
	        }
	        else
	        {
	            j++; i++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    
	    vector<int> v1,v2;
	    for(int i=0; i<n; i++){
	        if(i % 2 == 0)
	            v1.push_back(a[i]);
	        else
	            v2.push_back(a[i]);
	    }
	    
	    int sum1 = accumulate(v1.begin(), v1.end(), 0);
	    int sum2 = accumulate(v2.begin(), v2.end(), 0);
	    
	    if(sum2 > sum1)
	        cout<<"YES"<<endl;
	    else{
	        sort(v1.begin(), v1.end());
	        sort(v2.begin(), v2.end());
	        
	        for(int i = 1; i<=min(k,n/2); i++){
	            sum1 = sum1 - v1[v1.size()-1] + v2[i-1];
	            sum2 = sum2 + v1[v1.size()-1] - v2[i-1];
	        }
	        
	        if(sum1 < sum2){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	        
	    
	}
	return 0;
}

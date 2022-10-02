#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    if(n >= 2){
	        long long int arr[n], p = 0, q = 0;
	        for(int i=0; i<n; i++){
	            cin>>arr[i];
	        }
	        long long int min = INT_MAX, max = INT_MIN;
	        for(int i=0; i<n; i++){
	            if(i % 2 == 0){
	                p += abs(arr[i]);
	                if(min >= abs(arr[i])){
	                    min = abs(arr[i]);
	                }
	            }
	            else{
	                q -= abs(arr[i]);
	                if(max <= abs(arr[i])){
	                    max = abs(arr[i]);
	                }
	            }
	        }
	        if(max > min){
	            p = p + max - min;
	            q = q + max - min;
	        }cout<<p+q<<endl;
	        
	    }
	    
	    
	}
	return 0;
}

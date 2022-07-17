#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n, c = 0;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    int flag = 0;
	      
	    for(int i=1; i<n; i++){
	        if(arr[i] != arr[i-1]){
	            if(flag == 1){
	                c += 1;
	            }
	            else{
	                c += 2;
	                flag = 1;
	            }
	        }
	        else{
	            flag = 0;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr+n);
	    if(n == 0){
	        cout<<"NO"<<endl;
	    }
	    else if(n == 1){
	        cout<<"YES"<<endl;
	    }
	    else if(arr[0] + arr[n-1] <= k){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

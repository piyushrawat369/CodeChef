#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, max;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr+n);
	    max = arr[n-1];
	    cout<<n - max<<endl;;
	}
	return 0;
}

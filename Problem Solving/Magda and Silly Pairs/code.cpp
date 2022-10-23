#include <bits/stdc++.h>
using namespace std;

int odd_count(long long int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 == 1){
            sum++;
        }
    }
    return sum;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int a[n], b[n];
	    long long int total = 0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        total += a[i];
	    }
	    for(int i=0; i<n; i++){
	        cin>>b[i];
	        total += b[i];
	    }
	    
	    int p = odd_count(a, n);
	    int q = odd_count(b, n);
	    int r = n - (min(p, q)+ min(n-p, n-q));
	    
	    cout<< (total - r)/2<<endl;
	}
	return 0;
}

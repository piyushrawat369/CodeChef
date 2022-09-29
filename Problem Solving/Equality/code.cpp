#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long sum = 0, n;
	    cin>>n;
	    long arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        sum += arr[i];
	    }
	    sum = sum/(n-1);
	    for(int i=0; i<n; i++){
	        cout<<sum - arr[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}

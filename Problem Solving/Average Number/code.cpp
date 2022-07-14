#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,v;
	    int x,s = 0, p;
	    cin>>n>>k>>v;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        s += arr[i];
	    }
	    x = v * (n+k);
	    p = x - s;
	    if(p < k || p%k != 0){
	        cout<<"-1"<<endl;
	    }
	    else
	        cout<<p/k<<endl;
	}
	return 0;
}

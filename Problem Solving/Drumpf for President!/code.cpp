#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int arr[n];
	    int count[n];
	    for(int i=1; i<=n; i++){
	        count[i] = 0;
	    }
	    for(int i=1; i<=n; i++){
	        cin>>arr[i];
	    }
	    for(int i=1; i<=n; i++){
	        count[arr[i]]++;
	    }
	    int count1 = 0;
	    for(int i=1; i<=n; i++){
	        if(count[i] >= k && arr[i] != i){
	            count1++;
	        }
	    }
	    cout<<count1<<endl;
	}
	return 0;
}

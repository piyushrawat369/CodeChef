#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
		
		int arr[n];
		int odd = 0;
		int mini = INT_MAX;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i] & 1){
				odd++;
			}
			if(mini >= arr[i]){
				mini = arr[i];
			}
		}
		if(mini == 1){
			cout<<"CHEF"<<endl;
		}
		else if(odd % 2 ==0){
			cout<<"CHEFINA"<<endl;
		}
		else{
			cout<<"CHEF"<<endl;
		}
	}
	return 0;
}

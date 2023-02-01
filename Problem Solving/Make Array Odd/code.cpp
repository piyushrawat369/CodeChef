#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y, count = 0;
	    cin>>x>>y;
	    int array[x];
	    for(int i=0; i<x; i++){
	        cin>>array[i];
	        if(array[i] % 2 == 0){
	            count++;
	        }
	    }
	    if(y%2 == 1){
	        if(count % 2 == 1){
	            count = (count/2)+1;
	        }
	        else{
	            count = count/2;
	        }
	    }
	    else{
	        if(count == x){
	            count = -1;;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a%2 && b%2){
            cout<<(a*b)/2<<"/"<<a*b<<endl;
        }
        else{
            cout<<"1/2"<<endl;
        }
    }
	return 0;
}

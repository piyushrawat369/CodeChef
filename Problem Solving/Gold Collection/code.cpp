#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
	scanf("%d",&n);

			int arr[n];
			for(int i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
			}
			for(int i=1;i<n;i++)
			{
				arr[i]+=arr[i-1];
			}
			int q;
			scanf("%d",&q);
				for(int i=0;i<q;i++)
				{
					int q1,q2;
					scanf("%d%d",&q1,&q2);
					if(q1==1)
					{
						printf ("%d\n"  ,arr[q2-1]);
					}
					else
					{
						printf("%d\n" ,  arr[q2-1]-arr[q1-2]);
					}
				} 
  }
	return 0;
}

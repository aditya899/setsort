#include <bits/stdc++.h>
using namespace std;
int gtXor(int arr[], int n,int a,int b)
{
    int result = 0,i;
    for(i=a;i<=b;i++){
        result = result^arr[i];
    }
    return result;
}
int main() {
	int i,n,u,v,q,arr[n];
	cin>>n>>q;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<q;i++){
		cin>>u>>v;
		int m=min(u,v);
		int l=max(u,v);
		cout<<gtXor(arr,n,m,l)<<endl;
	}
	return 0;
}

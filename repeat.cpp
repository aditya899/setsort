
#include<bits/stdc++.h>
using namespace std;

void printFirstRepeating(int arr[], int n)
{
	
	int min = -1;

	
	set<int> myset;

	
	for (int i = n - 1; i >= 0; i--)
	{
		
		if (myset.find(arr[i]) != myset.end())
			min = i;

		else 
			myset.insert(arr[i]);
	}

	
	if (min != -1)
		cout << arr[min];
	else
		cout << "Unique";
}


int main()
{
	int arr[100000],n,i;
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
	
	printFirstRepeating(arr, n);
}


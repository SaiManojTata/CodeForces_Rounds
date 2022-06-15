#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int t; 
	cin>>t; 
	
	while(t--)
	{
		int n; 
		cin>>n; 
		
		long long int arr[n]; 
		
		int max = -2147483647; 
		int min = 2147483647;
		
		for(int i = 0; i < n; i++)
		{
			cin>>arr[i];
			if(arr[i] > max)
			{
				max = arr[i]; 
			}
			if(min > arr[i])
			{
				min = arr[i]; 
			}
		}
		
		cout<<max - min<<endl; 
	}
	
}

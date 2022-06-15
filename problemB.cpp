#include<bits/stdc++.h>
using namespace std; 

int main()
{
	long long int t; 
	cin>>t; 
	
	while(t--)
	{
		long long int n; 
		cin>>n; 
		
		long long int arr[n];  
		
		for(long long int i = 0; i < n; i++)
		{
			cin>>arr[i]; 
		}
		
		sort(arr, arr+n); 
  
		long long int count[n]; 
		
		for(int i = 0; i < n; i++)
		{
			count[i] = 1; 
		} 
		
		long long int j = 0; 
		
		if(n > 1)
		{
			for(long long int i = 0; i < n-1; i++)
			{
				if(arr[i+1] == arr[i])
				{
					count[j]++;
				}	
				else
				{
					j++; 
				}
			}
		}
		else if(n == 1)
		{
			cout<<"0"<<endl; 
			continue; 
		}		
		
		long long int sum = 0; 
		for(long long int j = 0; j < n; j++)
		{
			sum += count[j]; 
			if(sum == n)
			{
				for(long long int k = j + 1; k < n; k++)
				{
					count[k] = 0; 
				}
			}
		}

		long long int max = *max_element(count, count+n); 
		long long int result = max; 
		long long int t_count = 0; 
		
		
		while(result < n)
		{
			result *= 2; 
			t_count++; 
		}
		
		cout << n - max + t_count << endl; 
	}	
}
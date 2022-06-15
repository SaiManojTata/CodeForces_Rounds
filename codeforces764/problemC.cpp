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
		
		vector<long long int> v(n);
				
		for(int i = 0; i < n; i++)
		{
			cin>>v[i]; 
		}
		
		sort(v.begin(), v.end()); 
		
		bool debug = true; 
		

			for(int i = 0; i < n; i++)
			{
				if(v[i] == i+1)
				{
					
					continue; 
				}
				else if(v[i] >= i)
				{
					v[i] = v[i]/2; 
					i--; 
				}
				else
				{
					debug = false; 
					break; 
				}
			}
		
		if(debug)
		{
			cout<<"YES"<<endl; 
		}
		else
		{
			cout<<"NO"<<endl; 
		}		
	}
}

#include <iostream>

using namespace std;
#define f(n) for(int i=0; i<n; i++)

int main()
{	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], b[n], c[n], p[n];
		f(n) {cin>>a[i]; }
		f(n) {cin>>b[i]; }
		f(n) {cin>>c[i]; }
		p[0] = a[0];
		for(int i=1; i<n-1; i++)
		{
			if(a[i]!= p[i-1])
			{
				p[i] = a[i];
			}
			else if (a[i] == p[i-1] && b[i] == p[i-1])
			{
				p[i] = c[i];
			}
			else
			{
				p[i] = b[i];
			}
			
		}
		if(a[n-1]!= p[n-2] && a[n-1]!= p[0])
		{
			p[n-1] = a[n-1];
		}
		else if(b[n-1]!= p[n-2] && b[n-1]!= p[0])
		{
			p[n-1] = b[n-1];
		}
		else
		{
			p[n-1] = c[n-1];
		}
		

		f(n) {cout<<p[i]; }
		cout<<endl;		
	}
	
		
		
}

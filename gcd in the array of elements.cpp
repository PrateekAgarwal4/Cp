#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int result=a[0];
	for(int i=0;i<n;i++)
	{
		int b=__gcd(result,a[1]);
		result=b;
	}
	cout<<result;
}

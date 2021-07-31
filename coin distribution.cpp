#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int one=0,two=0,five;
	five=(n-4)/5;
	
	if((n-5*five)%2==0)
	{
		one=2;
	}
	else
	{
		one=1;
	}
	
	two=(n-5*five-one)/2;
	int total=one+two+five;
	
	
	cout<<total<<endl;
	cout<<one<<" "<<two<<" "<<five;
	
}

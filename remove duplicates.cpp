#include<bits/stdc++.h>

using namespace std;

string removeDup(string s)
{
	if(s.length()==0)
	{
		return "";
	}
	
	char ch=s[0];
	string ans=removeDup(s.substr(1)); // substr removes the particular element from the string..
	
	if(ch==ans[0])
	{
		return ans;
	}
	return ch+ans;
}

int main()
{
	string s;
	cin>>s;
	string t=removeDup(s);
	cout<<t<<endl;
}

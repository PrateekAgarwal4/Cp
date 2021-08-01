#include<iostream>

using namespace std;

int firstoccur(int arr[],int n,int i,int key)
{
	if(i==n)
	{
		return -1;
	}
	if(arr[i]==key)
	{
		return i;
	}
	return firstoccur(arr,n,i+1,key);
	
}
/*int lastoccur(int arr[],int n,int i,int key)  // starting from first , then going to last and then checking the element. 
{ 
	if(i==n)
	{
		return -1;
	}
	int restarray=lastoccur(arr,n,i+1,key);
	if(restarray!=-1)
	{
		return restarray;
	}
	if(arr[i]==key)
	{
		return i;
	}
	return -1;
}*/

int lastoccur(int arr[],int n,int i,int key) ///// Starting from last
{
	if(i==0)
	{
		return -1;
	}
	if(arr[i]==key)
	{
		return i;
	}
	return lastoccur(arr,n,i-1,key);
}

int main()
{
	int n,key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>key;
	cout<<firstoccur(arr,n,0,key)<<endl;;
	cout<<lastoccur(arr,n,n-1,key)<<endl;
}

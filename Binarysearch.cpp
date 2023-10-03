#include<iostream>
using namespace std;
//{8,10,12,21,27,34,42}
int Binarysearch(int arr[], int n, int key)
{
	int starting=0;
	int ending=n;
	while(starting<=ending){
		int mid=(starting+ending)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			ending=mid-1;
		}
		else
		{
			starting=mid+1;
		}
	}
	return -1;
}
int main()
{
	int n,i,key;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"key is"<<endl;
	cin>>key;
	cout<<Binarysearch(arr,n,key)<<endl;
	return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;


int fib(int n)
{
	if(n==0)
	return 0;
	
	if(n==1)
	return 1;
	
	return fib(n-1)+fib(n-2);
	
	
	
}

int main()
{   
	int n;
	cout<<"Enter N:";
	cin>>n;
	int arr[n];
	
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
    cout<<"Output";
    
    for(int j=0;j<n;j++)
	for(int i=0;;i++)
	{
   int f=fib(i);
	if(f>arr[j])
	{
		cout<<f<<endl;
		break;
	}
}
	
	
	getch();
	return 0;
}

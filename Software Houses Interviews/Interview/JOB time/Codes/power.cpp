#include<iostream>
#include<conio.h>
using namespace std;

int pow(int n,int k)
{
    if(k==1)
    return n;
    
    else 
    return n*pow(n,k-1);
	
}

int main()
{
	
	cout<<pow(3,3);
	
  getch();	
	return 0;
}

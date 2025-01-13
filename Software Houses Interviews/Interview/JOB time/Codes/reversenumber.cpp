#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int n;
	cout<<"Enter Number "<<endl;
	cin>>n;
	
	int re=0,mul=10,rem;
	while(n>0)
	{
		rem=n%10;
		re=re*mul+rem;
		n=n/10;
		
		
	}
	cout<<re;
	
	
	
	getch();
	return 0;
}

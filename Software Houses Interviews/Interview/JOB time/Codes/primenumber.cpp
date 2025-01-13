#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n=1000;
	
	for(int i=2;i<=n;i++)
{   int count=0;
	for(int j=1;j<=n;j++)
	{
			if(i%j==0)
			{
				count++;
			}		
		
		
	}
	if(count==2)
	cout<<i<<endl;

}	
	
	getch();
	return 0;
}

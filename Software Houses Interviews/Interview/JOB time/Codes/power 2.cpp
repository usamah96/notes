#include<iostream>

using namespace std;

int main()
{
	int num, c=1,flag =0;
	
	cout<<"Enter num"<<endl;
	cin>>num;
	
	for(int i=0 ; i<255 ; i++)
	{
		
		c= c*2;
		
		if(num==c && num!=2)
		{
		flag=1;
		break;
		}
		
		
		
		
	}
	
	if(flag==1)
	cout<<"Number is power of 2 "<<endl;
	
	
	if(flag==0)
	cout<<"Number is not a  power of 2 "<<endl;
	
	system("pause");
	return 0;
	
}

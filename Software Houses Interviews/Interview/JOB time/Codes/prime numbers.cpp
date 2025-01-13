#include<iostream>
#include<string>
using namespace std;


int main()
{
	int count =0 , flag =0 ;
	


for(int i=2; i<100; i++)
{
   for(int j=2 ; j<i; j++)
   
   {
   
   if(i%j ==0 && i!=j)
  {
   flag=0;
   break;
}
   
   else
   {
    flag = 1; 
    
}

}


if(flag==1)
{
	count++;
    cout<< i <<" ";
   
}
		
}
cout<<endl;
cout<< "Total prime numbers are :  "<<count <<endl;



	system("pause");
	return 0;
	
}

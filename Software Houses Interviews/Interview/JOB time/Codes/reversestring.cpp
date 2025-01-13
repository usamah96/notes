#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	
string a ="abcde 123 53453 34343 3434";
cout<<a<<"   ";
   for(int i=0;i<a.length()/2;i++)
   {
   	     char temp=a[i];
   	     a[i]=a[a.length()-i-1];
   	     a[a.length()-i-1]=temp;
   	
   	
   }
cout<<a;	
  getch();	
	return 0;
}

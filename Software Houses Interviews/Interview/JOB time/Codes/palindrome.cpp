#include<iostream>
#include<conio.h>
using namespace std;

 bool prime(int n)
 {
 	
 	 
	int count =0;    
	    for(int j=1;j<=n;j++){
	    
		if(n%j==0)
	    count++;
	    
	    if(count>2)
	    return false;
	    
	    
	
	
	}
	if(count==2)
	return true;
		
		
		
		
		
	
	
 	
 }
	

int main()
{
 if(prime(6))
 cout<<"prime number";
 
 else cout<<"not";

	
	
	
	getch();
	return 0;
}

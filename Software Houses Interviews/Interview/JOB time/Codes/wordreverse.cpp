#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	string word="hi me there";
	int j=word.length()-1;
	for(int i=0;i<(word.length()-1)/2;i++)
	{
		char c=word[i];
		word[i]=word[j];
		word[j]=c;
		
		j--;
		
	}
	
	
	cout<<word;
	
	
	getch();
	return 0;
}

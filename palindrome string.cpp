#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	   int N,i,flag,j;
	   string str;
	    flag=0;
	   cout<<"Enter string: ";
	   cin>>str;
	   N=str.size();
	   i=0;
	   j=N-1;
	   while(i<j)
	   {
	       if(str[i]!=str[j])
	       {
	           flag=1;
	           break;
	       }
	       i++;
	       j--;
	   }
	     if(flag==0)
	    cout<<"Yes, the string is palindrome\n";
	   else
	     cout<<"No, the given string is not palindrome\n";
	getch();
	return 0;
}

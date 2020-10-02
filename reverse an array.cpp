#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	    int N,i,first,last,temp;
	    cout<<"Enter the number of elements in array: ";
	    cin>>N;
	    int A[N];
	    cout<<"Enter elements: ";
	    for(i=0;i<N;i++)
	    cin>>A[i];
	    first=0;
	    last=N-1;
	    while(first<last)
	    {
	        temp=A[first];
	        A[first]=A[last];
	        A[last]=temp;
	        first++;
	        last--;
        }
        cout<<"The reversed array is:\n";
	   for(i=0;i<N;i++)
	   cout<<A[i]<<" ";
	   cout<<"\n";
	getch();
	return 0;
}

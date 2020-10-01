#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    
    //use for large number
    //use binary for calculate the even or odd with & operator
    
    if (num & 1)
        cout << "ODD";
    else
        cout << "EVEN";


    return 0;
}

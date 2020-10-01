#Kadane's Algorithm 
Given an array containing both negative and positive integers. Find the contiguous sub-array with maximum sum.
Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., An denoting the elements of the array.
 
Output:
Print the maximum sum of the contiguous sub-array in a separate line for each test case.
 
Program In C++ -
#include <iostream>
using namespace std;
  int kadaen(int arr[],int n)
        { int maxcurrent,maxresult;
          maxcurrent=maxresult=arr[0];
          for(int i=1;i<n;i++)
                {  maxcurrent=max(arr[i],maxcurrent+arr[i] );
                        if(maxcurrent>maxresult)
                        maxresult=maxcurrent;
                 }
          return maxresult;
        }
int main()
  {   int t;
      cin>>t;     //No. of test cases
      while(t--)
      {     int n;  //No. of elements 
            cin>>n;
            int arr[n];
            for (int i=0;i<n;i++)
                cin>>arr[i];  //Input Array elements 
            int result=kadaen(arr,n);
            cout<<"Maximum sum of the contiguous sub-array"<<result<<"\n";
}
      return 0;
}

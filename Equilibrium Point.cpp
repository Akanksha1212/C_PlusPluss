#Equilibrium Point 

/* Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array.
Equilibrium position in an array is a position such that the sum of elements below it is equal to the sum of elements after it.
Input:
The first line of input contains an integer T denoting the no of test cases then T test cases follow. First line of each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array A.
Output:
For each test case in a new  line print the position at which the elements are at equilibrium if no equilibrium point exists print -1.
Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= Ai <= 108
Example:
Input:
2
1
1
5
1 3 5 2 2
Output:
1
3  */
                      
 
 Program in C++-
 
 #include<iostream>
using namespace std;
int equilibrium(int arr[],int n,int s)
{
    int leftsum=0;
    for(int i=0;i<n;i++)
    { s=s-arr[i];
     if(s==leftsum)
       return i+1; //Returning the position
     else
      leftsum+=arr[i];
      }
return -1;
}

int main()
{
    int t; //No. of test cases
    cin>>t; 
    while(t--)
    {   int sum=0;
        int n;// No. of elements 
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
         {cin>>arr[i];

             sum=sum+arr[i];
         }
    int position=equilibrium(arr,n,sum); // Finding the position
    cout<<position<<"\n"; // Output the final position 
      }
        return 0;

    }

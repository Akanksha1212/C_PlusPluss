#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v1;
   int n;        //n no's
   while(n--)            
   {
      int input;cin>>input;
      v1.push_back(input);
   }
   sort(v1.begin(),v1.end());
   cout<<v1[n-1];
}

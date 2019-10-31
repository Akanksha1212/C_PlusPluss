#include <iostream>
using namespace std;
int main()
{
  int num, i;
  bool isPrime = true;
  cout << "Enter a positive integer: ";
  cin >> num;
  for(i = 2; i <= num / 2; ++i)
  {
      if(num % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "Prime number";
  else
      cout << "Not prime number";
  return 0;
}

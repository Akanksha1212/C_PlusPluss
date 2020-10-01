#include <bits/stdc++.h> 
using namespace std; 
  
// Function for reversing the string
void reverseString(string &str) 
{ 
    int size = str.length(); 
    int i;
    // Swap character with starting index and ending index
    for (i = 0; i < size / 2; ++i) 
        swap(str[i], str[size - i - 1]); 
} 
  
int main() 
{ 
    string str = "teststring"; 
    reverseString(str); 
    cout << str; 
    return 0; 
} 

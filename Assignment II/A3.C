#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int a = 5, b = 7, c = 10; 
  
    if (a <= b && a <= c) 
        cout << a << " is the smallest"; 
  
    else if (b <= a && b <= c) 
        cout << b << " is the smallest"; 
  
    else
        cout << c << " is the smallest"; 
  
    return 0; 
} 

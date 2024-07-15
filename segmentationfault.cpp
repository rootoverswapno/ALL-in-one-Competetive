#include<bits/stdc++.h>
using namespace std;
 const int N=10e9;
 const int NN=10e4;
 int a[NN];
void func(int i)
{
  func(i+1);
  func(i+2);
  func(i-1);
}
int main()
{
  

func(0);


 
    return 0;
}
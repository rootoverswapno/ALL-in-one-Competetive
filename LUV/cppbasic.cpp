#include<iostream>
using namespace std;
 int digitsum(int n)
 {
         int sum=0;
        for(int i=n;i>0;)
        {
           sum=sum+i%10;
           i=i/10;
        }
        return sum;
 }
int main()
{
    
        int x;
        cin>>x; 
        cout<<digitsum(x);
   
    return 0;
}
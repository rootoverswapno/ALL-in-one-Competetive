#include <bits/stdc++.h>
using namespace std;

int main()
{
/*
int a;
    cin >>a;
    int *p_a;
    p_a=&a;
     cout<<*p_a<<endl;
    p_a=p_a+1;
     cout<< p_a<<endl;


*/
/*
int a[10];
    for(int i=0;i<10;++i)
    {
        cin>>a[i];
    }
    for(int i=0;i<10;)
    {
        cout<<a[++i]<<endl;
    }
    a[0]=5;
    a[1]=10;
    cout<<&a[0]<<endl;
    cout<<a<<endl;
       cout<<*(a+1)<<endl;

*/
//pointer basic in cpp
     
     
     
     int x=4;
     int *p_x;
     p_x=&x;
     cout<<"Address of x is : "<<&x<<endl;
     cout<<"value at p_x is : "<<p_x<<endl;
     cout<<"value at *p_x is: "<<*p_x<<endl;
     *p_x=5;
     cout<<"value at *p_x is: "<<*p_x<<endl;
     cout<<x<<endl;
      cout<<"value at p_x is : "<<p_x+1<<endl;
     
     
     
        return 0;
}
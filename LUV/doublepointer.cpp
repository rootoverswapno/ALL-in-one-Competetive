#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=4;
    int *p_x;
    p_x=&x;
    cout<<"Address of x :"<<&x<<endl;
    cout<<"value of p_x :"<<p_x<<endl;
    cout<<"value at *P_x:"<<*p_x<<endl;
    *p_x=5;
    cout<<"value at *P_x:"<<*p_x<<endl;
    cout<<"value at (P_x+1):"<<(p_x+1)<<endl;
    //double pointer 
     int **p_p_x;
     p_p_x=&p_x;
     cout<<"address of p_x :"<<&p_x<<endl;
     cout<<"value of p_p_x :"<<p_p_x<<endl;
     cout<<"value at *p_p_x:"<<*p_p_x<<endl;
     cout<<"value at **p_p_x:"<<**p_p_x<<endl;
     **p_p_x=7;
      cout<<"value at **p_p_x:"<<**p_p_x<<endl;
      cout<<"value of x is : "<<x<<endl;

    return 0;
}
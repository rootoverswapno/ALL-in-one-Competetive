#include <bits/stdc++.h>
using namespace std;
void reference(int &n, int &n1)
{
    int temp =n;
    n=n1;
    n1=temp;
}
void arrayref(int a[])
{
    a[0]=7;
}
int main()
{

    int n, n1;
    int a[10];
    a[0]=5;
    n = 3;
    n1 = 5;
    cout << n << " " << n1 << endl;
    reference(n, n1);
    cout << n << " " << n1 << endl;
    cout<<endl;
    cout<<a[0]<<endl;
    arrayref(a);
    cout<<a[0]<<endl;
    return 0;
}
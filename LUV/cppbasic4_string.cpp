#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="swapno";
    s1[0]='A';
    cout<<s1;


cout<<endl<<endl<<endl;
string str;
cin>>str;
    string str_rev;
    for(int i=str.size()-1;i>=0;--i)
    {
        str_rev.push_back(str[i]);
    }
    cout<<str_rev<<endl;
    if(str==str_rev)
    {
        cout<<"String is Palindrome\n";
    }
    else
    {
        cout<<"String is not palindrome\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    vector<int>v{1,2,3,4,5};
    // for(int i=0;i<n;++i)
    // {
    //     cin>>v[i];
    // }
    int mm=*min_element(v.begin(),v.end());
    int max=*max_element(v.begin(),v.end());
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<max<<" "<<mm<<endl;
    cout<<sum<<endl;
    cout<<endl<<endl;
    int ct=count(v.begin(),v.end(),2);
    cout<<ct<<endl;
    auto it=find(v.begin(),v.end(),10);
    if(it!=v.end())
    {
        cout<<*it<<endl;
    }
    else
    {
        cout<<"Not Find"<<endl;
    }
    reverse(v.begin(),v.end());
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
     string s="swapno";
     reverse(s.begin(),s.end());
     cout<<s<<endl;



    return 0;
}
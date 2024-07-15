#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 2, 2, 3};
    vector<int> v = {1, 9, 9, 9, 5};
    cout << accumulate(a, a + 4, 0) << endl;
    cout << accumulate(v.begin(), v.end(), 0) << endl;
    cout << *max_element(a, a + 4) << endl;
    cout << *max_element(v.begin(), v.end()) << endl;
    cout << count(a, a + 4, 2) << endl;
    cout << count(v.begin(), v.end(), 9) << endl;

    return 0;
}
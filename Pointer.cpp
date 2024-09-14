#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *ptr = &n;
    cout << "Value -: " << n << endl;
    cout << "Value using ptr -: " << *ptr << endl;
}
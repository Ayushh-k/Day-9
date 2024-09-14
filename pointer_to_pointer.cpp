#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *ptr = &n;
    int **ptr1 = &ptr;
    cout << "Value -: " << n << endl;
    cout << "Value using ptr -: " << *ptr << endl;
    cout << "Value of n using ptr1 -: " << **ptr1 << endl;
}
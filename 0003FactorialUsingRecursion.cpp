#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{

    if (n == 1 || n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        cout << "The factorial of " << n << " is : ";
        cout << fact(n) << "\n";
    }

    return 0;
}

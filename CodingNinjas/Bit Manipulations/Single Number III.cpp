/*
    Problem Link : https://www.naukri.com/code360/problems/two-non-repeating-elements_704683?leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
using namespace std;

void twoNonRepeatingElements(int arr[], int n)
{
    int x_or = 0;

    for (int i = 0; i < n; i++)
        x_or ^= arr[i];

    int rightMost = (x_or & (x_or - 1)) ^ x_or;

    int b1 = 0, b2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] & rightMost)
            b1 ^= arr[i];
        else
            b2 ^= arr[i];
    }

    if (b1 < b2)
        cout << b1 << " " << b2 << endl;
    else
        cout << b2 << " " << b1 << endl;
}
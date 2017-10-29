#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0;
    vector<int> arr1(6);// = {10, 15, 20, 25, 30, 35};
    arr1[i++]=10; arr1[i++]=15;arr1[i++]=20;arr1[i++]=25;arr1[i++]=30;arr1[i++]=35;
    cout << "The position of 20 using upper_bound "
            " (in single occurrence case) : ";
    int j= (int)(upper_bound(arr1.begin(), arr1.end(), 20) - arr1.begin());
    cout << arr1[j++]<<"  ";
    cout << arr1[j++]<<"  ";
    cout << arr1[j]<<"  ";

    cout << endl;
    // initializing vector of integers
    // for multiple occurrences
    i=0;
    arr1[i++]=10; arr1[i++]=15;arr1[i++]=20;arr1[i++]=20;arr1[i++]=25;arr1[i++]=30;arr1[i++]=35;
    cout << "The position of 20 using upper_bound "
             "(in multiple occurrence case) : ";
    j= (int)(upper_bound(arr1.begin(), arr1.end(), 20) - arr1.begin());
    cout << arr1[j++]<<"  ";
    cout << arr1[j++]<<"  ";
    cout << arr1[j]<<"  ";

    cout << endl;

    // initializing vector of integers
    // for no occurrence
    i=0;
    arr1[i++]=10; arr1[i++]=15;arr1[i++]=25;arr1[i++]=30;arr1[i++]=35;
    cout << "The position of 20 using upper_bound "
             "(in no occurrence case) : ";
    j= (int)(upper_bound(arr1.begin(), arr1.end(), 20) - arr1.begin());
    cout << arr1[j++]<<"  ";
    cout << arr1[j++]<<"  ";
    cout << arr1[j]<<"  ";

    cout << endl;
}
//Output:
//
//The position of 20 using upper_bound (in single occurrence case) : 3
//The position of 20 using upper_bound (in multiple occurrence case) : 4
//The position of 20 using upper_bound (in no occurrence case) : 2

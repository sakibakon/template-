// C++ code to demonstrate the working of lower_bound()
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0;
    vector<int> arr1(6);// = {10, 15, 20, 25, 30, 35};
    arr1[i++]=10; arr1[i++]=15;arr1[i++]=20;arr1[i++]=25;arr1[i++]=30;arr1[i++]=35;
    cout << "The position of 20 using lower_bound "
            " (in single occurrence case) : ";
    int j= (int)(lower_bound(arr1.begin(), arr1.end(), 20) - arr1.begin());
    cout << arr1[j--]<<"  ";
    cout << arr1[j--]<<"  ";
    cout << arr1[j]<<"  ";

    cout << endl;
    // initializing vector of integers
    // for multiple occurrences
    i=0;
    arr1[i++]=10; arr1[i++]=15;arr1[i++]=20;arr1[i++]=20;arr1[i++]=25;arr1[i++]=30;
    cout << "The position of 20 using lower_bound "
             "(in multiple occurrence case) : ";
    j= (int)(lower_bound(arr1.begin(), arr1.end(), 20) - arr1.begin());
    cout << arr1[j--]<<"  ";
    cout << arr1[j--]<<"  ";
    cout << arr1[j]<<"  ";

    cout << endl;

    // initializing vector of integers
    // for no occurrence
    i=0;
    arr1[i++]=10; arr1[i++]=15;arr1[i++]=25;arr1[i++]=30;arr1[i++]=35;
    cout << "The position of 20 using lower_bound "
             "(in no occurrence case) : ";
    j= (int)(lower_bound(arr1.begin(), arr1.end(), 20) - arr1.begin());
    cout << arr1[j--]<<"  ";
    cout << arr1[j--]<<"  ";
    cout << arr1[j]<<"  ";

    cout << endl;
    // using lower_bound() to check if 20 exists
    // single occurrence
    // prints 2


    // using lower_bound() to check if 20 exists
    // multiple occurrence
    // prints 2


    // using lower_bound() to check if 20 exists
    // no occurrence
    // prints 2 ( index of next higher)
}
//Output:

//The position of 20 using lower_bound (in single occurrence case) : 2
//The position of 20 using lower_bound (in multiple occurrence case) : 2
//The position of 20 using lower_bound (in no occurrence case) : 2

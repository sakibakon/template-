#include <bits/stdc++.h>
using namespace std;
int ar[2];
int findMinDiff(int arr[], int n)
{
   int diff = 100000;

   for (int i=0; i<n-1; i++){
      for (int j=i+1; j<n; j++){
          if (abs(arr[i] - arr[j]) < diff){
                diff = abs(arr[i] - arr[j]);
                ar[0]=arr[i]; ar[1]= arr[j];
          }
      }
   }

   return diff;
}

int main()
{
   int arr[] = {1, 5, 3, 19, 18, 25};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << "Minimum difference is " << findMinDiff(arr, n)<<endl;
   cout<<ar[0]<<"and"<<ar[1]<<endl;

   return 0;
}

#include<stdio.h>

// Returns value of Binomial Coefficient C(n, k)
int combination(int n, int k)
{
  // Base Cases
  if (k==0 || k==n)
    return 1;

  // Recur
  return  combination(n-1, k-1) + combination(n-1, k);
}

/* Driver program to test above function*/
int main()
{
    int n = 5, k = 2;
    printf("Value of C(%d, %d) is %d ", n, k, combination(n, k));
    return 0;
}

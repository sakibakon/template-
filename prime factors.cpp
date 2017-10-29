// Program to print all prime factors
# include <stdio.h>
# include <math.h>
#include<vector>
using namespace std;
vector<long int> v;

void primeFactors(int n)
{
    while (n%2 == 0)
    {
        //printf("%d ", 2);
        v.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            //printf("%d ", i);
            v.push_back(i);
            n = n/i;
        }
    }
    if (n > 2){
       // printf ("%d ", n);
        v.push_back(n);
    }
}

int main()
{
    long int n;
    scanf("%ld",&n);
    v.clear();
    primeFactors(n);
    int l=v.size();
    for(int i=0; i<l; i++){
        printf("%ld ,", v[i]);
    }
    return 0;
}

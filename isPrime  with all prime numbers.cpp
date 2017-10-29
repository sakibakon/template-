//#include<stdio.h>
//#include<iostream>
//#include<string.h>
//#include<vector>
//#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define N 200000001


#define N 200000001
int lp[N+1];
bool isPrime[N+1];
vector<int> pr;
void seive()
{
    for (int i=2; i<=N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back (i);
            isPrime[i] = true;
        }
        for (int j=0; j< pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j) lp[i * pr[j]] = pr[j];
    }
}

int main()
{
    seive();
    long int n;
    while(scanf("%ld",&n)==1){
        if(isPrime[n]){ printf("%ld is a prime number\n", n);}
        else{ printf("%ld is not a prime number\n", n);}
    }


    return 0;
}

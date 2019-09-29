#include<bits/stdc++.h>
using namespace std;
#define LLD long long int
#define svn 10000002
LLD phi[svn];
bool prime[svn];
void shv()
{
    int i,j;
    for(i=0;i<svn;i++)
    {
        phi[i]=i;
        prime[i]=1;
    }
    prime[0]=0;
    prime[1]=0;
    phi[0]=0;
    phi[1]=1;
    prime[2]=0;
    for(i=2;i<svn;i=i+2)
    {
        prime[i]=0;
        phi[i]=(phi[i]-(phi[i]/2));
    }
    for(i=3;i<svn;i=i+2)
    {
        if(prime[i])
        {
            for(j=i;j<svn;j=j+i)
            {
                phi[j]=(phi[j]-(phi[j]/i));
                prime[j]=0;
            }
        }
    }
}

void summer()
{
    for(int i=1;i<svn;i++)
    {
        phi[i]=phi[i-1]+phi[i];
    }
}
int main()
{
    shv();
    for(int i=0; i<100; i++)cout<<phi[i]<<" ";
    cout<<endl;
    summer();
    for(int i=0; i<100; i++)cout<<phi[i]<<" ";
    return 0;
}

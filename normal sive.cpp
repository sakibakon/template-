#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
#define N 10001
using namespace std;
bool mark [N];
vector<int>prime;
void sive()
{
    memset (mark, true, sizeof (mark));
     mark [0] = mark [1] = false;
     for(int i=4; i<=N; i+=2)mark[i]=false;
     prime.push_back(2);
     for(int i=3; i<=N; i+=2){
        if(mark[i]){
            prime.push_back(i);
            for(int j=i*i; j<= N; j+= 2*i)mark[j]= false;
        }
     }
}
int main()
{
    sive();
    for(int i=0; i< prime.size(); i++)printf("%d\n", prime[i]);
}

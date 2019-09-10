#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define i64 unsigned long long
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
ll ans;
bool pd(int x)
{
    return x==2 || x==3 || x==5 || x==7;
}
int npd(int x)
{
    if(x==4)
        return 3;
    else if(x==6)
        return 5;
    else
        return 7;
}
int dig(ll x)
{
    return log10(x)+1;
}
ll rev(ll x)
{
    ll y=0;
    while(x)
    {
        y*=10;
        y+=x%10;
        x/=10;
    }
    return y;
}
void func(ll n,ll p)
{
    if(n==0)
    {
        ans=max(ans,rev(p));
        return;
    }
    int r=n%10,d;
    if(r==0)
        n--;
    r=n%10;
    if(pd(r))
    {
        ll y=p*10+r;
        func(n/10,y);
        d=dig(n);
        if(d>=2 && r!=7)
        {
            y=p*10+7;
            n/=10;
            n--;
            func(n,y);
        }
    }
    else
    {
        if(r==1)
        {
            if(dig(n)>=2)
            {
                ll y=p*10+7;
                n/=10;
                n--;
                func(n,y);
            }
            else
                ans=max(ans,rev(p));
        }
        else
        {
            while(!pd(n%10))
                n--;
            func(n,p);
        }

    }
}
i64 mulmod(i64 a, i64 b, i64 mod) {
    i64 x = 0, y = a % mod;
    while(b) {
        if(b & 1) {
            x = (x + y) % mod;
        }
        y = (y << 1) % mod;
        b >>= 1;
    }
    return x;
}

i64 power(i64 base, i64 exp, i64 mod) {
    i64 x = 1, y = base % mod;
    while(exp) {
        if(exp & 1) {
            x = mulmod(x, y, mod);
        }
        y = mulmod(y, y, mod);
        exp >>= 1;
    }
    return x;
}

bool millerTest(i64 n, i64 d) {

    i64 a = rand() % (n - 1) + 1;

    i64 x = power(a, d, n);
    while(d != n - 1 and x != 1 and x != n - 1) {
        x = mulmod(x, x, n);
        d <<= 1;
    }

    if(x != n - 1 and !(d & 1)) {
        return false;
    }

    return true;
}

bool isPrime(i64 n, int iter = 50) {

    if(n < 2) {
        return false;
    }
    if(n == 2) {
        return true;
    }
    if(!(n & 1)) {
        return false;
    }

    i64 d = n - 1;
    while(!(d & 1)) {
        d >>= 1;
    }

    for(int i = 0; i < iter; i++) {
        if(!millerTest(n, d)) {
            return false;
        }
    }
    return true;
}

int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        ll n;
        sl(n);
        pf("Case %d: ",t);
        if(n==2)
        {
            puts("2");
            continue;
        }
        if(n%2==0)
            n--;
        while(1)
        {
            ans=-1;
            func(n,0);
            if(isPrime(ans))
                break;
            n=ans-1;
        }
        pf("%lld\n",ans);
    }
}

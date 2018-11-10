#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll big_mod(ll b, ll p, ll m)
{
    if(p==0)return 1;
    if(p%2==0){
        ll c = big_mod(b, p/2, m);
        return ( (c%m)*(c%m) )%m;
    }
    else{
        return ((b%m)*(big_mod(b, p-1, m)))%m;
    }
}
ll mod(string s, ll n){
    ll sum=0, c=0;
    for(int i=s.size()-1; i>=0; i--){
        ll tam=s[i]-'0';
        sum+=((tam%n)*big_mod(10, c, n))%n;
        c++;
    }
    return sum%n;

}
ll mod_another_way(string num, ll a) 
{ 
    ll res = 0; 
    for (ll i = 0; i < num.length(); i++) 
         res = (res*10 + (ll)num[i] - '0') %a; 
  
    return res; 
}
int main()
{
    string s;
    ll n;
    cin>>s;
    cin>>n;
    cout<<mod(s, n)<<endl;
    cout<<mod_another_way(s, n);
    return 0;
}


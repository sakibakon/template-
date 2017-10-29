#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> arr, x, y;

bool comp(const int& a, const int& b){
    if(x[a]!= x[b]) return x[a] < x[b];
    return y[a] < y[b];

}
int main()
{
    int t, X, Y, c=0;
    scanf("%d", &t);
    arr.clear();
    x.clear();
    y.clear();

    while(t--){
        scanf("%d%d", &X, &Y);
        x.push_back(X);
        y.push_back(Y);
        arr.push_back(c);
        c++;
    }
    sort(arr.begin(), arr.end(), comp);
    for(int i=0; i< c; i++){
        //printf("%d\n",arr[i]);
        printf("(%d, %d),",x[arr[i]], y[arr[i]]);
    }
}

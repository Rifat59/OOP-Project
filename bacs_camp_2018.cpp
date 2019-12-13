#include<iostream>
#include<cmath>
#define ll long long

using namespace std;

int main()
{
    ll n,t,cnt;
    scanf("%lld",&t);
    for(ll j=1; j<=t; j++)
    {
        cnt=0;
        scanf("%lld",&n);
        ll ara[n];
        for(ll i=0; i<n; i++)
        {
            scanf("%lld",&ara[i]);
        }
        for(ll i=0; i<n-1; i++)
        {
            if(ara[i+1]-ara[i] == 1){
                printf("Case %lld: Yes\n",j);
                break;
            }
            else cnt++;
        }
        if(cnt==n-1) printf("Case %lld: No\n",j);
    }


    return 0;
}

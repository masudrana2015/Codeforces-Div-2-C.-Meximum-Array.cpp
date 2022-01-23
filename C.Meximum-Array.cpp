#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ll n,t,l,tc,c,r;
 
    scanf("%lld",&tc);
 
    for(int ts=1;ts<=tc;ts++)
    {
        cin>>n;
 
        ll a[n+15];
        ll b[n+10];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
 
 
        map<int,int>p,e;
        map<char,int>d;
 
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
 
 
            p[a[j]]++;
        }
 
        t=0,r=0;
 
        for(int i=0; i<=n && t<n; i++)
        {
            if(p[i]==0)
            {
                map<ll,ll>e;
                c=0;
 
                while(t<n)
                {
                    p[a[t]]--;
 
                    if(a[t]<i)
                    {
                        if(e[a[t]]!=-1)
                        {
                            c++;
                            e[a[t]]=-1;
                        }
                    }
 
                    t++;
 
                    if(c>=i)
                    {
                        b[r++]=i;
                        i=-1;
                        break;
                    }
                }
            }
        }
 
        cout<<r<<endl;
 
        for(int i=0; i<r; i++)
        {
            cout<<b[i]<<" ";
        }
 
        cout<<endl;
 
    }
}

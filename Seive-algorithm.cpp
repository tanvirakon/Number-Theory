#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{


    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) a[i]=i+1;

    for(int i=1; a[i]*a[i]<=n; i++)
    {
        int x=a[i];

        if(x!=0)
        {
            for(int j=(x*x)-1; j<n; j+=x)
            {
                a[j]=0;
            }

        }
    }
     for(auto i:a) if(i!=0)  cout<<i<<" ";
}

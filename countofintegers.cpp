// Hackerearth contest easy to solve if you know some concept of Number Theory.
#include<bits/stdc++.h>
using namespace std;
 
 
int factors(int n)
{
    int count=0,i;
    
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if((n/i)!=i)
            count+=2;
            else
            count++;
        }
    }
    return count+1;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int q,n;
    
    cin >> q;
    
    while(q--)
    {
        int res,i,m;
        
        cin >> n;
        
        res=n; m=n;
        
        for(i=2; i*i<=n; i++)
        {
                if(n%i==0)
                {
                while(n%i==0)
                n/=i;
                
                res-=res/i;
                }
        }
        
        if(n>1)
        res-=res/n;
        
        cout << m-(res+factors(m)) << "\n";
    }
    
    
    return 0;
}

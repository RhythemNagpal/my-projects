#include <iostream>
using namespace std;

int main()
{
int n,m,a1,a2,b1,b2,g=0,x,z;
cin>>n>>m;
cin>>a1>>b1;
cin>>a2>>b2;
for(x=1;x<=n;x++)
{
    for(z=1;z<=m;z++)
    {
    if((a1-x+b1-z)==(a2-x+b2-z))
    {
        g++;
    }
}
        
    }
cout<<g;    
}


#include <iostream>
using namespace std;
int main()
{
    int i,j,k=1,n,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k;
            if(i>1)
            {
                t=i+2;
                cout<<t;
            }
           
        }
        cout<<endl;
        if(k%2!=0)
        {
            k++;
        }
        else
            {
                k=1;
            }
    }
return 0;

}
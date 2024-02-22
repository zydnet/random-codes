#include <iostream>
using namespace std;
int main()
{
    int i,j,k=2,n;
    
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            {
                
                for(j=1;j<=i;j++)
                {
                    cout<<k;
                    
                }
                cout<<endl;
                k=k+2;
            }
            else
            {
                for(j=1;j<=i;j+2)
                {
                    cout<<j;
                    
                }
                cout<<endl;
            }

    }
    return 0;
}



              /*  cout<<k+1+(p-1)*2;
            }
            else{
                cout<<k+(p-1)*2;
            }
            cout<<endl;


            }*/
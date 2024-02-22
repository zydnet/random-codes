#include <iostream>
#include <stdlib.h>
using namespace std;

class square{
    
    public:
        float L1 = 0;
        float L2 = 0;
        float L3 = 0;
        float L4 = 0;



        float CalcCenter(){
            center = (L1+L2+L3+L4)/4;
    }

        float GetCenter(){
            CalcCenter();
            return center;
        }

    square(int l1, int l2, int l3, int l4){

        L1 = l1;
        L2 = l2;
        L3 = l3;
        L4 = l4;
    }

    square(int n){
        L1 = n;
        L2 = n;
        L3 = n;
        L4 = n;
    }

    ~square(){
        cout<< "Box deleted"<<endl;
    }


    void addposition(int n){
        L1+=n;
        L2+=n;
        L3+=n;
        L4+=n;
    }
    void addposition(float n){
         L1+=n*n;
        L2+=n*n;
        L3+=n*n;
        L4+=n*n;
    }


    private:
        float center = 5;

    


    

};

int main(){
    
    square b1(1,2,3,4);
    square b2(5);

    cout<< b1.L1 << endl;
    b1.addposition(10);
    cout<< b1.L1 << endl;
    cout<<endl;

    b1.L1 = 1;
    b1.addposition(10.5f);
    cout<<b1.L1<<endl;

    // cout << b1.GetCenter() << endl;
    // cout << b2.GetCenter() << endl;
    //cout<< b1.center << endl;

}


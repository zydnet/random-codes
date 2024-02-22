#include <iostream>
using namespace std;

int main(){
    int n = 12, L = 0;

    for(int i= 1; i < n+1; i++){
        if(i % 2 == 1){
            L = 2*i;
            for (int j = 1; j < L; j+= 2)
            {
                cout << j<< " ";
            }
            cout<<endl;
            
        }
        else{
            L = (2*i)+1;

            for (int j = 2; j < L; j+= 2)
            {
                cout << j<< " ";
            }
            cout<< endl;
        }
    }

}
#include <iostream>
using namespace std;

int main(){
    int n=0, a=0, b=1, c=a+b;
    cin>> n;
    cout<< b <<endl;

    for (int i=2; i<(n+1); i++){
        if(c<=n){
           
            a = b;
            b = c;
            c = a+b;
            cout<< c <<endl;
        }
    }
    return 0;
}

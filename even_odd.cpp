#include <iostream>
using namespace std;
int main(){
    cout<<"Add number : ";
    long z;
    cin>>z;
    z=z%2;
    if(z==0){
        cout<<"Even";
    }
    else {
        cout<<"Odd";
    }

    cout<<endl;
    return main();
}

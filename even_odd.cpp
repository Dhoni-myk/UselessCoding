#include <iostream>
using namespace std;

int main(){
    cout<<"Add number : ";
    long x;
    cin>>x;
    x=x%2;
    if(x==0){
        cout<<"Even";
    }
    else {
        cout<<"Odd";
    }

    cout<<endl;
    return main();
}

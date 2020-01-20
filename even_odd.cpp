#include <iostream>
using namespace std;
int main(){
    cout<<"Add number : ";
    long y;
    cin>>y;
    y=y%2;
    if(y==0){
        cout<<"Even";
    }
    else {
        cout<<"Odd";
    }

    cout<<endl;
    return main();
}

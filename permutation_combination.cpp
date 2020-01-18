#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

long fact(int a){ //factorial = x! = x1*x2*x3*xn...
    int x=1, i=1;
    while (i<=a){
        x=x*i;
        i++;
    }
    return x;
}

long permutation(){ //P(n,r) = n!/(n-r)!
    int n,r,x;
    cout<<"\nP(n,r) = n!/(n-r)!\n";
    cout<<"Add n : "; cin>>n;
    cout<<"Add r : "; cin>>r;
    x=n-r;
    cout<<endl;
    cout<<"The permutation is "<<fact(n)/fact(x)<<endl;
    cout<<"Press any key to return...";
    getch();
}

long combination(){ //C(n,r) = n!/r!*(n-r)!
    int n,r,x;
    cout<<"\nC(n,r) = n!/r!*(n-r)!\n";
    cout<<"Add n : "; cin>>n;
    cout<<"Add r : "; cin>>r;
    x=n-r;
    cout<<endl;
    cout<<"The combination is "<<fact(n)/fact(r)*fact(x)<<endl;
    cout<<"Press any key to return...";
    getch();
}

int menu(){
    int c;
    cout<<"1. Permutation 2. Combinations\nChoose : ";
    cin>>c;
    if (c==1){
        permutation();
    }
    else if (c==2){
        combination();
    }
    else{
        cout<<"Wrong!";
    }
}

int main(){
    cout<<"C++ Code Permutation and Combination\n";
    cout<<"Permutation\t: P(n,r) = n!/(n-r)!\n";
    cout<<"Combination\t: C(n,r) = n!/r!*(n-r)!\n\n";
    cout<<"Click (x) to exit!\n\n";
    menu();
    cout<<endl<<endl;
    system("CLS");
    return main();
}

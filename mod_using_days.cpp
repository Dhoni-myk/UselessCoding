#include <iostream>
#include <windows.h>
using namespace std;

//Create by dumbdumb small brain hazekezia
//Using method mod 7 implementation

int setday(string day){
    int key;
    if (day=="Monday" || day=="monday" || day=="1"){
        cout<<"Monday";
        key=1;
    }
    else if (day=="Tuesday" || day=="tuesday" || day=="2"){
        cout<<"Tuesday";
        key=2;
    }
    else if (day=="Wednesday" || day=="wednesday" || day=="3"){
        cout<<"Wednesday";
        key=3;
    }
    else if (day=="Thursday" || day=="thursday" || day=="4"){
        cout<<"Thursday";
        key=4;
    }
    else if (day=="Friday" || day=="friday" || day=="5"){
        cout<<"Friday";
        key=5;
    }
    else if (day=="Saturday" || day=="saturday" || day=="6"){
        cout<<"Saturday";
        key=6;
    }
    else if (day=="Sunday" || day=="sunday" || day=="7"){
        cout<<"Sunday";
        key=7;
    }
    return key;
}

int finalday(int key){
    if (key==1){
        cout<<"Monday";
    }
    else if (key==2){
        cout<<"Tuesday";
    }
    else if (key==3){
        cout<<"Wednesday";
    }
    else if (key==4){
        cout<<"Thursday";
    }
    else if (key==5){
        cout<<"Friday";
    }
    else if (key==6){
        cout<<"Saturday";
    }
    else if (key==7){
        cout<<"Sunday";
    }
}

int main(){
    string day;
    int key, addnumb;

    cout<<"C++ Program to Determine Days According to The Number of Days Given\nCreate by: hazekezia\n\n";
    cout<<"Set Day Monday-Sunday (1-7) : ";
    cin>>day;
    cout<<"The day is ";
    key=setday(day);

    cout<<endl<<endl;
    cout<<"Add number of days : ";
    cin>>addnumb;
    int finald1=addnumb%7;
    int finald2=key+finald1;
    cout<<"The day after "<<addnumb<<" days is ";
    finalday(finald2);

    char confirm;
    cout<<"\n\nExit program? (Y/N)";
    cin>>confirm;
    if (confirm=='Y' || confirm=='y'){
        cout<<endl;
        system("CLS");
        return main();
    }
    else
        return 0;
}

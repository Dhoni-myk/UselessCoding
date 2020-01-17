#include <iostream>
using namespace std;

int main(){
    char key[999];
    cout<<"Input Sentence : ";
    cin.getline(key, 999);
    for (int i=0;i<key[i];i++){ //why i do this
        if (key[i]=='a' || key[i]=='A')
            cout<<"1";
        else if (key[i]=='b'|| key[i]=='B')
            cout<<"2";
        else if (key[i]=='c'|| key[i]=='C')
            cout<<"3";
        else if (key[i]=='d'|| key[i]=='D')
            cout<<"4";
        else if (key[i]=='e'|| key[i]=='E')
            cout<<"5";
        else if (key[i]=='f'|| key[i]=='F')
            cout<<"6";
        else if (key[i]=='g'|| key[i]=='G')
            cout<<"7";
        else if (key[i]=='h'|| key[i]=='H')
            cout<<"8";
        else if (key[i]=='i'|| key[i]=='I')
            cout<<"9";
        else if (key[i]=='j'|| key[i]=='J')
            cout<<"10";
        else if (key[i]=='k'|| key[i]=='K')
            cout<<"11";
        else if (key[i]=='l'|| key[i]=='L')
            cout<<"12";
        else if (key[i]=='m'|| key[i]=='M')
            cout<<"13";
        else if (key[i]=='n'|| key[i]=='N')
            cout<<"14";
        else if (key[i]=='o'|| key[i]=='O')
            cout<<"15";
        else if (key[i]=='p'|| key[i]=='P')
            cout<<"16";
        else if (key[i]=='q'|| key[i]=='Q')
            cout<<"17";
        else if (key[i]=='r'|| key[i]=='R')
            cout<<"18";
        else if (key[i]=='s'|| key[i]=='S')
            cout<<"19";
        else if (key[i]=='t'|| key[i]=='T')
            cout<<"20";
        else if (key[i]=='u'|| key[i]=='U')
            cout<<"21";
        else if (key[i]=='v'|| key[i]=='V')
            cout<<"22";
        else if (key[i]=='w'|| key[i]=='W')
            cout<<"23";
        else if (key[i]=='x'|| key[i]=='X')
            cout<<"24";
        else if (key[i]=='y'|| key[i]=='Y')
            cout<<"25";
        else if (key[i]=='z'|| key[i]=='Z')
            cout<<"26";
        else
            cout<<" <space> ";
        cout<<".";
    }
}

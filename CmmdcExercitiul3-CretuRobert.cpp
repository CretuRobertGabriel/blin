#include <iostream>

using namespace std;

int a;
int b;
int main()
{
    cout<<"Introduceti Primul Nr.: ";cin>>a;
    cout<<"Introduceti Al Doilea Nr.: ";cin>>b;
    if(a==b){
        cout<<"cmmdc este -->"<<endl;cin>>a;
    }
    else{
        while(a!=b){
            if(a>b){a=a-b;}
            else(b=b-a)
    ;}
    if(a==1){
        cout<<"numerele sunt prime intre ele";
    }
    if(a!=1){
        cout<<"numerele nu sunt prime intre ele";
    }
    }
}

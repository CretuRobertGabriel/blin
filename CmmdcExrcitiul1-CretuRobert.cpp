#include <iostream>
using namespace std;

int a,b;
int main()
{
cout<<"Introduceti numarul a: ";cin>>a;
cout<<"Introduceti numarul b: ";cin>>b;
while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
cout<<"Cmmdc = "<<a;
}

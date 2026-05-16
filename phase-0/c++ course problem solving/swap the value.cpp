#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    temp=b;
    b=a;
    a=temp;
    cout<<"a = "<<a<<' '<<"b = "<<b;
    return 0;

}

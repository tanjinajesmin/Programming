#include<iostream>
using namespace std;
int add(int a,double b,int c=10,double d = 20.5)
{
    return a + b + c + d;
}
int main()
{
    cout << add(10,20.5) << endl;
    cout << add(10,20.5,30)<<endl;
    cout << add(10,20.5,30,40.5) << endl;
    return 0;
}

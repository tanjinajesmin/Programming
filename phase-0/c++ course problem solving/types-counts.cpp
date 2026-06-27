#include<iostream>
using namespace std;
void print(int i)
{
    cout << "Integer : " << i <<endl;
}
void print(double d)
{
    cout << "Double : "<<d << endl;
}
void print(int i,int j)
{
    cout << "Two Integers :"<<i<<endl;
}
int min()
{
    print(5);
    print(5.5);
    print(5,10);
    return 0;
}


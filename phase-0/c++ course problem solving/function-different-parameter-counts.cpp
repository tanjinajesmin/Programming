#include<iostream>
using namespace std;
void display(int i)
{
    cout << "Integer : " << i << endl;
}
void display(double d)
{
    cout << "Double : " << d << endl;
}
int main()
{
    display(10);
    display(10.5);
    return 0;
}

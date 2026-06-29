#include<iostream>
using namespace std;
int get_sum(int ,int);
int main()
{

    cout<<get_sum(10,20)<<endl;
    cout<<get_sum(5,7)<<endl;
    return 0;
}
int get_sum(int a,int b)
{

    int sum = a + b;
    return sum;
}

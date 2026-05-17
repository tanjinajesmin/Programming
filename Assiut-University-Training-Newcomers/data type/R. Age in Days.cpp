#include<iostream>
using namespace std;
int main()
{
    long long int days,years,months;
    cin>>days;
    years = days / 365;
    days = days%365;
    months = days /30;
    days = days%30;
    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<days<<" days"<<endl;

}

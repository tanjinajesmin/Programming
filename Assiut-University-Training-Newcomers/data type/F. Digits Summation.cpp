#include<iostream>
using namespace std;
int main()
{
    long long int M,N,M_last,N_last,sum;
    cin>>M>>N;
    M_last = M %10;
    N_last = N %10;
    sum = M_last + N_last;
    cout<<sum<<endl;
    return 0;

}

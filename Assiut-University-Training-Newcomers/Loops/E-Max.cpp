#include<iostream>
using namespace std;
int main()
{
    long long int n,x,mx;
    cin >>n;
    cin >> mx;
    for(int i =2;i <=n;i++){
        cin >> x;
        if(x>mx){
            mx = x;
        }
    }
    cout << mx <<endl;
    return 0;
}

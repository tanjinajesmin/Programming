#include<iostream>
using namespace std;
int main()
{
    long long int A , B, C ,D,ans;
    cin >> A >> B >> C >> D;
    ans = (A % 100);
    ans = (ans * (B % 100)) % 100;
    ans = (ans * (C % 100)) % 100;
    ans = (ans * (D % 100)) % 100;
    if (ans < 10){
        cout << "0" << ans << endl;
    }
    else{
        cout << ans;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a,b,i=1,ans =1;
    cin >> a >> b;
    while(i <= b){
        ans = ans * i;
        i++;
        cout << ans << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int L1,L2,R1,R2;
    cin >> L1 >> R1 >> L2 >> R2;
     long long left = max(L1,L2);
     long long right = min(R1 ,R2);
     if(left <= right){
        cout << left << " "<<right;
     }
     else {
        cout << -1;
     }
     return 0;
}

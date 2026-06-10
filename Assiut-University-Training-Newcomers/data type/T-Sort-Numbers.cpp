#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int a = A, b = B, c = C;
    if(A > B) swap (A,B);
    if(A > C) swap (A,C);
    if(B > C) swap (B,C);
    cout << A << endl << B << endl << C <<endl;
    cout << endl << a << endl << b << endl << c <<endl;
    return 0;
}

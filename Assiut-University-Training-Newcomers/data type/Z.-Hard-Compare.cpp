#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int A ,B, C, D;
    cin >> A >> B >> C >> D;

    long double e = (long double)B * log(A);
    long double f = (long double )D * log(C);
    if(e > f){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    double A,B,C;
    char S , Q;
    cin >> A >>S>> B >>Q >> C;
    if(A + B == C || A - B == C || A * B == C){
        cout << "Yes";
    }
    else if(S == '+') {
        cout << A + B << endl;
    }
    else if(S == '-'){
        cout << A - B << endl;
    }
    else if(S == '*'){
        cout << A*B << endl;
    }

    return 0;
}

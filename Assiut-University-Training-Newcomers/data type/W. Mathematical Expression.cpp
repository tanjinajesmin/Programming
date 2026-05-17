#include<iostream>
using namespace std;
int main()
{
    long long int A,B,C;
    char S,Q;
    cin>>A>>S>>B>>Q>>C;

    if(((S=='+'&& Q=='=' )&& (A + B) == C)|| ((S== '-' && Q=='=')&& (A - B == C))||((S=='*'&& Q == '=')&&(A * B == C))){
        cout<<"Yes"<<endl;
    }
    else if(S=='+'){
            cout<<A+B<<endl;
    }
    else if(S=='-'){
        cout<<A-B<<endl;
    }
    else if(S=='*'){
        cout<<A*B<<endl;
    }

    return 0;
}

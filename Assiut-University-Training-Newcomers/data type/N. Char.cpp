#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='A'&& ch<='Z'){
        ch=ch+32;
        cout<<ch<<endl;
    }
    else if(ch>='a' && ch<='z'){
        ch=ch-32;
        cout<<ch<<endl;
    }
    return 0;
}

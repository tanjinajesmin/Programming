#include<iostream>
using namespace std;
int main()
{
    int a,b,c,maxm,mine;
    cin>>a>>b>>c;
    maxm = mine = a;
    if(b>maxm)
        maxm = b;
    if(c>maxm)
        maxm=c;
    if(b<mine)
        mine = b;
    if(c<mine)
        mine = c;
    cout<<mine<<' '<<maxm<<endl;
    return 0;

}

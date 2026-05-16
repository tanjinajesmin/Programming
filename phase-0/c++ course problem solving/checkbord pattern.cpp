#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i+j)%2==0){
                cout<<"X ";
            }
            else{
                cout<<"O ";
            }
        }
        cout<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,a[n],i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n],j=0;
    for(i=n-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++){
        a[i]=b[i];
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}

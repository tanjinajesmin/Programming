#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    int mine = a[0],index = 1;
    for(int i =0;i<n;i++){
     if(a[i]<mine){
        mine = a[i];
        index = i+1;
     }
    }
        cout << mine <<" "<< index << endl;
        return 0;
}

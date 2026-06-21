#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for(int i =0;i <n;i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    for(int i =0;i<n;i++){
        if(arr[i]== x){
            cout << i <<endl;
            return 0;
        }
    }
        cout << -1<<endl;

}

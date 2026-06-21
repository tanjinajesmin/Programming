#include<iostream>
using namespace std ;
int main()
{
    int n,e=0,ne =0,p=0,o=0;
    cin >> n;
    for (int i =0;i<n;i++){
     int x;
     cin >> x;
     if(x % 2 ==0){
        p++;
     }
     else if(x%2!= 0){
        o++;
     }
     if(x>0){
        e++;
    }
    else if(x<0){
        ne++;
    }


}
cout <<"Even: "<< p <<endl <<"Odd: " <<o <<endl <<"Positive: "<<e<<endl<<"Negative: "<<ne<<endl;

}

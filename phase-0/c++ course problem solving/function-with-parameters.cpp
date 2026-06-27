#include<iostream>
using namespace std;
int get_sum(int n)
{
  int sum = 0;
  for(int i= 1;i<=n;i++) {
    sum = sum + i;
  }
  return sum;
}
  int main()
  {
      cout << get_sum(10) << endl;
      cout << get_sum(100) << endl;
      cout << get_sum(1000) << endl;
      return 0;
  }


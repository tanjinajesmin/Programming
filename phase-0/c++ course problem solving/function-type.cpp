#include <iostream>
using namespace std;
void say_hello()
{
    cout << "Hello world!" <<endl;
}
int get_number()
{
    return 42;
}
void print_number(int number)
{
    cout << number << endl;
}
int get_sum(int a,int b)
{
    return a + b;
}
int main()
{
    say_hello();
    cout << get_number() <<endl;
    print_number(10);
    cout << get_sum(10,20) << endl;
    return 0;
}

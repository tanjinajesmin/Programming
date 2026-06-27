#include <iostream>'
using namespace std;
int get_number_1()
{
    return 42;
}
int get_number_2()
{
    return 43;
}
int get_sum()
{
    int x=get_number_1();
    int y=get_number_2();
    return x+y;
}
int main()
{
    cout << get_sum()<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void fun()
{
    // int x = 100;
    // cout << a << endl;
     int *ptr = new int;

    *ptr = 100;

    cout << *ptr << endl;
}
int main()
{
  
    int a = 10;
    cout << a << endl;

    fun();

//    int *ptr = new int;

//    *ptr = 100;

//     cout << *ptr << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 10;

    cout << "a er address: " << &a << endl;

    int *ptr = &a;

    cout << "pointer er address: " << ptr << endl;

    // dereferencing 

    *ptr = 20;
    cout << "a er dereferenced value: " << a << endl;

    return 0;
}

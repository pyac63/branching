#include <iostream>

using namespace std;

int add (int x, int y)
{
    return x+y;
}

void print()
{
    cout << "Enter a number: \n";
    int x;
    cin >>x;
    cout << "Enter 2nd number: \n";
    int y; cin >> y;
    cout << "Addition of both is: " << add(x, y) << "\n";
}

int main()
{
    cout << "Hello world!" << endl;
    cout << "Goodbye, world!\n";
    print();
    return 0;
}

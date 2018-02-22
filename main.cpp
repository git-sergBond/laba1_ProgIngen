#include "sdt.h"

int main()
{
    int16_t a=0, b=0;

    cout << "please, type value of A variable here: ";
    cin >> a;

    cout << endl << "please, type value of B variable here: ";
    cin >> b;

    cout << endl << "A = " << a << ", B = " << b << endl
        << "A + B = " << (a+b) << endl;

    cout << "A - B = " << (a-b) << endl;

    _getch();
    return 0;
}

#include "sdt.h"
//прогриамма является учебной
int main()
{
    int16_t a=0, b=0;

    cout << "please, type value of A variable here: ";//func
    cin >> a;

    cout << endl << "please, type value of B variable here: ";
    cin >> b;

    cout << endl << "A = " << a << ", B = " << b << endl
        << "A + B = " << (a+b) << endl;//func
    cout << "A - B = " << (a-b) << endl;
	cout << "A * B = " << a * b << '\n';

    cout << "A / B = " << (a/b) << endl;//func

	//func2
    
    _getch();
    return 0;
}

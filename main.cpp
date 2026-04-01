#include <iostream>
#include "largeIntegers.h"
using namespace std;

int main()
{
    largeIntegers A("123456789987654321");
    largeIntegers B("987654321123456789");

    largeIntegers sum = A.add(B);
    largeIntegers diff = A.subtract(B);
    largeIntegers prod = A.multiply(B);

    cout << "A = "; A.print(); cout << endl;
    cout << "B = "; B.print(); cout << endl;

    cout << "A + B = "; sum.print(); cout << endl;
    cout << "A - B = "; diff.print(); cout << endl;
    cout << "A * B = "; prod.print(); cout << endl;

    int cmp = A.compare(B);
    if (cmp == 0) cout << "A == B" << endl;
    else if (cmp > 0) cout << "A > B" << endl;
    else cout << "A < B" << endl;

    return 0;
}

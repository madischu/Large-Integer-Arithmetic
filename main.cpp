#include <iostream>
#include "largeIntegers.h"
using namespace std;

int main()
{
    string input 1, input2;
    // Prompt user for input
    cout << "Enter first large integer: ";
    cin >> input 1;

    cout << "Enter seconf large integer: ";
    cin >> input2;
    
    // Create objects using user input
    largeIntegers A(input1);
    largeIntegers B(input2);

    // Perform operations
    largeIntegers sum = A.add(B);
    largeIntegers diff = A.subtract(B);
    largeIntegers prod = A.multiply(B);

    // Output results
    cout << "\nA = "; A.print(); cout << endl;
    cout << "B = "; B.print(); cout << endl;

    cout << "A + B = "; sum.print(); cout << endl;
    cout << "A - B = "; diff.print(); cout << endl;
    cout << "A * B = "; prod.print(); cout << endl;

    // Comparison
    int cmp = A.compare(B);
    if (cmp == 0) 
        cout << "A == B" << endl;
    else if (cmp > 0) 
        cout << "A > B" << endl;
    else 
        cout << "A < B" << endl;

    return 0;
}

#ifndef LARGEINTEGERS_H
#define LARGEINTEGERS_H

#include <string>
using namespace std;

class largeIntegers
{
private:
    string number;

    static string addStrings(string a, string b);
    static string subtractStrings(string a, string b);
    static string multiplyStrings(string a, string b);
    static int compareStrings(string a, string b);

public:
    largeIntegers();
    largeIntegers(string num);

    void setNumber(string num);
    string getNumber() const;
    void print() const;

    largeIntegers add(const largeIntegers& other);
    largeIntegers subtract(const largeIntegers& other);
    largeIntegers multiply(const largeIntegers& other);
    int compare(const largeIntegers& other);
};

#endif

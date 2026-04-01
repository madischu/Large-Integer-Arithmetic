#include "largeIntegers.h"
#include <iostream>
#include <algorithm>

largeIntegers::largeIntegers() { number = "0"; }

largeIntegers::largeIntegers(string num) { number = num; }

void largeIntegers::setNumber(string num) { number = num; }

string largeIntegers::getNumber() const { return number; }

void largeIntegers::print() const { cout << number; }

// Compare two numbers
int largeIntegers::compareStrings(string a, string b)
{
    if (a.length() > b.length()) return 1;
    if (a.length() < b.length()) return -1;
    if (a > b) return 1;
    if (a < b) return -1;
    return 0;
}

// Addition
string largeIntegers::addStrings(string a, string b)
{
    if (a.length() < b.length()) swap(a, b);

    int carry = 0;
    string result = "";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (size_t i = 0; i < a.length(); i++)
    {
        int digitA = a[i] - '0';
        int digitB = (i < b.length()) ? b[i] - '0' : 0;

        int sum = digitA + digitB + carry;
        result += (sum % 10) + '0';
        carry = sum / 10;
    }

    if (carry) result += carry + '0';

    reverse(result.begin(), result.end());
    return result;
}

// Subtraction (assumes a >= b)
string largeIntegers::subtractStrings(string a, string b)
{
    int borrow = 0;
    string result = "";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (size_t i = 0; i < a.length(); i++)
    {
        int digitA = a[i] - '0';
        int digitB = (i < b.length()) ? b[i] - '0' : 0;

        digitA -= borrow;

        if (digitA < digitB)
        {
            digitA += 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }

        result += (digitA - digitB) + '0';
    }

    while (result.length() > 1 && result.back() == '0')
        result.pop_back();

    reverse(result.begin(), result.end());
    return result;
}

// Multiplication
string largeIntegers::multiplyStrings(string a, string b)
{
    int n = a.size(), m = b.size();
    vector<int> result(n + m, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            int mul = (a[i] - '0') * (b[j] - '0');
            int sum = mul + result[i + j + 1];

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    string res = "";
    for (int num : result)
    {
        if (!(res.empty() && num == 0))
            res += to_string(num);
    }

    return res.empty() ? "0" : res;
}

// Public wrappers
largeIntegers largeIntegers::add(const largeIntegers& other)
{
    return largeIntegers(addStrings(number, other.number));
}

largeIntegers largeIntegers::subtract(const largeIntegers& other)
{
    if (compareStrings(number, other.number) >= 0)
        return largeIntegers(subtractStrings(number, other.number));
    else
        return largeIntegers("-" + subtractStrings(other.number, number));
}

largeIntegers largeIntegers::multiply(const largeIntegers& other)
{
    return largeIntegers(multiplyStrings(number, other.number));
}

int largeIntegers::compare(const largeIntegers& other)
{
    return compareStrings(number, other.number);
}

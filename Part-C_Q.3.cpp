#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int result;
    char opr;
    cout << "Enter the Operation to perform" << endl;
    cin >> opr;
    cout << "Enter the Numbers For Operations" << endl;
    cin >> num1;
    cin >> num2;

    switch (opr)
    {
    case '+':
        result = num1 + num2;
        cout << "Result: " << result << endl;
        break;

    case '-':
        result = num1 - num2;
        cout << "Result: " << result << endl;
        break;

    case '*':
        result = num1 * num2;
        cout << "Result: " << result << endl;
        break;

    case '/':
        result = num1 / num2;
        cout << "Result: " << result << endl;
        break;

    case '%':
        result = num1 % num2;
        cout << "Result: " << result << endl;
        break;

    default:
        cout << "ERROR: No More Operators" << endl;
        break;
    }
    return 0;
}
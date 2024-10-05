#include <iostream>
using namespace std;

// Arsalan khan
int main()
{
    int num1, num2;

    cout << "enter your 1st number" << endl;
    cin >> num1;

    char operator1;
    cout << "+ , - , * , / , % ," << endl;
    cin >> operator1;

    cout << "enter your 2st number" << endl;
    cin >> num2;

    switch (operator1)
    {
        {
        case '+':
            if (num1 + num2)
                cout << "result" << num1 + num2 << endl;
            break;
        }
        {
        case '-':
            if (num1 - num2)
                cout << "result" << num1 - num2 << endl;
            break;
        }
        {
        case '*':
            if (num1 * num2)
                cout << "result" << num1 * num2 << endl;
            break;
        }
        {
        case '/':
            if (num1 / num2)
                cout << "result" << num1 / num2 << endl;
            break;
        }
        {
        case '%':
            if (num1 % num2)
                cout << "result" << num1 % num2 << endl;
            break;
        }
    }

    return 0;
}
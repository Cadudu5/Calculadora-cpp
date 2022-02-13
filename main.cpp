#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    int number1, number2;
    int op;
    float result;

    cout << "Enter a number: ";
    cin >> number1;

    while (op != -1){
        cout << "1 - Add operation\n2 - Subtraction operation\n3 - Division operation\n4 - Multiplication operation\n";
        cout << "5 - Square\n6 - Square root\n7 - Exponenciation\n8 - Factorial\nType -1 to quit." << endl; 
        cout << "Which operation do you want to do? [Choose from the menu] ";
        cin >> op;
        if (op == -1){
            cout << "Thanks for using!";
            return 0;
        }
        switch (op){
        case 1:{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 + number2;
            break;
        }
        case 2:{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 - number2;
            break;
        }
        case 3:{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 / number2;
            break;
        }
        case 4:{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 * number2;
            break;
        }
        case 5:{
            result = number1 * number1;
            break;
            
        }
        case 6: {
            result = sqrt(number1);
            break;
        }
        case 7: {
            cout << "Enter the exponent: ";
            cin >> number2;
            result = pow(number1, number2);
            break;
        }
        case 8: {
            result = tgamma(number1 + 1);
            break;
        }
        case -1:{
            return 0;
            break;
        }
        }
        cout << "\nThe result is: " << result << "\n";
        cout << "--------------------------------------------------------------\n\n";
        number1 = result;
    }
    
    return 0;
}




#include <iostream>
#include <cmath>
using namespace std;


int calculator(int op)
{
    int number1, number2;

    float result;

    cout << "Enter the first number: ";
    cin >> number1;

    while (op != -2){
        cout << "1 - Add operation\n2 - Subtraction operation\n3 - Division operation\n4 - Multiplication operation\n";
        cout << "5 - Square\n6 - Square root\n7 - Exponenciation\n8 - Factorial\n9 - Cosine(deg)\n10 - Sine(deg)\n11 - tangent(deg)\nType -1 to erase.\nType -2 to quit." << endl; 
        cout << "Which operation do you want to do? [Choose from the menu] ";
        cin >> op;
        switch (op){
        case 1:{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 + number2;
            system("cls");
            break;
        }
        case 2:{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 - number2;
            system("cls");
            break;
        }
        case 3:{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 / number2;
            system("cls");
            break;
        }
        case 4:{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 * number2;
            system("cls");
            break;
        }
        case 5:{
            result = number1 * number1;
            system("cls");
            break; 
        }
        case 6: {
            result = sqrt(number1);
            system("cls");
            break;
        }
        case 7: {
            cout << "Enter the exponent: ";
            cin >> number2;
            result = pow(number1, number2);
            system("cls");
            break;
        }
        case 8: {
            result = tgamma(number1 + 1);
            system("cls");
            break;
        }
        case 9: {
            result = cos(number1);
            system("cls");
            break;
        }
        case 10: {
            result = sin(number1);
            system("cls");
            break;
        }
        case 11: {
            result = tan(number1);
            system("cls");
            break;
        }
        case -1: {
            return op;
            break;
        }
        case -2: {
            return op;
            break;
        }
        }
        cout << "\nThe result is: " << result << "\n";
        cout << "--------------------------------------------------------------\n\n";
        number1 = result;
    }
}


int main()
{
    int op;
    while (op != -2){
        op = calculator(op);
        system("cls");
    }
    system("cls");
    cout << "Thanks for using!";
    return 0;
}




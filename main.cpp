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
        cout << "\n\t\t\tMENU ";  
        cout << "\n_______________________________________________________" << endl;
        cout << "(1) Add operation\t| (2) Subtraction operation\n(3) Division operation\t| (4) Multiplication operation\n";
        cout << "(5) Square\t\t| (6) Square root\n(7) Exponenciation\t| (8) Factorial\n(9) Cosine(deg)\t\t| (10) Sine(deg)\n(11) tangent(deg)\t|\n" << endl; 
        cout << "Type (-1) to erase or Type (-2) to quit...";
        cout << "\n--------------------------------------------------------" << endl;
        cout << "Which operation do you want to do? [Choose from the menu] ";
        cin >> op;
        switch (op){
        case 1:{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 + number2;
            system("cls");
            cout << "\n" << number1 << " + " << number2 << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n\n";
            break;
        }
        case 2:{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 - number2;
            system("cls");
            cout << "\n" <<  number1 << " - " << number2 << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n\n";
            break;
        }
        case 3:{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 / number2;
            system("cls");
            cout << "\n" << number1 << "/" << number2 << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n\n";
            break;
        }
        case 4:{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 * number2;
            system("cls");
            cout << "\n" << number1 << "*" << number2 << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n\n";
            break;
        }
        case 5:{
            result = number1 * number1;
            system("cls");
            cout << "\n" << "(" << number1 << ")" << "^" << 2 << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n\n";
            break; 
        }
        case 6: {
            result = sqrt(number1);
            system("cls");
            cout << "\n" << "square root(" << number1 << ")" << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n\n";
            break;
        }
        case 7: {
            cout << "Enter the exponent: ";
            cin >> number2;
            result = pow(number1, number2);
            system("cls");
            cout << "\n" << "(" << number1 << ")" << "^" << number2 << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n\n";
            break;
        }
        case 8: {
            result = tgamma(number1 + 1);
            system("cls");
            cout << "\n" << number1 << "!" <<  "= " << result << "\n";
            cout << "--------------------------------------------------------------\n\n";
            break;
        }
        case 9: {
            result = cos(number1);
            system("cls");
            cout << "\n" << "cos(" << number1 << ")" << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n\n";
            break;
        }
        case 10: {
            result = sin(number1);
            system("cls");
            cout << "\n" << "sin(" << number1 << ")" << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n\n";
            break;
        }
        case 11: {
            result = tan(number1);
            system("cls");
            cout << "\n" << "tan(" << number1 << ")" << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n\n";
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
    
        number1 = result;
    }
}


int main()
{
    int op;
    cout << "\nWelcome to the Calculator!\n";
    while (op != -2){
        op = calculator(op);
        system("cls");
    }
    system("cls");
    cout << "Thanks for using!";
    return 0;
}




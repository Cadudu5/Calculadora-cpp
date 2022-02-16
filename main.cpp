#include <iostream>
#include <cmath>
using namespace std;

const int PI = 3.1415626535;


int calculator(char op)
{
    float number1, number2;

    float result;


    cout << "Enter the first number: ";
    cin >> number1;

    while (op != 'q'){
        cout << "\n\t\t\tMENU ";  
        cout << "\n_______________________________________________________" << endl;
        cout << "(+) Add operation\t| (-) Subtraction operation\n(/) Division operation\t| (*) Multiplication operation\n";
        cout << "(1) Square\t\t| (s) Square root\n(^) Exponenciation\t| (!) Factorial\n(2) Cosine(deg)\t\t| (3) Sine(deg)\n(4) tangent(deg)\t|\n" << endl; 
        cout << "Type (e) to erase or Type (q) to quit...";
        cout << "\n--------------------------------------------------------" << endl;
        cout << "Which operation do you want to do? [Choose from the menu] ";
        cin >> op;
        switch (op){
        case '+':{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 + number2;
            system("cls");
            cout << "\n" << number1 << " + " << number2 << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n";
            break;
        }
        case '-':{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 - number2;
            system("cls");
            cout << "\n" <<  number1 << " - " << number2 << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n";
            break;
        }
        case '/':{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 / number2;
            system("cls");
            cout << "\n" << number1 << "/" << number2 << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n";
            break;
        }
        case '*':{
            cout << "Enter the next number: " << endl;
            cin >> number2;
            result = number1 * number2;
            system("cls");
            cout << "\n" << number1 << "*" << number2 << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n";
            break;
        }
        case '1':{
            result = number1 * number1;
            system("cls");
            cout << "\n" << "(" << number1 << ")" << "^" << 2 << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n";
            break; 
        }
        case 's': {
            result = sqrt(number1);
            system("cls");
            cout << "\n" << "square root(" << number1 << ")" << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n";
            break;
        }
        case '^': {
            cout << "Enter the exponent: ";
            cin >> number2;
            result = pow(number1, number2);
            system("cls");
            cout << "\n" << "(" << number1 << ")" << "^" << number2 << " = " << result << "\n";
            cout << "--------------------------------------------------------------\n";
            break;
        }
        case '!': {
            result = tgamma(number1 + 1);
            system("cls");
            cout << "\n" << number1 << "!" <<  "= " << result << "\n";
            cout << "--------------------------------------------------------------\n";
            break;
        }
        case '2': {
            float radians;
            radians = number1 * 0.017453292519;
            result = cos(radians);
            system("cls");
            printf("cos(%.2f) = %.3f\n", number1, result);
            cout << "--------------------------------------------------------------\n";
            break;
        }
        case '3': {
            float radians;
            radians = number1 * 0.017453292519;
            result = sin(radians);
            system("cls");
            printf("sin(%.2f) = %.3f\n", number1, result);
            cout << "--------------------------------------------------------------\n";
            break;
        }
        case '4': {
            float radians;
            radians = number1 * 0.017453292519;
            result = tan(radians);
            system("cls");
            printf("tan(%.2f) = %.3f\n", number1, result);
            cout << "--------------------------------------------------------------\n";
            break;
        }
        case 'e': {
            return op;
            break;
        }
        case 'q': {
            return op;
            break;
        }
        }
    
        number1 = result;
    }
}


int main()
{
    char op;
    cout << "\nWelcome to the Calculator!\n";
    while (op != 'q'){
        op = calculator(op);
        system("cls");
    }
    system("cls");
    cout << "Thanks for using!";
    return 0;
}




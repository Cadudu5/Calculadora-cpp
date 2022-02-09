#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number1, number2;
    int op = 0;
    float result;

    cout << "Enter a number: ";
    cin >> number1;

    while (op != -1){

        cout << "1 - Add operation\n2 - Subtraction operation\n3 - Division operation\n4 - Multiplication operation\n-1 to quit.\n" << endl;

        cout << "Which operation do you want to do? [Choose from the menu] ";
        cin >> op;
        if (op == -1){
            cout << "Thanks for using!";
            return 0;
        }
        cout << "Enter the next number: " << endl;
        cin >> number2;


        switch (op){
        case 1:{
            result = number1 + number2;
            break;
        }
        case 2:{
            result = number1 - number2;
            break;
        }
        case 3:{
            result = number1 / number2;
            break;
        }
        case 4:{
            result = number1 * number2;
            break;
        }

        case 5:{
            cout << "teste de nova branch" << endl;
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


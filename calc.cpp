#include<iostream>
using namespace std;

int main(){
    int op;

    
    cout << "choose an operation:" << endl;
    cout << "1 - Sum operation" << endl;
    cin >> op;

    switch (op)
    {
    case 1:
    {
        int cont;
        int sum = 0;
        int *p;
        cout << "how many numbers will be summed?" << endl;
        cin >> cont;

        p = new int [cont];

        for (int i = 0; i < cont; i++){
            cout << i+1 << "th number: " << endl;
            cin >> p[i]; 
        }

        for(int j = 0; j < cont; j++){
            sum += p[j];
        }

        cout << "The sum is: " << sum << endl;
    }
        break;
    
    default:

        break;
    }
}
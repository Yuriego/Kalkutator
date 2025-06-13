#include <iostream>
using namespace std;

int main()
{
    cout << "Witaj w programie obliczajacym memesense.gg" << endl;
    cout << "wybierz jedna z opcji : " << endl;
    cout << "1. Dodawanie" << endl << "2. Odejmowanie" << endl << "3. Mnozenie" << endl << "4. Dzielenie" << endl;
    int wybur;
    cin >> wybur;
    double a,b;


    switch(wybur)
    {
        case 1:
        cout << "You picked adding" << endl;
        cout << "type numbers to be added together" << endl;
        
        cin >> a;
        cin >> b;
        cout << a + b;
        break;

        case 2:
        cout << "You picked subtracting" << endl;
        cout << "type numbers to be subtracted" << endl;
        
        cin >> a;
        cin >> b;
        cout << a-b;
        break;

        case 3:
        cout << "You picked multiplication" << endl;
        cout << "type numbers to be multiplicated" << endl;
        
        cin >> a;
        cin >> b;
        cout << a*b;
        break;

        case 4:
        cout << "you picked divining" << endl;
        cout << "type numbers to be divinied" << endl;
        
        cin >> a;
        cin >> b;
        cout << a/b;
        break;

        default:
        cout << "error you fukin monkey";


    }


}

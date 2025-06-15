#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome in calculator" << endl;
    cout << "Choose one of the options : " << endl;
    cout << "1. Adding" << endl << "2. Subtracting" << endl << "3. Multiplicating" << endl << "4. Dividing" << endl;
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

        if(a == 0 || b == 0)
        {
            cout << "It doesn't work that way";
            return 0;
        }

        cout << a/b;
        break;

        default:
        cout << "error you always had trouble with saying brian";


    }


}

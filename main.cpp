#include <iostream>

using namespace std;

int main()
{
    string verbe;

    //Saisie d'un verbe
    cout << "Veuillez saisir un verbe : ";
    cin >> verbe;

    //Declaration du groupe du verbe
    //si la terminaison est : -er
    if (verbe[verbe.length() - 2] == 'e' && verbe[verbe.length() - 1] == 'r'){
            if (verbe == "aller"){
                cout << "Ce verbe est au 3eme groupe." << endl;
            }
            else {
                cout << "Ce verbe est au 1er groupe." << endl;
            }
    }

    //si la terminaison est : -ir
    else if (verbe[verbe.length() - 2] == 'i' && verbe[verbe.length() - 1] == 'r'){
            cout << "Ce verbe est au 2eme groupe." << endl;
    }

    //si la terminaison est autre que ça
    else if (verbe[verbe.length() - 2] == 'r' && verbe[verbe.length() - 1] == 'e'){
        cout << "Ce verbe est au 3eme groupe." << endl;
    }
    else {
        cout << "Ceci n'est pas un verbe." << endl;
    }

    return 0;
}

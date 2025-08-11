#include <iostream>

using namespace std;

int main()
{
    string phrase, finale;
    string maj = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i, j;

    //Saisie de la phraseCamelCase
    cout << "Veuillez saisir une phrase en CamelCase ici (ex : BonjourToutLeMonde) : " << endl;
    cin >> phrase;

    //Transformation
    for (i = 0; i < phrase.length(); i++){
        for (j = 0; j < maj.length(); j++)
        if (phrase[i] != phrase[i-1] && phrase[i] == maj[j]){
            finale += ' ';
        }
        finale += phrase[i];
    }
    cout << "Phrase finale : " << finale << endl;

    return 0;
}

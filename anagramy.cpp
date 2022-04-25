

#include <iostream>
using namespace std;
#include <cstring>



bool anagram(char* wyraz1, char* wyraz2)
{
    int dl1 = strlen(wyraz1);
    int dl2 = strlen(wyraz2);
    if (dl1 != dl2) return false;

    int licz[127] = {};

    for (int i = 0; i < dl1; i++)
        licz[wyraz1[i]]++;

    for (int i = 0; i < dl1; i++)
        licz[wyraz2[i]]--;

    for (int i = 0; i < 127; i++)
        if (licz[i] != 0) return false;

    return true;

}

    int main()
{
    char wyraz1[100];
    char wyraz2[100];
    cout << "podaj pierwszy wyraz: ";
    cin >> wyraz1;
    cout << "podaj drugi wyraz: ";
    cin >> wyraz2;

    if (anagram(wyraz1, wyraz2))
        cout << "podane wyrazy sa anagramami";
    else
        cout << "podane wyrazy nie sa anagramami";

    return 0;





}


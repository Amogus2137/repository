// ConsoleApplication4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
void szyfr(int klucz, char tab[]) {


    int dl = strlen(tab);

        if (!(klucz >= -26 && klucz <= 26)) return;
    if (klucz >= 0)
        for (int i = 0; i < dl; i++)
            if (tab[i] + klucz <= 'z')
    tab[i] += klucz;
            else
                tab[i] = tab[i] + klucz - 26;

    else
        for (int i = 0; i < dl; i++)
            if (tab[i] + klucz >= 'a')
                tab[i] += klucz;
            else tab[i] = tab[i] + klucz + 26;
}
int main()
{
    int klucz;
    char tab[1001];
    cout << "podaj wyraz skladajacy sie z malych liter: ";
    cin >> tab;
    cout << "Podaj klucz z przedzialu [-26..26]: ";
    cin >> klucz;
    szyfr(klucz, tab);
    cout << "Po zaszyfrowaniu: " << tab<<endl;
    szyfr(-klucz, tab);
    cout << "Po rozszydrowaniu: " << tab<<endl;
    return 0;


}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

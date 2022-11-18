// zadanie 3.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Podstaw pod rownanie dowolne liczby a b i c ;) ax^2 + bx + c = 0" << endl <<endl;

    cout << "Podaj liczbe a : ";
    cin >> a;
    cout << "Podaj liczbe b : ";
    cin >> b;
    cout << "Podaj liczbe c : ";
    cin >> c;

    cout << endl << "Twoje rownanie bedzie mialo postac: " << endl;
    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl; ////^do potegi

    double delta;
    delta = (b * b) - (4 * a * c);
    cout << "Delta wynosi: " << delta << endl;

    if 
        (delta < 0) {
        cout << "Rownanie nie ma pierwiastkow.";
        return 0;
    }
    else if 
        (delta == 0) {
        cout << "Rownanie ma jeden pierwiastek" << endl << "X0=";
        double x0;

        x0 = (-b / (2 * a));
        cout << x0;
        return 0;
    }
    else if (delta > 0) {
        cout << "Rownanie ma dwa pierwiastki" << endl << "X1=";
        double x1;


        double sdelta;


        sdelta = sqrt(delta);
        x1 = (-b - sdelta) / (2 * a);
        cout << x1 << endl;
        cout << "X2=";
        double x2;
        x2 = (-b + sdelta) / (2 * a);
        cout << x2 << endl;
        return 0;
    }

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

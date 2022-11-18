// zadanie 3.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
using namespace std;


int main()
{
    cout << "Napisz znaki z klawiatury, jesli napiszesz (t) program zakonczy sie  ";
    char a = 0;

    while (a != 't') {
        
        
        cin >> a;
      
        
        
        if (a != 't') {
          
            
            cout << "podales " << a << endl;
            continue;
       
        
        }
       

        else {
            cout << "Podales znak t i program sie zakonczyl";
            return 0;
        }
    }

    return 0;
}





// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

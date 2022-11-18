// Zjazd 3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	float suma, roznica, iloczyn, iloraz;
	float x, y;
		
	
	cout << "Podaj dwie liczby x i y ";
	cin >> x >> y; //podano liczby
	cout << endl<<endl;
	 suma = x + y; 
	cout << "Suma liczb x i y wynosi  " <<  suma;
	cout << endl<<endl;
	 roznica = x - y;
	cout << "Roznica liczb x i y wynosi  " <<  roznica;
	cout << endl << endl;
	 iloczyn = x * y;
	cout << "Iloczyn liczb x i y wynosi  " <<  iloczyn;
	cout << endl<<endl;
	 iloraz = x / y;
	cout << "Iloraz liczb x i y wynosi  " <<  iloraz;
	cout << endl<<endl;

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

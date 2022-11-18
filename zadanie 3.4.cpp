// zadanie 3.4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie progra


#include <iostream>
using namespace std;



int silnia(int n) {
    int f;

    for (f = 1; n > 1; n--)
        f *= n;

    return f;
}

int ncr(int n, int r) {
    return silnia(n) / (silnia(n - r) * silnia(r));
}

int main() {
    int n, i, j;

    n = 8; ////Wpisz tutaj liczbe wierszy jaka ma miec trojkat pascala

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n - i; j++)
            printf("  ");

        for (j = 0; j <= i; j++)
            printf(" %3d", ncr(i, j));

        printf("\n");
    }
    return 0;
}
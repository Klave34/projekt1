#include <iostream>

using namespace std;

int silnia(int n){
	int sil = 0;
	for(int i = 1; i <= n; i++){
		sil *= i;	
	}
	return sil;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "1. Silnia" << endl;
	cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0){
		cout << silnia(a) << endl;
	}
    return 0;
}

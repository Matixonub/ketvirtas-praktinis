#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	double kaina, skaicius, suma=0, bilietu=0;
	ifstream fd("duom.txt");
	for (int i = 1; i <= 4; i++) {
		fd >> kaina >> skaicius;
		cout << skaicius << endl;
		bilietu +=skaicius;
		suma +=(kaina * skaicius);
	}
	cout <<fixed<< setprecision(2) << "Is viso buvo nupirkta " << bilietu << " bilietu, kuriu pelnas yra - " << suma << endl;
}
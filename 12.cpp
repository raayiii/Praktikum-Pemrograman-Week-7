#include<iostream>
using namespace std;

double fahrenheit (double c) {
	return (c*9/5)+32;
}

double kelvin (double c) {
	return c+273.15;
}

int main (){
	double c;
	int n;
	
	cout << "Masukkan jumlah data suhu: ";
	cin >> n;
	
	
	for (int i = 0; i < n; i++) {
	cout << endl << "Masukkan suhu ke- " <<;
	cin >> c;
	
	
	
	
	
	
	
	
	
	cout << "Celsius: " << c << endl;
	cout << "Fahrenheit: " << fahrenheit(c) << endl;
	cout << "Kelvin: " << kelvin(c) << endl;
}

	return 0;
}

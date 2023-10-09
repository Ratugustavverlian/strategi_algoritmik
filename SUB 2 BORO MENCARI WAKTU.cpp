#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
	cout << "Ayo, coba kita menghitung waktu yang diperlukan Boro untuk mencapai jarak horizontal terjauh\n";
    double waktu;
    int v;
    int s;
    double srad;

	cout << "Pertama kamu masukkan sudut penerbangan Boro : ";
    cin >> s;
    cout << "Lalu, kamu masukkan kecepatan Boro : ";
    cin >> v;
    srad = s * (3.14 / 180);
    waktu = 2 * (v * srad) / 10;
    cout << "Jadi, waktu yang diperlukan adalah : ";
    cout << waktu << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

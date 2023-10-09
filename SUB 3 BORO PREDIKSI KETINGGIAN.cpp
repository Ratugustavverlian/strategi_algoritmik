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
	cout << "Yuk, kita menghitung prediksi ketinggian yang dicapai Boro\n";
	cout << "==========================================================\n";
    double ketinggian;
    int s;
    int v;
    int status;
    double sinA;

	cout << "Pertama, kamu masukkan terlebih dahulu sudut peluncuran Boro : ";
    cin >> s;
    cout << "Yang kedua, kamu masukkan kecepatan Boro : ";
    cin >> v;
    cout << "Terakhir, kamu masukkan tinggi pohon tempat Boro bersarang : ";
    cin >> ketinggian;
    sinA = sin((double) (s * 22) / 7 / 180);
    ketinggian = pow(v, 2) * pow(sinA, 2) / 20;
    cout << "Jadi, hasilnya adalah "; 
    cout << ketinggian << endl;
    cout << "Terima kasih sudah membantu Boro ya! ";
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

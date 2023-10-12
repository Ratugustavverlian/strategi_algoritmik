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
	cout << "Yuk, kita cari prediksi ketinggian yang dicapai Boro dan temannya\n";
	cout << "===================================================================\n";
    string n;
    int s;
    int v;
    double t;
    int status;
    double sinA;

	cout << "Pertama, masukkan jumlah burung yang akan ikut peluncuran : ";
    cin >> n;
    cout << "Kedua, masukkan sudut peluncurannya ya : ";
    cin >> s;
    cout << "Ketiga, masukkan kecepatan awal burung saat meluncur : ";
    cin >> v;
    cout << "Terakhir, masukkan tinggi pohon itu : ";
    cin >> t;
    sinA = sin((double) (s * 22) / 7 / 180);
    t = pow(v, 2) * pow(sinA, 2) / 20;
    cout << "Jadi hasilnya adalah : ";
    cout << t << endl;
    cout << "Terima kasih sudah membantu ya! ";
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

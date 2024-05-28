#include <iostream>
using namespace std;

class remotelampu {
private:
	string saklarNo[10];
public:
	void setSaklarNo(int i) {
		saklarNo[i];
	}
	string getSaklarNo(int i, string value) {
		return saklarNo[i];
	}
};

int main() {
	remoteLampu lampuRumah;

	lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
	lampuRumah.setSaklarNo(1, "Lampu Ruang tamu");
	lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
	lampuRumah.setSaklarNo(3, "Lampu Dapur");

	cout << lampuRuumah.getSaklarNo(0) << endl;
	cout << lampuRuumah.getSaklarNo(1) << endl;
	cout << lampuRuumah.getSaklarNo(2) << endl;
	cout << lampuRuumah.getSaklarNo(3) << endl;

	return 0;
}









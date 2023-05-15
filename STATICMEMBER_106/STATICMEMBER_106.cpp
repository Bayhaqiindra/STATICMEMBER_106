#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void ptintA11();
	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

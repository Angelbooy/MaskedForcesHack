#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main() {
	SetConsoleTitle(".:		Masked Forces Hack Made By Zenax @ V3rmillion		:.");
	system("color B5");
	int ammo = 500;
	HWND hwnd = FindWindowA(NULL, "Masked Forces"); // Find window
	if (hwnd == NULL) {
		system("color 84");
		cout << "Cannot find window name" << endl;
		Sleep(3000);
		exit(-1);
	}
	else {
		DWORD procID;
		GetWindowThreadProcessId(hwnd, &procID);
		HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);

		if (procID == NULL){
			system("color 84");
			cout << "Cannot find process ID" << endl;
			Sleep(3000);
			exit(-1);
		}
		else {
			system("color B5");
			string askammo;
			cout << "		Hack made by Zenax @ v3rm.. Discord : Aiden#6538		" << endl;
			cout << "AMMO = 1 SPEED = 2 (TYPE 1 OR 2)" << endl;
			cin >> askammo;
			if (askammo == "1") {
				WriteProcessMemory(handle, (LPVOID)0x1530569C , &ammo, sizeof(ammo), 0);
				cout << "Ammo Given" << endl;
				system("PAUSE");
			}
			else if (askammo == "2") {
				cout << "Health given" << endl;
			}
			else if (askammo == "3") {
				WriteProcessMemory(handle, (LPVOID)0x16BC58DC, &ammo, sizeof(ammo), 0);
				cout << "Health and ammo given!" << "Have fun!" << endl;
			}

			else {
				system("color 84");
				cout << "Unknown char/int used. Please restart program to use the cheat." << endl;
				system("PAUSE");
			}
		}
	}
	return 0;
}
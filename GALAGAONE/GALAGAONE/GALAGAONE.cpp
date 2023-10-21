#include <iostream> 
#include <windows.h>
#include <string> 

using namespace std;


void game() {
	int V = 39, S = 168;
	int x = 70, y = 2;
	int x1 = rand() % 119 - 3, y1 = 36;
	int prog = 0;
	int aster = 0;
	int gameover = 0;

	while (prog != 1)
	{
		if (GetAsyncKeyState(VK_LEFT)) {
			x -= 3;
		}
		else if (GetAsyncKeyState(VK_RIGHT)) {
			x += 3;
		}
		else if (GetAsyncKeyState(VK_DOWN)) {
			y += 3;
		}
		else if (GetAsyncKeyState(VK_UP)) {
			y -= 3;
		}
		system("cls");
		std::cout << "________________________________________________________________________________________________________________________________________________________________________";
		for (int i = 0; i < V; i++) {
			if (i == y) {
				for (int re = 0; re < S; re++) {
					if (re == x) {
						std::cout << "|----|";
					}
					else {
						std::cout << " ";
					}
				}
				std::cout << "\n";
				for (int re = 0; re < S; re++) {
					if (re == x) {
						std::cout << "\\    /";
					}
					else {
						std::cout << " ";
					}
				}
				std::cout << "\n";
				for (int re = 0; re < S; re++) {
					if (re == x) {
						std::cout << "\\    /";
					}
					else {
						std::cout << " ";
					}
				}
				std::cout << "\n";
				for (int re = 0; re < S; re++) {
					if (re == x + 1) {
						std::cout << "\\  /";
					}
					else {
						std::cout << " ";
					}
				}
				std::cout << "\n";
				for (int re = 0; re < S; re++) {
					if (re == x + 2) {
						std::cout << "\\/";
					}
					else {
						std::cout << " ";
					}
				}
			}

			else if (i == y1) {
				if (y1 - 1 == y) {
					if (x1 == x || x1 == x + 1 || x1 == x + 2 || x1 == x + 3 || x1 == x + 4 || x1 == x + 5 || x1 == x + 6 || x1 == x + 7 || x1 == x + 8 || x1 == x + 10 || x1 == x || x1 == x - 1 || x1 == x - 2 || x1 == x - 3 || x1 == x - 4 || x1 == x - 5 || x1 == x - 6 || x1 == x - 7 || x1 == x - 8 || x1 == x - 10) {
						aster += 1;
						Beep(1000, 500);
						x1 = rand() % 119 - 3;
						y1 = 36;
					}
					else {
						if (gameover <= 3) {
							gameover++;
							x1 = rand() % 119 - 3;
							y1 = 36;
						}
						else {
							prog = 1;
							i = V;
						}
					}
				}
				else {
					for (int re = 0; re < S; re++) {
						if (re == x1) {
							std::cout << "(+++)";
						}
						else {
							std::cout << " ";
						}
					}
				}
				y1 -= 1;
			}
			else {
				std::cout << "\n";
			}
		}
		std::cout << "________________________________________________________________________________________________________________________________________________________________________";
		std::cout << "\n\n очков - " << aster;
		std::cout << "\n пропущеных - " << gameover;
	}
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nGAME OVER\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nсчёт - " << aster << "\n\nначать заново?(введите 1 для подтверждения) -";
}


int main() {
	setlocale(LC_ALL, "RUS");
	game();
	system("cls");
	int endwhat;
	cin >> endwhat;
	if (endwhat == 1) {
		game();
	}
	else {
		system("cls");
		Beep(330, 100); Sleep(100);
		Beep(330, 100); Sleep(300);
		Beep(330, 100); Sleep(300);
		Beep(262, 100); Sleep(100);
		Beep(330, 100); Sleep(300);
		Beep(392, 100); Sleep(700);
		Beep(196, 100); Sleep(700);
		Beep(262, 300); Sleep(300);
		Beep(196, 300); Sleep(300);
		Beep(164, 300); Sleep(300);
		Beep(220, 300); Sleep(100);
		Beep(246, 100); Sleep(300);
		Beep(233, 200);
		Beep(220, 100); Sleep(300);
		Beep(196, 100); Sleep(150);
		Beep(330, 100); Sleep(150);
		Beep(392, 100); Sleep(150);
		Beep(440, 100); Sleep(300);
		Beep(349, 100); Sleep(100);
		Beep(392, 100); Sleep(300);
		Beep(330, 100); Sleep(300);
		Beep(262, 100); Sleep(100);
		Beep(294, 100); Sleep(100);
		Beep(247, 100); Sleep(500);
		Beep(262, 300); Sleep(300);
		Beep(196, 300); Sleep(300);
		Beep(164, 300); Sleep(300);
		Beep(220, 300); Sleep(100);
		Beep(246, 100); Sleep(300);
		Beep(233, 200);
		Beep(220, 100); Sleep(300);
		Beep(196, 100); Sleep(150);
		Beep(330, 100); Sleep(150);
		Beep(392, 100); Sleep(150);
		Beep(440, 100); Sleep(300);
		Beep(349, 100); Sleep(100);
		Beep(392, 100); Sleep(300);
		Beep(330, 100); Sleep(300);
		Beep(262, 100); Sleep(100);
		Beep(294, 100); Sleep(100);
		Beep(247, 100); Sleep(900);
		Beep(392, 100); Sleep(100);
		Beep(370, 100); Sleep(100);
		Beep(349, 100); Sleep(100);
		Beep(311, 100); Sleep(300);
		Beep(330, 100); Sleep(300);
		Beep(207, 100); Sleep(100);
		Beep(220, 100); Sleep(100);
		Beep(262, 100); Sleep(300);
		Beep(220, 100); Sleep(100);
		Beep(262, 100); Sleep(100);
		Beep(294, 100); Sleep(500);
		Beep(392, 100); Sleep(100);
		Beep(370, 100); Sleep(100);
		Beep(349, 100); Sleep(100);
		Beep(311, 100); Sleep(300);
		Beep(330, 100); Sleep(300);
		Beep(523, 100); Sleep(300);
		Beep(523, 100); Sleep(100);
		Beep(523, 100); Sleep(1100);
		Beep(392, 100); Sleep(100);
		Beep(370, 100); Sleep(100);
		Beep(349, 100); Sleep(100);
		Beep(311, 100); Sleep(300);
		Beep(330, 100); Sleep(300);
		Beep(207, 100); Sleep(100);
		Beep(220, 100); Sleep(100);
		Beep(262, 100); Sleep(300);
		Beep(220, 100); Sleep(100);
		Beep(262, 100); Sleep(100);
		Beep(294, 100); Sleep(500);
		Beep(311, 300); Sleep(300);
		Beep(296, 300); Sleep(300);
		Beep(262, 300); Sleep(1300);
		Beep(262, 100); Sleep(100);
		Beep(262, 100); Sleep(300);
		Beep(262, 100); Sleep(300);
		Beep(262, 100); Sleep(100);
		Beep(294, 100); Sleep(300);
		Beep(330, 200); Sleep(50);
		Beep(262, 200); Sleep(50);
		Beep(220, 200); Sleep(50);
		Beep(196, 100); Sleep(700);
		Beep(262, 100); Sleep(100);
		Beep(262, 100); Sleep(300);
		Beep(262, 100); Sleep(300);
		Beep(262, 100); Sleep(100);
		Beep(294, 100); Sleep(100);
		Beep(330, 100); Sleep(700);
		Beep(440, 100); Sleep(300);
		Beep(392, 100); Sleep(500);
		Beep(262, 100); Sleep(100);
		Beep(262, 100); Sleep(300);
		Beep(262, 100); Sleep(300);
		Beep(262, 100); Sleep(100);
		Beep(294, 100); Sleep(300);
		Beep(330, 200); Sleep(50);
		Beep(262, 200); Sleep(50);
		Beep(220, 200); Sleep(50);
		Beep(196, 100); Sleep(700);
		/*Часть номер два*/
		Beep(330, 100); Sleep(100);
		Beep(330, 100); Sleep(300);
		Beep(330, 100); Sleep(300);
		Beep(262, 100); Sleep(100);
		Beep(330, 100); Sleep(300);
		Beep(392, 100); Sleep(700);
		Beep(196, 100); Sleep(700);
		Beep(196, 100); Sleep(125);
		Beep(262, 100); Sleep(125);
		Beep(330, 100); Sleep(125);
		Beep(392, 100); Sleep(125);
		Beep(523, 100); Sleep(125);
		Beep(660, 100); Sleep(125);
		Beep(784, 100); Sleep(575);
		Beep(660, 100); Sleep(575);
		Beep(207, 100); Sleep(125);
		Beep(262, 100); Sleep(125);
		Beep(311, 100); Sleep(125);
		Beep(415, 100); Sleep(125);
		Beep(523, 100); Sleep(125);
		Beep(622, 100); Sleep(125);
		Beep(830, 100); Sleep(575);
		Beep(622, 100); Sleep(575);
		Beep(233, 100); Sleep(125);
		Beep(294, 100); Sleep(125);
		Beep(349, 100); Sleep(125);
		Beep(466, 100); Sleep(125);
		Beep(587, 100); Sleep(125);
		Beep(698, 100); Sleep(125);
		Beep(932, 100); Sleep(575);
		Beep(932, 100); Sleep(125);
		Beep(932, 100); Sleep(125);
		Beep(932, 100); Sleep(125);
		Beep(1046, 675);
	}
	
	return 0;
}


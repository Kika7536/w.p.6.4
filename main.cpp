#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int width, height;

	while (true) {
		cout << "Введите ширину и высоту рамки: ";
		
		cin >> width >> height;
		if (width < 2 || height < 2) {
			cout << "Ошибка! Минимальные рамеры высоты и ширины - 2. Повторите попытку" << endl << endl;
		}
		else {
			break;
		}
	}

	for (int i = 0; i < height; i++) {
		if (i == 0 || i == height -1) {
			for (int i = 0; i < width; i ++) {
				if (i == 0 || i == width - 1) {
					cout << "|";
				}
				else {
					cout << "-";
				}
			}
			cout << endl;
		}
		else {
			for (int i = 0; i < width; i++) {
				if (i == 0 || i == width - 1) {
					cout << "|";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;

		}
	}

}
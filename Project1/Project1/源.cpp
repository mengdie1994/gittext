#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int main(void) {
	int count = 0;
	for (int i = 0; i < 24; i++) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k < 60; k++) {
				count++;
				cout << i << ":" << j << ":" << k
					<< "����ĵ�" << count << "��" << endl;
				Sleep(1000);
			}
		}
	}
	cout << "һ������" << count << "��" << endl;
	system("pause");
	return 0;
}
/*
#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore(); // ���Ե�����T��Ļ��з�

	for (int t = 0; t < T; t++) {
		int a[5][5];
		int lineMaxIndex[5] = { 0 };
		int columnMinIndex[5] = { 100 };
		
		//��ȡ����
		for (int i = 0; i < 5; i++) {	
			for (int j = 0; j < 5; j++) {
				cin >> a[i][j];
			}
		}

		cout << "case #" << t << ":" << endl;
		bool hasSaddlePoint = 0;

		for (int i = 0; i < 5; i++) {		
			for (int j = 0; j < 5; j++) {
				bool isRowMax = true;
				bool isColumnMin = true;

				//����Ƿ��������ֵ
				for (int k = 0; k < 5; k++) {
					if (a[i][k] > a[i][j]) {
						isRowMax = false;
						break;
					}
				}

				//����Ƿ�������Сֵ
				if (isRowMax) {
					for (int k = 0; k < 5; k++) {
						if (a[k][j] < a[i][j]) {
							isColumnMin = false;
							break;
						}
					}
				}
				//���Ұ���
				if (isRowMax && isColumnMin) {
					cout << i << " " << j << endl;
					hasSaddlePoint = 1;
				}
			}
		}
		if (hasSaddlePoint == 0) {
			cout << "-1 -1" << endl;
		}
	}
}
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

//�Լ�ֵ�ԱȽϣ�
//���ִ���������ǰ�棻
//����С����ǰ�档
int compare(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second != b.second) {
		return a.second > b.second;
	}
	return a.first < b.first;
}

int main() {
	int T;
	cin >> T;
	cin.ignore();

	for (int t = 0; t < T; t++) {
		int n;
		cin >> n;
		cin.ignore();

		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		//ǰ��Ϊ��������Ϊֵ
		unordered_map<int, int> count;
		for (int num : arr) {
			//�����ֶ�Ӧ�ļ�����һ����û���򴴽�һ��
			count[num]++;
		}

		//��һ��Ϊ���ִ�С���ڶ���Ϊ���ִ���
		vector<pair<int, int>> pairs;
		for (const auto& entry : count) {
			//��pair��ʽ�洢��ֵ��
			pairs.emplace_back(entry.first, entry.second);
		}

		sort(pairs.begin(), pairs.end(), compare);

		cout << "case #" << t << ":" << endl;
		bool first = true;
		for (const auto& pair : pairs) {
			for (int i = 0; i < pair.second; i++) {
				if (!first) {
					cout << " ";
				}
				cout << pair.first;
				first = false;
			}
		}
		cout << endl;
	}
	return 0;
}

*/
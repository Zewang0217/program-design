/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

// ���ַ���ת��ΪСд�ĺ���
string toLowerCase(const string& str) {
    string lowerStr = str;
    // ʹ��transform�������ַ����е�ÿ���ַ�ת��ΪСд
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), [](unsigned char c) {
        return tolower(c);
        });
    return lowerStr;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // ���Ե�����T��Ļ��з�

    for (int t = 0; t < T; t++) {
        int n;
        cin >> n;
        cin.ignore(); // ���Ե�����n��Ļ��з�

        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            getline(cin, v[i]); // ʹ��getline��ȡ�����ո�����׼�¼
        }

        // �����׼�¼������������ʱ���Դ�Сд
        sort(v.begin(), v.end(), [](const string& a, const string& b) {
            return toLowerCase(a) < toLowerCase(b);
            });

        // ���������
        cout << "case #" << t << ":" << endl;
        // ����ź�������׼�¼
        for (const auto& str : v) {
            cout << str << endl;
        }
    }
    return 0;
}

*/
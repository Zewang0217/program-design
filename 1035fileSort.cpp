/*
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct File {
    string date;
    string time;
    long long size;
    string name;
    string datetime;
};

int main() {
    int n;
    bool firstCase = true;
    while (cin >> n) {
        if (n == 0) break;
        vector<File> files;
        files.resize(n);
        for (int i = 0; i < n; i++) {
            // ע�⣺�ļ����в������ո����Կ���ֱ���� >> ��ȡ
            cin >> files[i].date >> files[i].time >> files[i].size >> files[i].name;
            files[i].datetime = files[i].date + " " + files[i].time;
        }

        // ��ȡ�����У���ʱ����������ǰ�л��в������ȶ�ȡ����
        string dummy;
        getline(cin, dummy);
        string command;
        getline(cin, command);

        // ��ȡ�ֶΣ������ʽΪ "LIST /FIELD"��
        string field = command.substr(6); // ��λ��6��ʼ�������� "LIST /"
        // ȥ�����ܵĶ���ո�
        while (!field.empty() && field[0] == ' ') {
            field.erase(0, 1);
        }

        // ���������ֶν���������������ͬ�Ĵ�С��ʱ�䣬�����ļ�����������
        if (field == "NAME") {
            sort(files.begin(), files.end(), [](const File& a, const File& b) {
                return a.name < b.name;
                });
        }
        else if (field == "SIZE") {
            sort(files.begin(), files.end(), [](const File& a, const File& b) {
                if (a.size == b.size)
                    return a.name < b.name;
                return a.size < b.size;
                });
        }
        else if (field == "TIME") {
            sort(files.begin(), files.end(), [](const File& a, const File& b) {
                if (a.datetime == b.datetime)
                    return a.name < b.name;
                return a.datetime < b.datetime;
                });
        }

        // ÿ������֮���һ�����У������һ���û�п��У�
        if (!firstCase) {
            cout << "\n";
        }
        firstCase = false;

        // ��Ҫ���ʽ����������ڡ�ʱ�䡢�ļ���С�����16���Ҷ��룩���ļ���
        for (const auto& f : files) {
            cout << f.date << " " << f.time << " "
                << setw(16) << right << f.size << " " << f.name << "\n";
        }
    }
    return 0;
}
*/
#include <bits/stdc++.h>
#include <windows.h>
#include <unistd.h>
#define ll long long
#define dou double
const int inf = INT_MAX;
const ll linf = LLONG_MAX;
using namespace std;

int main() {
	freopen("..\\Data\\s.txt", "r", stdin);
	string s;
	cin >> s;
	system("cd ");
	system("del \"..\\Code\\code.exe\"");
	system("del \"..\\Code\\aa.txt\"");
	system("cls");
	cout << "Compiling" << "\n";
	string str = "g++ ..\\Code\\code.cpp -o ..\\Code\\aa.txt " + s;
	system(str.c_str());
	if (access("..\\Code\\aa.txt", F_OK)) {
		cout << "Compile Error" << "\n";
		exit(0);
	}
	str = "g++ ..\\Code\\code.cpp -o ..\\Code\\code.exe " + s;
	system(str.c_str());
	ifstream sab;
	sab.open("..\\Data\\p.txt");
	string name;
	sab >> name;
	sab.close();
	sab.open("..\\Data\\d.txt");
	int num;
	sab >> num;
	sab.close();
//	cout << num;
	sab.open("..\\Data\\t.txt");
	int timm;
	sab >> timm;
//	cout << timm << endl;
	stringstream sio;
	//ios::ate|ios::out
	ofstream abab;
	string wn = name + ".in";
	string papa = "..\\Code\\" + wn;
	abab.open(papa.c_str(), ios::ate|ios::out);
	cout << "Judging" << "\n";
	for (int i = 1; i <= num; i++) {
		string sss;
		sio << num;
		sio >> sss;
		string stt = "..\\Data\\" + sss + ".in";
		ifstream abbb;
		abbb.open(stt.c_str());
		ofstream baaa;
		baaa.open(papa.c_str());
		baaa << abbb.rdbuf();
		abbb.close();
		baaa.close();
		stt = "..\\Data\\" + sss + ".out";
		ifstream aaa;
		aaa.open(stt.c_str());
		ll tim = time(0);
		system("cd .. & cd code & code.exe");
		ll tim2 = time(0);
		cout << "#" << i << " ";
		if (tim2 - tim > timm) {
			cout << "Time Limit Exceeded" << "\n";
			continue;
		}
		wn = name + ".out";
		papa = "..\\Code\\" + wn;
		ifstream bbb;
		bbb.open(papa.c_str());
		string sts;
		bool flag = true;
		while (bbb >> sts) {
			string sta;
			aaa >> sta;
			if (sts != sta) {
				cout << "Wrong Answer" << "\n";
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "Accepted" << "\n";
		}
	}
	return 0;
}

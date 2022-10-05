#include <iostream>
#include <map>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		map <int, int> m;
		string s;
		for (int i = 0; i < n; ++i){
			cin >> s;
			int len = s.size();
			if (m.count(len)){
				++m[len];
			}
			else {
				m[len] = 1;
			}
		}
		for (auto it = m.begin(); it != m.end(); ++it) {
			cout << it->first << " : " << it->second << endl;
		}
		cout << endl;
	}
}
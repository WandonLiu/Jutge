#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
	int n;
	cin >> n;
	while (n > 0){
		map<string, int> m;
		string s;
		for (int i = 0; i < n; ++i){
			cin >> s;
			if (m.count(s)) ++m[s];
			else m[s] = 1; 
		}
		auto max_it = m.begin();
		int max_num = m.begin()->second;
		for (auto it = m.begin(); it != m.end(); ++it){
			if (it->second > max_num){
				max_it = it;
				max_num = it->second;
			}
			else if (it->second == max_num){
				if (it->first > max_it->first){
					max_it = it;
				}
			}
		}
		cout << max_it->first << endl;
		cin >> n;
	}
}

#include <iostream>
#include <vector>
using namespace std;

struct Province {
    string name;
    string capital;
    int population;
    int area;
    double gdp;
};

struct Country {
    string name;
    string capital;
	vector<Province> provs;
};

typedef vector<Country> Countries;

double gdp(const Countries& p, char c, double d){
	double res = 0;
	for (int i = 0; i < p.size(); ++i){
		Country curr = p[i];
		if (curr.name[0] == c){
			for (int j = 0; j < curr.provs.size(); ++j){
				Province prov = curr.provs[j];
				double density = double(prov.population)/double(prov.area);
				if (density > d) res += prov.gdp;
			}
		}
	}
	return res;
}
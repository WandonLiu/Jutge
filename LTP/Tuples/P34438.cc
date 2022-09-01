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

int population(const Countries& p, double x){
	int res = 0;
    for (int i = 0; i < p.size(); ++i){
        int num_prov = 0, sum_pop = 0;
        Country curr = p[i];
        for (int j = 0; j < curr.provs.size(); ++j){
            if (curr.provs[j].gdp <= x) ++num_prov;
            sum_pop += curr.provs[j].population;
        }
        if (num_prov >= 2) res += sum_pop;
    }
    return res;
}
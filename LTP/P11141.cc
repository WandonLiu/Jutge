#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int idn;
    string name;
    double mark;        // The mark is a value between 0 and 10, or -1 that represents NP
    bool repeater;
};

void information(const vector<Student>& stu, double& min, double& max, double& avg){
	int i = 0, size = stu.size();
	double c = 0;
	while(i < size and (stu[i].repeater or stu[i].mark == -1)){
		++i;
	}
	if (i == size) {
		min = -1;
		max = -1;
		avg = -1;
		return;
	}
	else {
		min = stu[i].mark;
		max = stu[i].mark;
		avg = stu[i].mark;
		++c;
	}
	for (++i; i < size; ++i){
		if (not stu[i].repeater and stu[i].mark > -1){
			if (min > stu[i].mark) min = stu[i].mark;
			if (max < stu[i].mark) max = stu[i].mark;
			avg += stu[i].mark;
			++c;
		}
	}
	avg /= c;
}

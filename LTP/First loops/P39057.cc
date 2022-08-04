#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed);
    cout.precision(6);
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; ++i){
    	string s;
    	cin >> s;
    	if (s == "rectangle"){
    		double side, width;
    		cin >> side >> width;
    		cout << side*width;
    	}
    	else {
    		double radius;
    		cin >> radius;
    		cout << radius*radius*M_PI;
    	}
    	cout << endl;
    }
}
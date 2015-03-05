#include "Point2D.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[]) {
	Point2D<int> ipa(1, 3), ipb(4,4);
	Point2D<double> rp(1.4, 3.7);
	Point2D<string> sp("Hello", "World");
	
	vector <Point2D < int > > ipvect;
	ipvect.push_back(ipa);
	ipvect.push_back(ipb);
	ipvect.push_back(Point2D<int>(3, 5));
	
	for (const Point2D<int> &p : ipvect) {
		cout << p << endl;
	}
	
	sort(ipvect.begin(), ipvect.end());
	
	cout << ipa << endl;
	cout << rp << endl;
	cout << sp << endl;
	cout << (ipa < ipb) << endl;
	
	return 0;
}

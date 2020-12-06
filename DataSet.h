#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

class DataSet {
public:

	DataSet();

	DataSet(int cap);

	int size();

	int maxNum();

	int minNum();

	double avgNum();

	void printSet();

	void printInfo();

private:
	vector<int> data;
	int cap;
	vector<int>::iterator iter;
	int max;
	int min;
	double avg;
};
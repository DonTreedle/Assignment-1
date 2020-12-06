#include <cstdlib>
#include "DataSet.h"

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))

void print(DataSet *anArray[]) {
	for (int i = 0; i < sizeof(anArray); i++) {
		std::cout << "Set" << i + 1 << "\n";
		anArray[i]->printInfo();
		std::cout << endl;
	}
}
void totalAvg(vector<DataSet> aVector) {
	double avg = 0;
	int size = (aVector.size());
	for (int i = 0; i < size; i++) {
		avg += aVector[i].avgNum();
	}
	std::cout << "\nTotal Average: " << avg / size << endl;
}
int main() {
	DataSet *total[] = {new DataSet(10), new DataSet(100), new DataSet(1000), new DataSet(10000)};
	vector<DataSet> v(total, total + 4);
	print(total);
	totalAvg(v);
	return 0;
}
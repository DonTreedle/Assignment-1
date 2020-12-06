#include "DataSet.h"
#include <vector>
#include <time.h>

DataSet::DataSet() {
	DataSet::cap = 0;
	DataSet::max = 0;
	DataSet::min = 0;
	DataSet::avg = 0;
}

DataSet::DataSet(int cap) {
	DataSet::cap = 0;
	DataSet::max = 0;
	DataSet::min = 0;
	DataSet::avg = 0;
	this->cap = cap;
	srand(time(NULL));
	for (int i = 0; i < cap; i++) {
		data.push_back(rand() % 100 + 1);
	}
}

int DataSet::size() {
	return DataSet::cap;
}

int DataSet::maxNum() {
	for (int i = 0; i < cap; i++) {
		if (max == 0) {
			max = data[i];
		}
		else if (max < data[i]) {
			max = data[i];
		}
	}
	return max;
}

int DataSet::minNum() {
	for (int i = 0; i < cap; i++) {
		if (min == 0) {
			min = data[i];
		}
		else if (min > data[i]) {
			min = data[i];
		}
	}
	return min;
}

double DataSet::avgNum() {
	for (int i = 0; i < cap; i++) {
		avg += data[i];
	}
	return (avg / cap);
}

void DataSet::printSet() {
	for (int i = 0; i < cap; i++) {
		std::cout << data[i] << ", ";
	}
}

void DataSet::printInfo() {
	std::cout << size() << "\t" << minNum() << "\t" << maxNum() << "\t" << avgNum() << endl;
}

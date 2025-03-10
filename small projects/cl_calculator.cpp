#include <iostream>
#include <string>

using namespace std;

class clcalculator {

public:
	int total = 0;

	void add(int val) {
		total += val;
		cout << "the total after adding " << val << " is " << total;
	}

};

int main() {
	clcalculator calculator1;
	calculator1.add(10);


	system("pause>0");
	return(0);


}


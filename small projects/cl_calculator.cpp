#include <iostrem>
#include <string>

class clcalculator {

public :
	int total=0;

	int add(int val) {
		total += val;
		cout << "the total after adding" << val << "is" << total;
	}
};

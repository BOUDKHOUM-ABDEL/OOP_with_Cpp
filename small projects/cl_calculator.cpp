#include <iostream>
#include <string>

using namespace std;

class clcalculator {

public:
	int total = 0;

	void add(int val) {
		total += val;
		cout << "the total after adding " << val << " is " << total << endl;
	}

	void divide(int val) {
		if (val == 0) {
			cout << "division impossible" << endl;
		}
		else {
			total /= val;
		cout << "the total after dividing by " << val << " is " << total <<endl;
		}
		
	}
	void Mutiply(int val) {
		total *= val;
		cout << "the total after Multiplying by " << val << " is " << total << endl;
	}
};

int main() {
	clcalculator calculator1;
	calculator1.add(10);
	calculator1.divide(2);
	calculator1.Mutiply(2);




	system("pause>0");
	return(0);


}



#include <iostream>
#include <string>
using namespace std;

class  clsEmployee {
private:
	int _id;
	string _nom;
	string _prenom;
	string _phone;
	string _email;
	float _salary;
public:
	clsEmployee(int id, string nom, string prenom, string phone, string email , float salary) {
		_id = id;
		_nom = nom;
		_prenom = prenom;
		_phone = phone;
		_email = email;
		_salary = salary;
	}
	
	

}


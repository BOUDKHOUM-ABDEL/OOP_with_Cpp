
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

	string fullname() {
		return _nom + " " + _prenom;
	}
	
	void print() {
		cout << "_______________info______________" << endl;
		cout << "ID: " << _id << endl;
		cout << "Nom: " << _nom << endl;
		cout << "Prenom: " << _prenom << endl;
		cout << "fullname: " << fullname() << endl;
		cout << "Phone: " << _phone << endl;
		cout << "Email: " << _email << endl;
		cout << "Salary: " << _salary << "$" << endl;
		cout << "________________________________" << endl;
	}
	void Sendemail(string subject, string body) {
		cout << "the following message sent successfully to email : " << _email << endl;
		cout << "subject :" << subject << endl;
		cout << "body : " << body << endl;
		cout << endl;
	}

	void Sendsms(string sms) {
		cout << "the following message sent successfully :" << _phone << endl;
		cout << sms << endl;
		cout << endl;
	}
};




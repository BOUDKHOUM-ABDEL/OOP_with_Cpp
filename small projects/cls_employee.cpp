
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
int main() {
	clsEmployee emp1(1, "Doe", "John", "123456789", "john@hotmail.com", 500 );
	clsEmployee emp2(2, "sam", "bwen", "236858090", "sami@hotmail.com", 400);

	emp1.print();
	emp2.print();
	emp1.Sendemail("hi", "how are you?");
	emp1.Sendsms("how are you?");
	emp2.Sendemail("new job", "you have a new job tomorrow");

	system("pause");
	

}



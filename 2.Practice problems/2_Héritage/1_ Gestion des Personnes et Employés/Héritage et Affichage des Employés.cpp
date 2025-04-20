#include <iostream>
#include <string>
using namespace std;

class clsPerson {
private:
    int _id;
    string _nom;
    string _prenom;
    string _phone;
    string _email;
public:
    clsPerson(int id, string nom, string prenom, string phone, string email) {
        _id = id;
        _nom = nom;
        _prenom = prenom;
        _phone = phone;
        _email = email;
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

class clsEmployee : public clsPerson {
private:

    string _title;
    int _salary;
    string _departement;

public:

    clsEmployee(int id, string nom, string prenom, string phone, string email, string title, int salary, string departement)
        : clsPerson(id, nom, prenom, phone, email) {
        _title = title;
        _salary = salary;
        _departement = departement;
    }
};

int main() {
    clsPerson p1(1, "thuram", "Marcos", "123456789", "john@mail.com");
    clsPerson p2(1, "samya", "bwen", "236858090", "samia@mail.com");
    clsEmployee emp1( 4 , "amine", "modrid", "+23768499", "aminne@mail.com","job1", 300, "alxn");


    p1.print();
    p2.print();
    p1.Sendemail("hi", "how are you?");
    p1.Sendsms("how are you?");
    emp1.print();
    emp1.Sendemail("cccc", "cvcvcvcv");
    cin.get();
    return 0;
}

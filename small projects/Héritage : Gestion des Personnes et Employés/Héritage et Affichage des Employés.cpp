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

};

int main() {
    return 0;
}

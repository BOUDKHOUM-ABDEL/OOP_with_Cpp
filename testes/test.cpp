#include <iostream>
#include <string>

using namespace std;
class clsperson {

public:
    string firstname;
    string lastname;

    string Fullname() {
        return firstname + " " + lastname;
    }
};

int main()
{
    clsperson per1;
      per1.firstname="Ahmed";
      per1.lastname="Azizi";
      cout <<per1.Fullname()  <<endl;
 return (0);
 }

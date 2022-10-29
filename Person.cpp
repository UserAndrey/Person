#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Person {
 public:
  string name;
  string surname;
  short int weight, height;
  short int birth_year, birth_month,birth_day;
  void SetSalary(double salary)
   {this->salary=salary;
   }
  void Get_Info() {
   cout<<name<<" \t"<<surname<<" \t"<<birth_day<<"."<<birth_month<<"."<<birth_year<<" \t"<<height<<" \t"<<weight<<" \t"<<salary<<endl;
                  }
 private:
  double salary;
friend void SetSalary(Person &a);
  };


 int main (int argc, char* argv[])
 {setlocale(0,"rus");
  cout<<"   Name        Surname      Birth day       Height      Weight       Salary"<<endl; 
  Person One;
  One.name ="John";
  One.surname ="Петренко";
  One.SetSalary(12454.0);
  One.birth_year = 1976;
  One.birth_month = 9;
  One.birth_day = 10;
  One.height = 178;
  One.weight = 67;
  One.Get_Info();
  vector v ={3,3,5,7,2,8,4};
  Person Two;
  Two.name = "Nikolay";
  Two.surname = "Vasiliev";
  Two.birth_year = 1990;
  Two.birth_month = 8;
  Two.birth_day = 19;
  Two.SetSalary(3387.45);
  Two.height = 189;
  Two.weight = 80;
  Two.Get_Info();
}

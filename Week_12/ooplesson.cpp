#include <iostream>
using namespace std;

//1. Encapsulation
//2. Abstraction
//3. Inheritance
//4. Polymorphism

class AbstractEmployee{
public:
    virtual void Promotion() = 0; // Pure virtual function
};

class Employee{
private:
    string Name;
    string Company;
    int Age;

public:
    // Setter for Name
    void setName(string name) {
        Name = name;
    }

    // Getter for Name
    string getName() const {
        return Name;
    }

    // Setter for Company
    void setCompany(string company) {
        Company = company;
    }

    // Getter for Company
    string getCompany() const {
        return Company;
    }

    // Setter for Age
    void setAge(int age) {
        if (age >= 18) {
            Age = age;
        } else {
            cerr << "Invalid age. Age must be at least 18." << endl;
        }
    }

    // Getter for Age
    int getAge() const {
        return Age;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

        void Promotion(){
            if(age > 30){
                cout << Name << " can get a promotion." << endl;
            }
        }

    void IntroduceYourself(){
        cout << "My name is " << Name << endl;
        cout << "I work at " << Company << endl;
        cout << "I am " << Age << " years old." << endl;
    }
};
int main() {
    Employee employee1 = Employee("Dada", "PAU", 29);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Tayo", "CU", 45);
    employee2.IntroduceYourself();

    employee1.setAge(39);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old." << endl;
    cout << employee2.getName() << " is " << employee2.getAge() << " years old." << endl;

    employee.Promotion();
    
    return 0;
}
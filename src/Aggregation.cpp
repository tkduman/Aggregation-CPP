#include <iostream>
using namespace std;

class Address {
public:
	string city;
	string state;
	Address(string city, string state) {
		this->city=city;
		this->state=state;
	}
};

class Employee {
private:
	Address *address; // employee has a address
public:
	string name;
	int salary;
	Employee(string name, int salary, Address *address) {
		this->name = name;
		this->salary = salary;
		this->address = address;
	}

	void display() {
		cout << "Name: " << name << "\tSalary: " << salary
			 << "$\tCity: " << address->city
			 << "\tState: " << address->state << endl;
	}
};

int main() {
	Address a = Address ("Ankara", "Turkey");
	Employee e = Employee("Kaan", 10000, &a);
	e.display();
	return 0;
}

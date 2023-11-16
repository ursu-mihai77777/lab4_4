#include <iostream>
#include <string>
using namespace std;
class Driver {
public:
	string name;
	Driver() {}
	Driver(string name) {
		this->name = name;
	}
	string getName() {
		return this->name;
	}
};
class Car {
public:
	int age;
	Driver driver;
	Car(int age, const Driver& driver) {
		this->age = age;
		this->driver = driver;
	}
	int getAge() {
		return this->age;
	}
	Driver getDriver() {
		return this->driver;
	}
	void exchangeDriver(Car& otherCar)
	{
		swap(this->driver, otherCar.driver);
	}
};
int main() {


	Driver driver1("Ionel");
	Driver driver2("Maria");

	Car car1(23, driver1);
	Car car2(30, driver2);

	cout << "Car 1 driver: " << car1.getDriver().getName() << endl;
	cout << "Car 2 driver: " << car2.getDriver().getName() << endl;

	car1.exchangeDriver(car2);
	cout << "\nAfter exchaging drivers: \n";

	
	cout << "Car 1 driver: " << car1.getDriver().getName() << endl;
	cout << "Car 2 driver: " << car2.getDriver().getName() << endl;
	return 0;
}
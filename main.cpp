#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

class Person;
class Car {
private: 
	int actual = 100;
	int speed = 40;
public:
	friend class Person;
};

class Person {
public:
	void Destroy(Car& car) {
		car.actual -= 15;
		car.speed -= 3;
		cout << "Actual of car 2023: " << car.actual << " Car speed: " << car.speed << endl;
	}

	void Speed(Car& car) {
		car.actual += 15;
		car.speed += 60;
		cout << "Actual of 2024: " << car.actual << " Car speed: " << car.speed << endl;
	}
};

int main() {
	setlocale(LC_ALL, "RU");

	Car lamborghini;
	Person ElezthemDev;
	ElezthemDev.Destroy(lamborghini);
	ElezthemDev.Destroy(lamborghini);
	ElezthemDev.Destroy(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);
	ElezthemDev.Speed(lamborghini);

	return 0;
}
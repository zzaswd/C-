#include<iostream>

using namespace std;

class Animal {
private:
	string name;
	int age;
public:
	Animal(string name="", int age = 0) {
		this->name = name;
		this->age = age;
		cout << "Animal 생성\n";
	}
	void setName(string name){ this->name = name; }
	string getName() { return name; }
	void setAge(int age) { this->age = age; }
	int getAge() { return age; }
	friend void running(Animal* pAnimal);
	virtual void crying() = 0;
	~Animal() { cout << "Animal 소멸\n"; }
	Animal(const Animal& animal) {
		this->age = animal.age;
		this->name = animal.name;
	}
};


void running(Animal* pAnimal) {
	cout << pAnimal->name << "가 달린다" << endl;
}

void crying(Animal* pAnimal) {
	pAnimal->crying();
}

class Dog : public Animal {
	string bark;
public:
	Dog(string name="", int age=0, string bark="") :Animal(name, age) {
		this->bark = bark;
		cout << "Dog 생성\n";
	}
	virtual void crying() {
		cout << this->getName() << "는 " << bark << endl;
	}

	void setBark(string bark) { this->bark = bark; }
	string getBark() { return bark; }
	~Dog() { cout << "Dog 소멸\n"; }

	Dog(const Dog& dog) :Animal(dog) {
		this->bark = dog.bark;
	}
};

class Cat :public Animal {
	string bark;
public:
	Cat(string name="", int age=0, string bark="") :Animal(name, age) {
		this->bark = bark;
		cout << "Cat 생성\n";
	}
	virtual void crying() {
		cout << this->getName() << "는 " << bark<<endl;
	}
	void setBark(string bark) { this->bark = bark; }
	string getBark() { return bark; }
	~Cat() { cout << "Cat 소멸\n"; }

	Cat(const Cat& cat) :Animal(cat) {
		this->bark = cat.bark;
	}
};


int main() {
	cout << "--추상클래스와 파생 클래스 구현 --\n";
	Dog* dog = new Dog("강아지", 4, "멍멍");
	Cat* cat = new Cat("고양이", 2, "야옹");
	
	cout << "\n--매개변수의 다형성 구현--\n";
	crying(dog);
	crying(cat);
	running(dog);
	running(cat);
	cout << "\n--기본 복사생성자 직접 구현--\n";
	Dog copyDog(*dog);
	cout << copyDog.getName() << endl;
	cout << copyDog.getAge() << endl;
	cout << copyDog.getBark() << endl;
	cout << "\n--소멸자 실행--\n";
	delete dog;
	delete cat;
	return 0;
}
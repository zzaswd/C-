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
		cout << "Animal ����\n";
	}
	void setName(string name){ this->name = name; }
	string getName() { return name; }
	void setAge(int age) { this->age = age; }
	int getAge() { return age; }
	friend void running(Animal* pAnimal);
	virtual void crying() = 0;
	~Animal() { cout << "Animal �Ҹ�\n"; }
	Animal(const Animal& animal) {
		this->age = animal.age;
		this->name = animal.name;
	}
};


void running(Animal* pAnimal) {
	cout << pAnimal->name << "�� �޸���" << endl;
}

void crying(Animal* pAnimal) {
	pAnimal->crying();
}

class Dog : public Animal {
	string bark;
public:
	Dog(string name="", int age=0, string bark="") :Animal(name, age) {
		this->bark = bark;
		cout << "Dog ����\n";
	}
	virtual void crying() {
		cout << this->getName() << "�� " << bark << endl;
	}

	void setBark(string bark) { this->bark = bark; }
	string getBark() { return bark; }
	~Dog() { cout << "Dog �Ҹ�\n"; }

	Dog(const Dog& dog) :Animal(dog) {
		this->bark = dog.bark;
	}
};

class Cat :public Animal {
	string bark;
public:
	Cat(string name="", int age=0, string bark="") :Animal(name, age) {
		this->bark = bark;
		cout << "Cat ����\n";
	}
	virtual void crying() {
		cout << this->getName() << "�� " << bark<<endl;
	}
	void setBark(string bark) { this->bark = bark; }
	string getBark() { return bark; }
	~Cat() { cout << "Cat �Ҹ�\n"; }

	Cat(const Cat& cat) :Animal(cat) {
		this->bark = cat.bark;
	}
};


int main() {
	cout << "--�߻�Ŭ������ �Ļ� Ŭ���� ���� --\n";
	Dog* dog = new Dog("������", 4, "�۸�");
	Cat* cat = new Cat("�����", 2, "�߿�");
	
	cout << "\n--�Ű������� ������ ����--\n";
	crying(dog);
	crying(cat);
	running(dog);
	running(cat);
	cout << "\n--�⺻ ��������� ���� ����--\n";
	Dog copyDog(*dog);
	cout << copyDog.getName() << endl;
	cout << copyDog.getAge() << endl;
	cout << copyDog.getBark() << endl;
	cout << "\n--�Ҹ��� ����--\n";
	delete dog;
	delete cat;
	return 0;
}
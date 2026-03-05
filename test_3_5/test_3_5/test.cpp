#include<iostream>
#include<string>
using namespace std;

//函数重载
//class Person {
//public:
//	Person& operator+(Person& p) {
//		Person C;
//		C.A = this->A + p.A;
//		C.B = this->B + p.B;
//		return C;
//	}
//
//	Person& operator++(int num) {
//		num++;
//		return *this;
//	}
//
//	int A, B;
//	int *Age;
//};
//
//ostream& operator<<(ostream& cout, Person& p) {
//	cout << p.A <<" "<< p.B;
//	return cout;
//}
//
//void test01() {
//	Person p1;
//	p1.A = 10;
//	p1.B = 10;
//	Person p2;
//	p2.A = 20;
//	p2.B = 20;
//	Person p3 = p1 + p2;
//	cout << p1 << endl;
//	cout << p2 << endl;
//	cout << ++p3.A << endl;
//	cout << p3.A++ << endl;
//	cout << p3 << endl;
//}
//int main() {
//	test01();
//
//	return 0;
//}

//class Person {
//public:
//	Person(int age) {
//		Age = new int(age);
//	}
//
//	~Person() {
//		if (Age != NULL) {
//			delete Age;
//			Age = NULL;
//		}
//	}
//
//	Person& operator=(Person &p) {
//		if (Age != NULL) {
//			delete Age;
//			Age = NULL;
//		}
//		Age = new int(*p.Age);
//		return *this;
//	}
//
//	int* Age;
//};
//
//void test01() {
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//	p1 = p2 = p3;
//	cout << *p1.Age << endl;
//	cout << *p2.Age << endl;
//	cout << *p3.Age << endl;
//}
//
//int main() {
//	test01();
//
//	return 0;
//}

//class Person {
//public:
//	Person(string name, int age) {
//		Name = name;
//		Age = age;
//	}
//
//	bool operator==(Person& p) {
//		if (this->Name == p.Name && this->Age == p.Age) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//
//	string Name;
//	int Age;
//};
//
//void test01() {
//	Person p1("tom", 28);
//	Person p2("tom", 18);
//	if (p1 == p2) {
//		cout << "p1等于p2" << endl;
//	}
//	else {
//		cout << "p1不等于p2" << endl;
//	}
//}
//
//int main() {
//	test01();
//
//	return 0;
//}
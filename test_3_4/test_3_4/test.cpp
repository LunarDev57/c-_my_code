#include<iostream>
#include<string>
using namespace std;

//类和对象
//class Student {
//public:
//	string Name;
//	int Id;
//
//	void showstudent() {
//		cout << "姓名：" << Name << "   学号：" << Id << endl;
//	}
//
//	void setstudent(string name,int id) {
//		Name = name;
//		Id = id;
//	}
//};
//
//int main() {
//	class Student s1;
//	s1.setstudent("zhansgan", 01);
//	s1.showstudent();
//
//	return 0;
//}

//访问权限
//class Person {
//public:
//	string Name;
//protected:
//	string Car;
//private:
//	int Id;
//
//private:
//	void func() {
//		Name = "张三";
//		Car = "迈巴赫";
//		Id = 01;
//	}
//};
//
//int main() {
//	Person p1;
//	p1.Name = "李四";
//	//p1.Car = "红旗";//类外不可访问
//	//p1.Id = 02;
//	//p1.func();
//	return 0;
//}

//私有
//class Person {
//public:
//	void setPerson(string name,string idol) {
//		Name = name;
//		Idol = idol;
//	}
//
//	string getName() {
//		return Name;
//	}
//
//	int getAge() {
//		return Age;
//	}
//
//private:
//	string Name;//可读可写
//	int Age = 18;//只读
//	string Idol;//只写
//};
//
//int main() {
//	Person p1;
//	//p1.Name = "zhangsan";//不可访问
//	p1.setPerson("zhangsan","lisi");
//	cout << "姓名：" << p1.getName() << endl;
//	//p1.Age = 20;
//	cout << "年龄：" << p1.getAge() << endl;
//	//cout << p1.Idol << endl;
//
//	return 0;
//}

//设计立方体
//class Cube {
//public:
//	void setLWH(int l, int w, int h) {
//		L = l;
//		W = w;
//		H = h;
//	}
//
//	int V() {
//		return L * W * H;
//	}
//
//private:
//	int L, W, H;
//};
//int main() {
//	Cube c1;
//	c1.setLWH(10, 20, 30);
//	cout << "V:" << c1.V() << endl;
//
//	return 0;
//}

//点和圆的关系
//class Point {
//public:
//	void setX(int x) {
//		X = x;
//	}
//
//	void setY(int y) {
//		Y = y;
//	}
//
//	int getX() {
//		return X;
//	}
//
//	int getY() {
//		return Y;
//	}
//
//private:
//	int X;
//	int Y;
//};
//
//class Circle {
//public:
//	void setR(int r) {
//		R = r;
//	}
//
//	void setCenter(Point center) {
//		Center = center;
//	}
//
//	int getR() {
//		return R;
//	}
//
//	Point getCenter() {
//		return Center;
//	}
//
//private:
//	int R;
//	Point Center;
//};
//
//void isInCircle(Circle &c,Point &p) {
//	int distance =
//		(p.getX() - c.getCenter().getX()) * (p.getX() - c.getCenter().getX()) +
//		(p.getY() - c.getCenter().getY()) * (p.getY() - c.getCenter().getY());
//	int rdistance = c.getR() * c.getR();
//	if (distance > rdistance) {
//		cout << "点在圆外" << endl;
//	}
//	else if (distance < rdistance) {
//		cout << "点在圆内" << endl;
//	}
//	else {
//		cout << "点在圆上" << endl;
//	}
//}
//
//int main() {
//	Circle c;
//	c.setR(50);
//	Point center;
//	center.setX(0);
//	center.setY(0);
//	c.setCenter(center);
//	Point p;
//	p.setX(30);
//	p.setY(40);
//	isInCircle(c, p);
//
//	return 0;
//}

//this指针
//class Person {
//public:
//	Person(int age){
//		this->age = age;
//	}
//
//	Person& PersonAddPerson(Person& p) {
//		this->age += p.age;
//		return *this;
//	}
//
//	int age;
//};
//
//void test() {
//	Person p1(10);
//	Person p2(10);
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//	cout << p2.age << endl;
//}
//
//int main() {
//	test();
//
//	return 0;
//}

//const修饰成员函数
//mutable
//class Person {
//public:
//	void showPerson() const
//	{
//		this->A = 100;
//	}
//
//	mutable int A;
//	int B;
//};
//
//void test() {
//	const Person p;
//	p.A = 10;
//	//p.B = 10;
//
//}

//友元
//class Building;
//class goodGay {
//public:
//	goodGay();
//
//	void visit();
//	void visit2();
//
//	Building* b;
//};
//
//class Building {
//	//friend void goodGay(Building* building);
//	//friend class goodGay;
//	friend void goodGay::visit();
//
//public:
//	Building() {
//		SittingRoom = "客厅";
//		SittingBed = "卧室";
//	}
//
//public:
//	string SittingRoom;
//private:
//	string SittingBed;
//};
//
//goodGay::goodGay() {
//	b = new Building;
//}
//
//void goodGay::visit() {
//	cout << b->SittingRoom << endl;
//	cout << b->SittingBed << endl;
//}
//
//void goodGay::visit2() {
//	cout << b->SittingRoom << endl;
//	//cout << b->SittingBed << endl;
//}
//
//void test02() {
//	goodGay g;
//	g.visit();
//	g.visit2();
//}
//
////void goodGay(Building* building){
////	cout << building->SittingRoom << endl;
////	cout << building->SittingBed << endl;
////}
////
////void test01() {
////	Building b;
////	goodGay(&b);
////}
//
//int main() {
//	//test01();
//	test02();
//
//	return 0;
//}
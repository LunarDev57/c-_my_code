#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//老师分配学生
//struct Student {
//	string sname;
//	int score;
//};
//
//struct Teather {
//	string tname;
//	struct Student Sarray[5];
//};
//
//void allocateSpace(struct Teather Tarray[],int len)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++) {
//		Tarray[i].tname = "teather_";
//		Tarray[i].tname += nameSeed[i];
//		for (int j = 0; j < 5; j++) {
//			Tarray[i].Sarray[j].sname = "student_";
//			Tarray[i].Sarray[j].sname += nameSeed[j];
//			Tarray[i].Sarray[j].score = rand() % 61 + 40;
//		}
//	}
//}
//
//void printInfo(struct Teather Tarray[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "教师姓名：" << Tarray[i].tname << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "学生姓名：" << Tarray[i].Sarray[j].sname << "   考试分数：" << Tarray[i].Sarray[j].score << endl;
//		}
//	}
//}
//
//int main() {
//	srand((unsigned int)time(NULL));
//	struct Teather Tarray[3];
//	int len = sizeof(Tarray) / sizeof(Tarray[0]);
//
//	allocateSpace(Tarray, len);
//
//	printInfo(Tarray, len);
//
//	return 0;
//}

//new:在堆区开辟数据
//int* func() {
//	int* p = new int(10);
//	return p;
//}
//
////void test01() {
////	int* p = func();
////	cout << *p << endl;
////	delete p;
////}
//
//void test02() {
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << endl;
//	}
//	delete[] arr;
//}
//
//int main() {
//	//test01();
//	test02();
//
//	return 0;
//}

//引用:给变量起别名
//void test01() {
//	int a = 10;
//	int& b = a;
//	b = 100;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	int c = 50;
//	b = c;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//}

//void mySwap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void test02() {
//	int a = 10, b = 20;
//	mySwap(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}

//int& test03(){
//	static int a = 10;
//	return a;
//}
//
//int main() {
//	//test01();
//	//test02();
//	int& ret = test03();
//	cout << ret << endl;
//	cout << ret << endl;
//	test03() = 1000;
//	cout << ret << endl;
//	const int& ref = 10;
//	cout << ref << endl;
//
//	return 0;
//}

//函数高级
//函数默认参数
//int func(int a, int b, int c);
//
//int func(int a, int b = 20, int c = 30) {
//	return a + b + c;
//}
//
//int main() {
//	cout << func(10) << endl;
//	cout << func(10,30) << endl;
//
//	return 0;
//}

//函数占位参数
//void func(int a, int, int = 10) {
//	cout << "hello word" << endl;
//}
//
//int main() {
//	func(10, 10);
//
//	return 0;
//}

//函数重载
//void func() {
//	cout << "func" << endl;
//}
//
//void func(int a) {
//	cout << "func(int a)" << endl;
//}
//
//void func(double a) {
//	cout << "func(double a)" << endl;
//}
//
//void func(int a, double b) {
//	cout << "func(int a, double b)" << endl;
//}
//
//void func(double a, int b) {
//	cout << "func(double a, int b)" << endl;
//}
//
//void func(int a, int b) {
//	cout << "func(int a, int b)" << endl;
//}
//
//int main() {
//	func();
//	func(10);
//	func(3.14);
//	func(10,3.14);
//	func(3.14,10);
//	func(10,10);
//
//	return 0;
//}
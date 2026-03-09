#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<ctime>
#include<algorithm>
#include<iomanip>
#include<list>
using namespace std;

//评委打分
//class Person {
//public:
//	Person(string name, float score) {
//		Name = name;
//		Score=score;
//	}
//	string Name;
//	float Score;
//};
//
//void Myprint(vector<Person>v) {
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "姓名：" << it->Name << "   分数：" << fixed << setprecision(2) << it->Score << endl;
//	}
//}
//
//void createPerson(vector<Person>& v) {
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++) {
//		string name = "选手";
//		name += nameSeed[i];
//		float score = 0;
//		Person p(name, score);
//		v.push_back(p);
//	}
//}
//
//void setScore(vector<Person>&v) {
//	for (vector<Person>::iterator vit = v.begin(); vit != v.end(); vit++) {
//		deque<float>d;
//		for (int i = 0; i < 10; i++) {
//			float score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		sort(d.begin(), d.end());
//		d.pop_front();
//		d.pop_back();
//		float sum = 0;
//		for (deque<float>::iterator dit = d.begin(); dit != d.end(); dit++) {
//			sum += *dit;
//		}
//		float avg = sum / d.size();
//		vit->Score = avg;
//	}
//}
//
//int main() {
//	srand((unsigned int)time(NULL));
//	vector<Person>v;
//	createPerson(v);
//	setScore(v);
//	Myprint(v);
//
//	return 0;
//}

//排序
//class Person {
//public:
//	Person(string name, int age, int height) {
//		Name = name;
//		Age = age;
//		Height = height;
//	}
//
//	string Name;
//	int Age;
//	int Height;
//};
//
//bool MyCompare(Person& p1, Person& p2) {
//	if (p1.Age != p2.Age)
//		return p1.Age < p2.Age;
//	else
//		return p1.Height < p2.Height;
//}
//
//int main() {
//	list<Person>l;
//	Person p1("A", 35, 175);
//	Person p2("B", 45, 180);
//	Person p3("C", 40, 170);
//	Person p4("D", 35, 200);
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	
//	for (list<Person>::iterator it = l.begin(); it != l.end(); it++) {
//		cout << "姓名：" << it->Name << "   年龄：" << it->Age << "   身高：" << it->Height << endl;
//	}
//	cout << "-------------------------------" << endl;
//	l.sort(MyCompare);
//	for (list<Person>::iterator it = l.begin(); it != l.end(); it++) {
//		cout << "姓名：" << it->Name << "   年龄：" << it->Age << "   身高：" << it->Height << endl;
//	}
//
//	return 0;
//}
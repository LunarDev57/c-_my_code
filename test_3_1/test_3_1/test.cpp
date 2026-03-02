#include<iostream>
#include<string>
#include<ctime>
#include<algorithm>
using namespace std;

//初识c++
//int main() {
//	//cout << "hello word" << endl;
//
//	/*char ch = 'c';
//	cout << ch << endl;
//	cout << (int)ch << endl;*/
//
//	/*string str = "hello word";
//	cout << "str= " << str << endl;*/
//
//	/*string str = "hello";
//	cout << str << endl;
//	cin >> str;
//	cout << str << endl;*/
//
//	//system("pause");
//	return 0;
//}

//找最大
//int main() {
//	int num1, num2, num3;
//	cin >> num1;
//	cin >> num2;
//	cin >> num3;
//	int max = num1;
//	if (max< num2) {
//		max = num2;
//	}
//	if (max < num3) {
//		max = num3;
//	}
//	cout << max << endl;
//	return 0;
//}

//三目操作符
//int main() {
//	int a = 10, b = 20, c = 0;
//	c = (a > b ? a : b);
//	cout << c << endl;
//	(a > b ? a : b) = 100;
//	cout << a << endl;
//	cout << b << endl;
//
//	return 0;
//}

//猜大小
//int main() {
//	srand((unsigned int)time(NULL));
//	int num = rand() % 101;
//	int val = 0;
//	while (cin>>val) {
//		if (val > 100) {
//			cout << "输入错误,请重新输入" << endl;
//			continue;
//		}
//		if (val > num) {
//			cout << "猜大了" << endl;
//		}else if (val < num) {
//			cout << "猜小了" << endl;
//		}else {
//			cout << "恭喜你，猜对了" << endl;
//			cout << num << endl;
//			break;
//		}
//	}
//
//	return 0;
//}

//三位数的水仙花数
//int main() {
//	for (int n = 100; n <= 999; n++) {
//		int a = n % 10;
//		int b = n / 10 % 10;
//		int c = n / 100;
//		if (a * a * a + b * b * b + c * c * c == n) {
//			cout << n << endl;
//		}
//	}
//
//	return 0;
//}

//九九乘法表
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= i; j++) {
//			cout << i << " * " << j << " = " << i * j<<"   ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//按年龄排序
//struct Hero {
//	string name;
//	int age;
//	string sex;
//};
//
//void bubbleSort(struct Hero heroArray[], int len) {
//	for (int i = 0; i < len-1; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			if (heroArray[j].age > heroArray[j + 1].age) {
//				struct Hero temp = heroArray[j];
//				heroArray[j] = heroArray[j + 1];
//				heroArray[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void printHero(const struct Hero heroArray[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "姓名: " << heroArray[i].name << " 年龄: " << heroArray[i].age << " 性别: " << heroArray[i].sex << endl;
//	}
//}
//
//int main() {
//	struct Hero heroArray[3] =
//	{
//		{"A",23,"男"},
//		{"B",30,"女"},
//		{"C",25,"男"}
//	};
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//
//	bubbleSort(heroArray,len);
//
//	printHero(heroArray, len);
//
//	return 0;
//}
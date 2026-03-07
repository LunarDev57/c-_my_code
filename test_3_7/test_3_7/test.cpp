#include<iostream>
using namespace std;

//用多态实现计算器
//class AbstractCalculator {
//public:
//	virtual int getResult() = 0;
//	int A, B;
//};
//
//class AddCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return A + B;
//	}
//};
//
//class SubCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return A - B;
//	}
//};
//
//class MulCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return A * B;
//	}
//};
//
//class DivCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return A / B;
//	}
//};
//
//int Result(AbstractCalculator& ac) {
//	return ac.getResult();
//}
//
//void test01(){
//	AddCalculator add;
//	SubCalculator sub;
//	MulCalculator mul;
//	DivCalculator div;
//	add.A = 100;
//	add.B = 100;
//	sub.A = 100;
//	sub.B = 100;
//	mul.A = 100;
//	mul.B = 100;
//	div.A = 100;
//	div.B = 100;
//	cout << add.A << "+" << add.B << "=" << Result(add) << endl;
//	cout << add.A << "-" << add.B << "=" << Result(sub) << endl;
//	cout << add.A << "*" << add.B << "=" << Result(mul) << endl;
//	cout << add.A << "/" << add.B << "=" << Result(div) << endl;
//}
//
//int main(){
//	test01();
//
//	return 0;
//}

//制作饮品
//class AbstractDrinking{
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void PourInCup() = 0;
//	virtual void PutSomething() = 0;
//
//	void makeDrink() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class Coffee :public AbstractDrinking{
//public:
//	void Boil() {
//		cout << "煮水" << endl;
//	}
//
//	void Brew() {
//		cout << "冲泡咖啡" << endl;
//	}
//
//	void PourInCup() {
//		cout << "倒入杯中" << endl;
//	}
//
//	void PutSomething() {
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking {
//public:
//	void Boil() {
//		cout << "煮水" << endl;
//	}
//
//	void Brew() {
//		cout << "冲泡茶叶" << endl;
//	}
//
//	void PourInCup() {
//		cout << "倒入杯中" << endl;
//	}
//
//	void PutSomething() {
//		cout << "加入枸杞" << endl;
//	}
//};
//
//void doWork(AbstractDrinking* abs) {
//	abs->makeDrink();
//	delete abs;
//}
//
//void test() {
//	doWork(new Coffee);
//	cout << "-----------------" << endl;
//	doWork(new Tea);
//}
//
//int main() {
//	test();
//
//	return 0;
//}

//电脑组装
//class CPU {
//public:
//	virtual void calculator() = 0;
//};
//
//class VideoCard {
//public:
//	virtual void display() = 0;
//};
//
//class Memory {
//public:
//	virtual void storage() = 0;
//};
//
//class Computer {
//public:
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
//		this->cpu = cpu;
//		this->vc = vc;
//		this->mem = mem;
//	}
//
//	void work() {
//		cpu->calculator();
//		vc->display();
//		mem->storage();
//	}
//
//	~Computer() {
//		if (cpu != NULL) {
//			delete cpu;
//			cpu = NULL;
//		}
//		if (vc != NULL) {
//			delete vc;
//			vc = NULL;
//		}
//		if (mem != NULL) {
//			delete mem;
//			mem = NULL;
//		}
//	}
//
//private:
//	CPU* cpu;
//	VideoCard* vc;
//	Memory* mem;
//};
//
//class IntelCPU :public CPU {
//	void calculator() {
//		cout << "Intel的CPU开始计算了!" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard {
//	void display() {
//		cout << "Intel的显卡开始显示了!" << endl;
//	}
//};
//
//class IntelMemory :public Memory {
//	void storage() {
//		cout << "Intel的内存条开始储存了!" << endl;
//	}
//};
//
//class LenovoCPU :public CPU {
//	void calculator() {
//		cout << "Lenovo的CPU开始计算了!" << endl;
//	}
//};
//
//class  LenovoVideoCard :public VideoCard {
//	void display() {
//		cout << "Lenovo的显卡开始显示了!" << endl;
//	}
//};
//
//class  LenovoMemory :public Memory {
//	void storage() {
//		cout << "Lenovo的内存条开始储存了!" << endl;
//	}
//};
//
//void test01() {
//	CPU* cpu = new IntelCPU;
//	VideoCard* vc = new IntelVideoCard;
//	Memory* mem = new IntelMemory;
//	cout << "第一台电脑:" << endl;
//	Computer* computer1 = new Computer(cpu, vc, mem);
//	computer1->work();
//	delete computer1;
//	cout << "------------------------------" << endl;
//	cout << "第二台电脑:" << endl;
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
//	computer2->work();
//	delete computer2;
//}
//
//int main() {
//	test01();
//
//	return 0;
//}
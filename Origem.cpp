#include <iostream>
#include "Tempo.h"
using namespace std;

int main() {
	Tempo t1(82);
	t1.print();
	Tempo t2(22, 61);
	t2.print();
	t1.soma(t2);
	cout << "soma:" << endl;
	t1.print();
	Tempo t3;
	t3.print();
	t3.Insert();
	t3.print();
}
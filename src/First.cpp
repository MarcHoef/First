//============================================================================
// Name        : First.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
blaa test
class Auto {
public:
	void drive(){
		cout << "nniiiuuuuu" << endl;
	}

};


int add(int x, int y){
	int z=x+y;
	return z;
}

void changeThatShit(int *x){
	*x = *x+ 42;
}

int main() {
	int test=add(2,3);
	changeThatShit(&test);
	std::string s = std::to_string(test);
	cout << "test" + s << endl; // prints !!!Hello World!!!
	Auto audi;
	audi.drive();
	return 0;
}

//============================================================================
// Name        : First.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <windows.h>
#include <Vehikel.h>
#include <Auto.h>
using namespace std;



int main() {
	Auto testAuto;
	//testAuto.setSpeed(2);
	//cout << testAuto.getSpeed() << endl;
	//testAuto.setSpeed(0.1);

	testAuto.abschliessen();
	cout << testAuto.getMaxPassagiere() << endl;
	return 0;
}

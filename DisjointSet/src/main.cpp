/*
 * main.cpp
 *
 *  Created on: 2017. 5. 26.
 *      Author: ghbae
 */

#include <iostream>
#include "SimulatorDisjointSet.h"

using namespace std;

int main(int argc, char* argv[]) {
	cout << "This program is the Simulating of Disjoint Set.." << endl << endl;

	SDS* simBasic = new SDS(DISJOINT_SET_BASIC);
	simBasic->FileIO_Basic();
	simBasic->SimulatingBasic();
	delete simBasic; simBasic = NULL;

	SDS* simSize = new SDS(DISJOINT_SET_SIZE);
	simSize->FileIO_Size();
	simSize->SimulatingSize();
	delete simSize; simSize = NULL;

	SDS* simComp = new SDS(DISJOINT_SET_COMP);
	simComp->FileIO_Comp();
	simComp->SimulatingComp();
	delete simComp; simComp = NULL;

	cout << "Complete Simulating.." << endl;

	return true;
}

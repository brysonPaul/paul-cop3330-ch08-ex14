//NOTE: PLEASE READ THE README
#include <iostream>
#include <string>
#include "std_lib_facilities.h"

void numberOfWeeksInXYears(const int weeksInAYear,int years){
	cout << "The number of weeks in " << years << " years is " << weeksInAYear * years << "\n";
	//cannot do weeksInAYear++ in here, but outside we can
	}

int main() {
	int weeksInAYear = 52;
	numberOfWeeksInXYears(weeksInAYear,3);
	weeksInAYear++;
	numberOfWeeksInXYears(weeksInAYear,3);

} 
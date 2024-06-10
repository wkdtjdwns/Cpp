#include <iostream>
using namespace std;

int main() {

	int homeSchool, schoolPcroom, pcroomAcademy, academyHome;
	cin >> homeSchool >> schoolPcroom >> pcroomAcademy >> academyHome;

	int result = homeSchool + schoolPcroom + pcroomAcademy + academyHome;

	int hour = result / 60;
	int minute = result % 60;

    cout << hour << "\n" << minute;

	return 0;
}

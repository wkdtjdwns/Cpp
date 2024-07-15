#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {

	time_t curTime = time(NULL);
	struct tm* curTm = localtime(&curTime);

	int curYear = curTm->tm_year + 1900;
	int curMonth = curTm->tm_mon + 1;
	int curDay = curTm->tm_mday;

	cout << curYear << "\n" << curMonth << "\n" << curDay;

    return 0;
}

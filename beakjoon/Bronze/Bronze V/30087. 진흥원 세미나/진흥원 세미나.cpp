#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

	unordered_map<string, string> seminar;
	seminar["Algorithm"] = "204";
	seminar["DataAnalysis"] = "207";
	seminar["ArtificialIntelligence"] = "302";
	seminar["CyberSecurity"] = "B101";
	seminar["Network"] = "303";
	seminar["Startup"] = "501";
	seminar["TestStrategy"] = "105";

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		cout << seminar[s] << "\n";
	}

	return 0;
}

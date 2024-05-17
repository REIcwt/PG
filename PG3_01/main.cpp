#include <stdio.h>
#include <vector>
#include <list>
using namespace std;

int main() {

	list<const char*> yamanoteLine;

	//add yamanoteLine station
	yamanoteLine.push_back("Tokyo");
	yamanoteLine.push_back("Kanda");
	yamanoteLine.push_back("Akihabara");
	yamanoteLine.push_back("Okachimachi");
	yamanoteLine.push_back("Ueno");
	yamanoteLine.push_back("Uguisudani");
	yamanoteLine.push_back("Nippori");
	yamanoteLine.push_back("Tabata");
	yamanoteLine.push_back("Komagome");
	yamanoteLine.push_back("Sugamo");
	yamanoteLine.push_back("Otsuka");
	yamanoteLine.push_back("Ikebukuro");
	yamanoteLine.push_back("Mejiro");
	yamanoteLine.push_back("Takadanobaba");
	yamanoteLine.push_back("Shin-Okubo");
	yamanoteLine.push_back("Shinjuku");
	yamanoteLine.push_back("Yoyogi");
	yamanoteLine.push_back("Harajuku");
	yamanoteLine.push_back("Shibuya");
	yamanoteLine.push_back("Ebisu");
	yamanoteLine.push_back("Meguro");
	yamanoteLine.push_back("Gotanda");
	yamanoteLine.push_back("Osaki");
	yamanoteLine.push_back("Shinagawa");
	yamanoteLine.push_back("Tamachi");
	yamanoteLine.push_back("Hamamatsucho");
	yamanoteLine.push_back("Shimbashi");
	yamanoteLine.push_back("Yurakucho");



	///print yamanoteLine station in 1970
	printf("1970年山手線の駅:\n");
	for (auto station = yamanoteLine.begin(); station != yamanoteLine.end(); station++) {
		printf("%s\n", *station);
	}
	printf("\n--------------------\n\n");


	///add Nishi-Nippori after Tabata
	for (list<const char*>::iterator station = yamanoteLine.begin(); station != yamanoteLine.end(); station++) {
		if (*station == "Tabata") {
			station = yamanoteLine.insert(station, "Nishi-Nippori");
			++station;
		}
	}

	///print yamanoteLine station in 2019
	printf("1970年山手線の駅:\n");
	for (auto station = yamanoteLine.begin(); station != yamanoteLine.end(); station++) {
		printf("%s\n", *station);
	}
	printf("\n--------------------\n\n");


	///add Takanawa Gateway after Tamachi
	for (list<const char*>::iterator station = yamanoteLine.begin(); station != yamanoteLine.end(); station++) {
		if (*station == "Tamachi") {
			station = yamanoteLine.insert(station, "Takanawa Gateway");
			++station;
		}
	}

	///print yamanoteLine station in 2020
	printf("1970年山手線の駅:\n");
	for (auto station = yamanoteLine.begin(); station != yamanoteLine.end(); station++) {
		printf("%s\n", *station);
	}
	printf("\n");

	return 0;
}
#include <iostream>
#include <string>
#include <regex>
#include <vector>
#include <conio.h>

using namespace std;

void toLower(string);
void deleteWords(string);
void wordMax(string);
vector<string> FindWords(string);

int main(int argc, char const *argv[]) {
	string text;
	cout << "Enter the string: ";
	getline(cin, text);
    cout << "1 - Make all uppercase letters small\n2 - Print the longest word\n3 - Delete words with an odd number of consonants\n4 - Exit\n";
int type;
    cout << "Make  your choice: ";
    type=0;
    while(type!=4){
            cin>>type;
		switch (type) {
			case 1:toLower(text);break;
			case 2:wordMax(text);break;
			case 3:deleteWords(text);break;
			case 4:exit(0);break;
			default:cout <<"Error!\n";break;
        }
    }
	return 0;
}

void toLower(string text) {
	for(auto& elem : text)
		elem = tolower(elem);
	cout << "Result: " << text << endl;
}

void wordMax(string text) {
	vector<string> words = FindWords(text);
	string maxWord = "";
	for(auto item : words) {
		if(item.length() > maxWord.length())
			maxWord = item;
	}
	cout << "Result: " << maxWord << endl;
}

void deleteWords(string text) {
	vector<string> deleteWords;
	vector<string> words = FindWords(text);
	string keys("AaEeIiOoYyUu");

	for(auto elem : words) {
		int n = 0;
		for(int i = 0; i < elem.length(); i++)
			if((int) keys.find(elem[i]) != -1) n++;
		if((elem.length() - n) % 2 != 0)
			deleteWords.push_back(elem);
	}

	for(auto elem : deleteWords)
		text.erase(text.find(elem), elem.length());

	cout << "Result: " << text << endl;
}

vector<string> FindWords(string text) {
	auto match = smatch {};
	regex reg(R"(\w+)");
	vector<string> matchResult;

	while (regex_search(text, match, reg)) {
		matchResult.push_back(match[0]);
        text = match.suffix();
    }
	return matchResult;
}

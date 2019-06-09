#include <iostream>
#include <stdfix.h>
#include <string>
#include <regex>
#include <vector>
#include <conio.h>

using namespace std;

void deleteWords(string text);
void NumCount(string text);
void LatinWord(string text);
vector<string> FindWords(string);
vector<string> FindNumbers(string text);

int main() {
system("chcp 1251");
int type=1;
string text;
cout << "Enter the string: ";
getline(cin,text);
cout << "1 - Count of the numbers in the string\n";
cout << "2 - Show words only in latin characters, \n3 - Delete every second words\n0 - Exit\n";
while(type!=0){
    cout << "Make your choice: ";
    cin>>type;
    switch(type){
    case 1:NumCount(text);cout <<endl;break;
    case 2:LatinWord(text);cout <<endl;break;
    case 3:deleteWords(text);cout <<endl;break;
    case 0:exit(0);break;
    default:cout<<"Error!!\n";break;
    }
}
    return 0;
}

void NumCount(string text) {
	vector<string> num = FindNumbers(text);
    int count=0;
	for(auto elem : num) {count++;}

	cout << " Result: " << count << endl;
}

void LatinWord(string text) {
    auto match = smatch {};
    regex reg(R"(\w+)");
    vector<string> LatinWords;

    while (regex_search(text, match, reg)) {
        LatinWords.push_back(match[0]);
        text = match.suffix();
    }
        cout << "Result: ";
    for(auto elem : LatinWords)cout<<elem<< " ";
}


void deleteWords(string text) {
	vector<string> deleteWord;
	vector<string> words = FindWords(text);
    int n = 0;
	for(int i = 0; i < words.size(); i++) {
	n++;
        if(n%2==0){deleteWord.push_back(words[i]);}
	}
	for(auto elem : deleteWord)
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
vector<string> FindNumbers(string text) {
	auto match = smatch {};
	regex reg(R"(\d+)");
	vector<string> matchResult;

	while (regex_search(text, match, reg)) {
		matchResult.push_back(match[0]);
        text = match.suffix();
    }
	return matchResult;
}

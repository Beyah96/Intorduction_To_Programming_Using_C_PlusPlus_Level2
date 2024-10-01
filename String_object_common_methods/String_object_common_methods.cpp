#include <iostream>
#include <string>

using namespace std;

int main() {

	string Text = "My name is Mohamed Said BEYAH, I'm a developper";

	cout << "Length : " << Text.length() << endl;
	cout << "Text.at(15) : " << Text.at(15) << endl;
	Text.append(" @Programming advices ");
	cout << "Text : " << Text << endl;
	Text.insert(11, "Yacine ");
	cout << "Text after insert Yacine at position 11 : " << Text << endl;
	cout << "Sub string of the text form 11 to 13 : " << Text.substr(11, 3) << endl;
	Text.push_back('X');
	cout << "Text after insert and push back : " << Text << endl;
	Text.pop_back();
	cout << "Text after insert and pop back : " << Text << endl;
	cout << Text.find("Ali") << endl;
	cout << Text.find("ali") << endl;
	
	if (Text.find("Ali") == Text.npos)
		cout << "Ali is not found" << endl;

	Text.clear();
	cout << "Text after using clear methode : " << Text << endl;


}
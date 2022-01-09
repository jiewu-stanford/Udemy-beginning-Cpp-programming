#include <iostream>
#include <string>

using namespace std;

int main()
{
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
	
	string raw_msg {};
	cout << "Enter your message to be encrypted: ";
	getline(cin, raw_msg);
	string encrypted_msg {};
	
	int counter {0};
	for (auto c: raw_msg) {
		size_t position = alphabet.find(c);
		if (position!=string::npos)
			encrypted_msg += key.at(position);
		else
			encrypted_msg += c;
		counter++;
	}
	cout << "Encrypted meassage: " << encrypted_msg << endl;
	
	
	string en_msg {};
	cout << "Enter your message to be decrypted: ";
	getline(cin, en_msg);
	string decrypted_msg {};
	
	counter = 0;
	for (auto c: en_msg) {
		size_t position = key.find(c);
		if (position!=string::npos)
			decrypted_msg += alphabet.at(position);
		else
			decrypted_msg += c;
		counter++;
	}
	cout << "Decrypted meassage: " << decrypted_msg << endl;
	
	
	return 0;
}
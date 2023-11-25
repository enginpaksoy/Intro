#include <string>
#include <iostream>
using namespace std;

class Account {
public: 
	Account(string accountName, int initialBalance) {
		name = accountName;
		if (initialBalance > 0)
		{
			balance = initialBalance;
		}
	}
	int getBalance() {
		return balance;
	}
	void deposit(int depositAmount) {
		if (depositAmount > 0) {
			balance += depositAmount;
		}
	}
private: 
	string name;
	int balance = 0;
};

int main() {
	Account account1("Engin", 100);
	cout << account1.getBalance() << endl;
}

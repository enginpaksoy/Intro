#include <string>
#include <iostream>
using std::cout;
using std::string;
using std::endl;

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
	void withdraw(int withdrawAmount) {
		if (balance > withdrawAmount) {
			balance -= withdrawAmount;
		}
		if (balance < withdrawAmount) {
			cout << "Withdraw amount exceeded account balance. " << "You cannot withdraw " << withdrawAmount << endl;
		}
	}
private: 
	string name;
	int balance = 0;
};

int main() {
	Account account1("Engin", 100);
	cout << account1.getBalance() << endl;
	account1.deposit(125);
	cout << account1.getBalance() << endl;
	account1.withdraw(100);
	cout << account1.getBalance() << endl;
	account1.withdraw(300);
	cout << account1.getBalance() << endl;
}

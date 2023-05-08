#include<iostream>

class Account {
	double balance = 0.0;
public:
	Account() = default;
	Account(double balance) {
		this->balance = balance;
	}

	void deposit(double amount) {
		balance += amount;
	}

	double withdraw(double amount) {
		if (amount > balance) {
			double temp = balance;
			balance = 0;
			return temp;
		}
		else {
			balance -= amount;
			return amount;
		}
	}

};


int main() {
	Account a1 = Account{};
	Account a2 = Account{ 100.0 };

	a1.deposit(9.0);

	std::cout << a1.withdraw(10.0) << std::endl;
	std::cout << a2.withdraw(52.0) << std::endl;

	std::cout << Account{1000.0}.withdraw(1002.0) << std::endl;
	return 0;
}
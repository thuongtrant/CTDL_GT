#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Runner
{
protected:
	string name;
	string desc = "";
public:
	Runner(string name) {
		this->name = name;
	}
	Runner() {}
	Runner& addDescription(string desc) {
		this->desc = desc;
		return *this;
	}
	void message() {
		cout << "\n\n::::: " << name << endl;
		if (desc != "") {
			cout << desc << endl;
		}

	}

	/**
	 * Run the application
	 *
	 * @return Runner
	 */
	static Runner& run() {
		Runner instance;
		cout << instance.name << " running..." << endl;
		return instance;
	}
};


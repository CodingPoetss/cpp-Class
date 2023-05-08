#pragma once
#include<iostream>
#include"MilStatus.h"
class AsFriend {
private:
	MilStatus s;
public:
	AsFriend() {
		cout << "Now friend MilStatus:" << s.getNumberOfMilStatus() << endl;
	}
	
	static int FriendgetNumberOfStatus() {
		return MilStatus::NumberOfMilStatus;
	}

};
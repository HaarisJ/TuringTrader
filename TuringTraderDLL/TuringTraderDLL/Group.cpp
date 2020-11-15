#include "pch.h"
#include "Group.h"

#include <string>
#include <vector>

using namespace std;

string Group::getName() const {
    return Name;
};

string Group::getJoinCode() const {
    return joinCode;
};

vector<string> Group::getGroupMembers() const {
    return groupMembers;
};
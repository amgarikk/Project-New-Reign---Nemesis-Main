#ifndef OPTIONLIST_H_
#define OPTIONLIST_H_

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <boost\regex.hpp>
#include <boost\algorithm\string.hpp>

typedef std::vector<std::string> vecstr;

struct OptionList
{
	int groupMin = -1;
	std::string startStateID;
	std::string templatecode;
	vecstr ruleOne;
	vecstr ruleTwo;
	vecstr compulsory;
	vecstr optionOrder;
	std::unordered_map<std::string, bool> storelist;
	std::unordered_map<std::string, bool> groupOption;
	std::unordered_map<std::string, std::string> mixOptRegis;
	std::unordered_map<std::string, vecstr> mixOptRever;
	std::unordered_map<std::string, vecstr> addOn;
	std::unordered_map<std::string, vecstr> joint;
	std::vector<vecstr> eleEvent;
	std::vector<std::string> eleEventLine;
	std::vector<vecstr> eleEventGroupF;
	std::vector<std::string> eleEventGroupFLine;
	std::vector<vecstr> eleEventGroupL;
	std::vector<std::string> eleEventGroupLLine;
	std::vector<vecstr> eleVar;
	std::vector<std::string> eleVarLine;
	std::vector<vecstr> eleVarGroupF;
	std::vector<std::string> eleVarGroupFLine;
	std::vector<vecstr> eleVarGroupL;
	std::vector<std::string> eleVarGroupLLine;

	OptionList(std::string filepath, std::string format);
	OptionList();
	void OptionList::setDebug(bool isDebug);
};

bool optionMatching(std::string option1, std::string option2);

#endif
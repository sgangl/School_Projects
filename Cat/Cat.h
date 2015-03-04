#pragma once

class Cat 
{
public:
	Cat();
	virtual void printCat() = 0;
	int getWeight();
	std::string getVocalization();
	std::string getName();
	void setWeight(const int& nuWeight);
	void setVocalization(const std::string& nuVoice);
	void setName(const std::string& nuName);
private:	
	int weight;
	std::string vocalization;	
	std::string name;
};

#include "Tucam.h"
#include <string>
#include <iostream>




Tucam::Tucam()
{
	this->test1 = 20;
	this->test2 = "Hello World!";
	std::cout << "I am the Tucam Constructor\n";
}


Tucam::~Tucam()
{
	std::cout << "I am the Tucam Destructor\n";
}

const int Tucam::gettest1() const 
{
	return this->test1;
}

void Tucam::settest1(int input)
{
	this->test2 = input;
}


const std::string Tucam::gettest2() const
{
	return this->test2;
}


void Tucam::settest2(std::string input)
{
	this->test2 = input;
}


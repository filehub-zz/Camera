#ifndef CAMERA_H
#define CAMERA_H

#include <string>
#include <iostream>

class Camera
{
public:
	Camera() { std::cout << "I am the Camera Constructor\n"; };
	virtual ~Camera() { std::cout << "I am the Camera destructor\n"; };
	virtual void settest1(int input) = 0;
	virtual void settest2(std::string input) = 0;
	virtual const int gettest1()  const = 0;
	virtual const std::string gettest2() const = 0;
protected:
	int test1;
	std::string test2;
};

#endif

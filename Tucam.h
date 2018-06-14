#ifndef TUCAM_H
#define TUCAM_H
#include "Camera.h"
#include <string>

class Tucam : public Camera
{
public:
	Tucam();
	~Tucam();
	void settest1(int input) ;
	void settest2(std::string input) ;
	const int gettest1() const;
	virtual const std::string gettest2() const;
private:
	
};

#endif

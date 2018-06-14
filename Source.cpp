#include <iostream>

#include <stdlib.h>
//#include "Camera.h"
#include "Tucam.h"
#include "CameraManager.h"
int main()
{
	//Tucam tucam;
	CameraManager cameras;
	Camera* t = new Tucam();
	cameras.Add(t);
	t->settest2("No");

	//std::cout << t->gettest2()<<"\n";
	delete t;
	return 0;
	
}

	
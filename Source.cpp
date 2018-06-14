#include <iostream>

#include <stdlib.h>
//#include "Camera.h"
#include "Tucam.h"
#include "CameraManager.h"
int main()
{
	CameraManager cameras;
	Camera* t = new Tucam();
	std::cout << t<<"\n";
	cameras.Add(t);	
	return 0;
	
}

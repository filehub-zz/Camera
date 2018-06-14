#ifndef CAMERAMANAGER_H
#define CAMERAMANAGER_H
#include "Camera.h"
#include <string>
#include <vector>
#include "Tucam.h"

class CameraManager
{
public:
	CameraManager();
	~CameraManager();
	int Add(Camera *item);
	void GetCamera(int index);
private:
	std::vector<Camera*> cameras;
	int count;
	Camera *tucam;

};

#endif


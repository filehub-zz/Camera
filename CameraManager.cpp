#include "CameraManager.h"


CameraManager::CameraManager()
{
	
	count = -1;
	tucam = new Tucam();
	//this->Add(tucam);
	//what i do here
}


CameraManager::~CameraManager()
{
	for (std::vector<Camera*>::iterator it = this->cameras.begin(); it != this->cameras.end(); it++) {
		delete *it;
	}
	cameras.clear();
}


int CameraManager::Add(Camera &item)
{
	//what i do here
	//this->cameras.push_back(new );
	//cameras.push_back(item);
	count++;
	return count;
}


void CameraManager::GetCamera(int index)
{
	//return &cameras[index];
}
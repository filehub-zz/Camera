#include "CameraManager.h"


CameraManager::CameraManager()
{

	count = -1;
	//tucam = new Tucam();
	//this->Add(tucam);

}


CameraManager::~CameraManager()
{
	for (std::vector<Camera*>::iterator it = this->cameras.begin(); it != this->cameras.end(); it++) {
		delete *it;
	}
	cameras.clear();
}


int CameraManager::Add(Camera *item)
{
	cameras.push_back(item);	
	std::cout << item << "\n";
	count++;
	return count;
}


void CameraManager::GetCamera(int index)
{
	//return &cameras[index];
}

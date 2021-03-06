#include "Camera.h"

Camera::Camera()
{
	transform = Transform(glm::vec3(0.0f, 0.0f, 3.0f), glm::vec3(0.0f, -90.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f));
}

Camera::~Camera()
{

}

glm::mat4x4 Camera::GetViewMatrix() const
{
	return glm::lookAt(this->transform.position, this->transform.position + this->transform.GetForwardVector(), this->transform.GetUpVector());
}
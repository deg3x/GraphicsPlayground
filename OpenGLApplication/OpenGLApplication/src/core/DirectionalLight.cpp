#include "DirectionalLight.h"

DirectionalLight::DirectionalLight() : Light()
{

}

DirectionalLight::~DirectionalLight()
{

}

void DirectionalLight::SetShaderProperties(const Shader& shaderProgram) const
{
	shaderProgram.SetVector3("directionalLight.ambient", this->ambient);
	shaderProgram.SetVector3("directionalLight.diffuse", this->diffuse);
	shaderProgram.SetVector3("directionalLight.direction", -this->transform.GetUpVector());
	shaderProgram.SetFloat("directionalLight.intensity", this->intensity);
}
#pragma once
#include "Light.h"

class SpotLight : public Light
{
public:
	float cutOffAngle;
	float cutOffAngleOut;
	float constantAttenuation;
	float linearAttenuation;
	float quadraticAttenuation;

	SpotLight();
	~SpotLight();

	void SetShaderProperties(const Shader& shaderProgram) const override;
};
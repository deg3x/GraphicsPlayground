#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>

struct Color
{
	float r;
	float g;
	float b;
	float a;
};

struct VertexData
{
	glm::vec3 position;
	glm::vec3 normal;
	glm::vec2 uv;
	glm::vec3 tangent;
	glm::vec3 bitangent;
};
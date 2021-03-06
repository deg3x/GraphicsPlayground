#version 330 core

layout(location = 0) in vec3 aPosition;
layout(location = 1) in vec3 aNormal;

out vec3 Normal;
out vec3 WorldPosition;

uniform mat4 projection;
uniform mat4 view;
uniform mat4 model;
uniform mat4 normalMatrix;

void main()
{
	gl_Position = projection * view * model * vec4(aPosition.x, aPosition.y, aPosition.z, 1.0);
	WorldPosition = vec3(model * vec4(aPosition.x, aPosition.y, aPosition.z, 1.0));
	Normal = mat3(normalMatrix) * aNormal;
}
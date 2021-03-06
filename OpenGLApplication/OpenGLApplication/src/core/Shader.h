#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <string>

class Shader
{
private:
	unsigned int id;

	int CheckShaderCompiled(GLuint shaderID);
	int CheckProgramLinked(GLuint shaderProgramID);
	int ReadCodeFromPath(const char* path, std::string& code);

public:
	Shader(const char* vertPath, const char* fragPath);

	void Use();

	unsigned int GetShaderID();
	void SetBool(const std::string& name, bool value) const;
	void SetInt(const std::string& name, int value) const;
	void SetFloat(const std::string& name, float value) const;
	void SetVector3(const std::string& name, const glm::vec3& vector) const;
	void SetVector4(const std::string& name, const glm::vec4& vector) const;
	void SetMatrix4x4(const std::string& name, const glm::mat4x4& matrix) const;
};
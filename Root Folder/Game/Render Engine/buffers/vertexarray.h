#pragma once

#include <vector>
#include <GL/glew.h>

#include "buffer.h"
class VertexArray {
private:
	GLuint m_ArrayID;
	std::vector<Buffer*> m_Buffers;
	
public:
	VertexArray();
	~VertexArray();
	void addBuffer(Buffer *buffer, GLuint index);
	void addInterLeavedBuffer(Buffer * buffer, int index, const std::vector<int> & dataFormat);
	void bind() const;
	void unbind() const;
};

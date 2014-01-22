#define GLI_INCLUDE_GLCORE1_5


///////////////////////////////////////////////////////////////////////////////
// Masks
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// Error enum
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// Main enum
///////////////////////////////////////////////////////////////////////////////

// Main enum for all standard enums
//  (may want to break up for speed)
enum Main {

/* OpenGL 1.5 */

  GL_BUFFER_SIZE                        =  0x8764,
  GL_BUFFER_USAGE                       =  0x8765,
  GL_QUERY_COUNTER_BITS                 =  0x8864,
  GL_CURRENT_QUERY                      =  0x8865,
  GL_QUERY_RESULT                       =  0x8866,
  GL_QUERY_RESULT_AVAILABLE             =  0x8867,
  GL_ARRAY_BUFFER                       =  0x8892,
  GL_ELEMENT_ARRAY_BUFFER               =  0x8893,
  GL_ARRAY_BUFFER_BINDING               =  0x8894,
  GL_ELEMENT_ARRAY_BUFFER_BINDING       =  0x8895,
  GL_VERTEX_ARRAY_BUFFER_BINDING        =  0x8896,
  GL_NORMAL_ARRAY_BUFFER_BINDING        =  0x8897,
  GL_COLOR_ARRAY_BUFFER_BINDING         =  0x8898,
  GL_INDEX_ARRAY_BUFFER_BINDING         =  0x8899,
  GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING =  0x889A,
  GL_EDGE_FLAG_ARRAY_BUFFER_BINDING     =  0x889B,
  GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDIN=  0x889C,
  GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING=  0x889D,
  GL_WEIGHT_ARRAY_BUFFER_BINDING        =  0x889E,
  GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING =  0x889F,
  GL_READ_ONLY                          =  0x88B8,
  GL_WRITE_ONLY                         =  0x88B9,
  GL_READ_WRITE                         =  0x88BA,
  GL_BUFFER_ACCESS                      =  0x88BB,
  GL_BUFFER_MAPPED                      =  0x88BC,
  GL_BUFFER_MAP_POINTER                 =  0x88BD,
  GL_STREAM_DRAW                        =  0x88E0,
  GL_STREAM_READ                        =  0x88E1,
  GL_STREAM_COPY                        =  0x88E2,
  GL_STATIC_DRAW                        =  0x88E4,
  GL_STATIC_READ                        =  0x88E5,
  GL_STATIC_COPY                        =  0x88E6,
  GL_DYNAMIC_DRAW                       =  0x88E8,
  GL_DYNAMIC_READ                       =  0x88E9,
  GL_DYNAMIC_COPY                       =  0x88EA,
  GL_SAMPLES_PASSED                     =  0x8914,


/* TODO: Do a define replacement?
  GL_FOG_COORD_SOURCE                   =  GL_FOG_COORDINATE_SOURCE,
  GL_FOG_COORD                          =  GL_FOG_COORDINATE,
  GL_CURRENT_FOG_COORD                  =  GL_CURRENT_FOG_COORDINATE,
  GL_FOG_COORD_ARRAY_TYPE               =  GL_FOG_COORDINATE_ARRAY_TYPE,
  GL_FOG_COORD_ARRAY_STRIDE             =  GL_FOG_COORDINATE_ARRAY_STRIDE,
  GL_FOG_COORD_ARRAY_POINTER            =  GL_FOG_COORDINATE_ARRAY_POINTER,
  GL_FOG_COORD_ARRAY                    =  GL_FOG_COORDINATE_ARRAY,
  GL_FOG_COORD_ARRAY_BUFFER_BINDING     =  GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING,
  GL_SRC0_RGB                           =  GL_SOURCE0_RGB,
  GL_SRC1_RGB                           =  GL_SOURCE1_RGB,
  GL_SRC2_RGB                           =  GL_SOURCE2_RGB,
  GL_SRC0_ALPHA                         =  GL_SOURCE0_ALPHA,
  GL_SRC1_ALPHA                         =  GL_SOURCE1_ALPHA,
  GL_SRC2_ALPHA                         =  GL_SOURCE2_ALPHA,
*/

};

///////////////////////////////////////////////////////////////////////////////
// OpenGL 1.5 functions
///////////////////////////////////////////////////////////////////////////////


void glGenQueries (GLsizei n, GLuint *ids);

void glDeleteQueries (GLsizei n, const GLuint *ids);

GLboolean glIsQuery (GLuint id);

void glBeginQuery (GLenum[Main] target, GLuint id);

void glEndQuery (GLenum[Main] target);

void glGetQueryiv (GLenum[Main] target, GLenum[Main] pname, GLint *params);
void glGetQueryObjectiv (GLuint id, GLenum[Main] pname, GLint *params);
void glGetQueryObjectuiv (GLuint id, GLenum[Main] pname, GLuint *params);

void glBindBuffer (GLenum[Main] target, GLuint buffer);

void glDeleteBuffers (GLsizei n, const GLuint *buffers);

void glGenBuffers (GLsizei n, GLuint *buffers);

GLboolean glIsBuffer (GLuint buffer);

//TODO: These three functions really use the new types GLsizeiptr and GLintptr - May need to update
void glBufferData (GLenum[Main] target, GLsizei size, const GLvoid *data, GLenum[Main] usage);
void glBufferSubData (GLenum[Main] target, GLint offset, GLsizei size, const GLvoid *data);
void glGetBufferSubData (GLenum[Main] target, GLint offset, GLsizei size, GLvoid *data);

GLvoid* glMapBuffer (GLenum[Main] target, GLenum[Main] access);

GLboolean glUnmapBuffer (GLenum[Main] target);

void glGetBufferParameteriv (GLenum[Main] target, GLenum[Main] pname, GLint *params);

void glGetBufferPointerv (GLenum[Main] target, GLenum[Main] pname, GLvoid **params);

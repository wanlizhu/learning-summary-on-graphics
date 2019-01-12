
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:35 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_ARB_occlusion_query__
#define __GLUX_GL_ARB_occlusion_query__

GLUX_NEW_PLUGIN(GL_ARB_occlusion_query);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_QUERY_COUNTER_BITS_ARB
#  define GL_QUERY_COUNTER_BITS_ARB 0x8864
#endif
#ifndef GL_CURRENT_QUERY_ARB
#  define GL_CURRENT_QUERY_ARB 0x8865
#endif
#ifndef GL_QUERY_RESULT_ARB
#  define GL_QUERY_RESULT_ARB 0x8866
#endif
#ifndef GL_QUERY_RESULT_AVAILABLE_ARB
#  define GL_QUERY_RESULT_AVAILABLE_ARB 0x8867
#endif
#ifndef GL_SAMPLES_PASSED_ARB
#  define GL_SAMPLES_PASSED_ARB 0x8914
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glGenQueriesARB
typedef void (APIENTRYP PFNGLUXGENQUERIESARBPROC) (GLsizei n, GLuint *ids);
#endif
#ifndef __GLUX__GLFCT_glDeleteQueriesARB
typedef void (APIENTRYP PFNGLUXDELETEQUERIESARBPROC) (GLsizei n, const GLuint *ids);
#endif
#ifndef __GLUX__GLFCT_glIsQueryARB
typedef GLboolean (APIENTRYP PFNGLUXISQUERYARBPROC) (GLuint id);
#endif
#ifndef __GLUX__GLFCT_glBeginQueryARB
typedef void (APIENTRYP PFNGLUXBEGINQUERYARBPROC) (GLenum target, GLuint id);
#endif
#ifndef __GLUX__GLFCT_glEndQueryARB
typedef void (APIENTRYP PFNGLUXENDQUERYARBPROC) (GLenum target);
#endif
#ifndef __GLUX__GLFCT_glGetQueryivARB
typedef void (APIENTRYP PFNGLUXGETQUERYIVARBPROC) (GLenum target, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glGetQueryObjectivARB
typedef void (APIENTRYP PFNGLUXGETQUERYOBJECTIVARBPROC) (GLuint id, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glGetQueryObjectuivARB
typedef void (APIENTRYP PFNGLUXGETQUERYOBJECTUIVARBPROC) (GLuint id, GLenum pname, GLuint *params);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glGenQueriesARB
extern PFNGLUXGENQUERIESARBPROC glGenQueriesARB;
#endif
#ifndef __GLUX__GLFCT_glDeleteQueriesARB
extern PFNGLUXDELETEQUERIESARBPROC glDeleteQueriesARB;
#endif
#ifndef __GLUX__GLFCT_glIsQueryARB
extern PFNGLUXISQUERYARBPROC glIsQueryARB;
#endif
#ifndef __GLUX__GLFCT_glBeginQueryARB
extern PFNGLUXBEGINQUERYARBPROC glBeginQueryARB;
#endif
#ifndef __GLUX__GLFCT_glEndQueryARB
extern PFNGLUXENDQUERYARBPROC glEndQueryARB;
#endif
#ifndef __GLUX__GLFCT_glGetQueryivARB
extern PFNGLUXGETQUERYIVARBPROC glGetQueryivARB;
#endif
#ifndef __GLUX__GLFCT_glGetQueryObjectivARB
extern PFNGLUXGETQUERYOBJECTIVARBPROC glGetQueryObjectivARB;
#endif
#ifndef __GLUX__GLFCT_glGetQueryObjectuivARB
extern PFNGLUXGETQUERYOBJECTUIVARBPROC glGetQueryObjectuivARB;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------

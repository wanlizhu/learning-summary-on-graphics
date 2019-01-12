
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:34 2004)
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

#ifndef __GLUX_GL_IBM_multimode_draw_arrays__
#define __GLUX_GL_IBM_multimode_draw_arrays__

GLUX_NEW_PLUGIN(GL_IBM_multimode_draw_arrays);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glMultiModeDrawArraysIBM
typedef void (APIENTRYP PFNGLUXMULTIMODEDRAWARRAYSIBMPROC) (const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride);
#endif
#ifndef __GLUX__GLFCT_glMultiModeDrawElementsIBM
typedef void (APIENTRYP PFNGLUXMULTIMODEDRAWELEMENTSIBMPROC) (const GLenum *mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount, GLint modestride);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glMultiModeDrawArraysIBM
extern PFNGLUXMULTIMODEDRAWARRAYSIBMPROC glMultiModeDrawArraysIBM;
#endif
#ifndef __GLUX__GLFCT_glMultiModeDrawElementsIBM
extern PFNGLUXMULTIMODEDRAWELEMENTSIBMPROC glMultiModeDrawElementsIBM;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
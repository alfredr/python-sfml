#ifndef __PYX_HAVE_API__sfml__graphics
#define __PYX_HAVE_API__sfml__graphics
#include "Python.h"
#include "graphics.h"

static PyObject *(*__pyx_f_4sfml_8graphics_wrap_color)(sf::Color *) = 0;
#define wrap_color __pyx_f_4sfml_8graphics_wrap_color
static PyObject *(*__pyx_f_4sfml_8graphics_api_wrap_renderstates)(sf::RenderStates *) = 0;
#define api_wrap_renderstates __pyx_f_4sfml_8graphics_api_wrap_renderstates
static PyObject *(*__pyx_f_4sfml_8graphics_wrap_convexshape)(sf::ConvexShape *) = 0;
#define wrap_convexshape __pyx_f_4sfml_8graphics_wrap_convexshape
static PyObject *(*__pyx_f_4sfml_8graphics_wrap_rendertarget)(sf::RenderTarget *) = 0;
#define wrap_rendertarget __pyx_f_4sfml_8graphics_wrap_rendertarget
#if !defined(__Pyx_PyIdentifier_FromString)
#if PY_MAJOR_VERSION < 3
  #define __Pyx_PyIdentifier_FromString(s) PyString_FromString(s)
#else
  #define __Pyx_PyIdentifier_FromString(s) PyUnicode_FromString(s)
#endif
#endif

#ifndef __PYX_HAVE_RT_ImportModule
#define __PYX_HAVE_RT_ImportModule
static PyObject *__Pyx_ImportModule(const char *name) {
    PyObject *py_name = 0;
    PyObject *py_module = 0;
    py_name = __Pyx_PyIdentifier_FromString(name);
    if (!py_name)
        goto bad;
    py_module = PyImport_Import(py_name);
    Py_DECREF(py_name);
    return py_module;
bad:
    Py_XDECREF(py_name);
    return 0;
}
#endif

#ifndef __PYX_HAVE_RT_ImportFunction
#define __PYX_HAVE_RT_ImportFunction
static int __Pyx_ImportFunction(PyObject *module, const char *funcname, void (**f)(void), const char *sig) {
    PyObject *d = 0;
    PyObject *cobj = 0;
    union {
        void (*fp)(void);
        void *p;
    } tmp;
    d = PyObject_GetAttrString(module, (char *)"__pyx_capi__");
    if (!d)
        goto bad;
    cobj = PyDict_GetItemString(d, funcname);
    if (!cobj) {
        PyErr_Format(PyExc_ImportError,
            "%s does not export expected C function %s",
                PyModule_GetName(module), funcname);
        goto bad;
    }
#if PY_VERSION_HEX >= 0x02070000 && !(PY_MAJOR_VERSION==3 && PY_MINOR_VERSION==0)
    if (!PyCapsule_IsValid(cobj, sig)) {
        PyErr_Format(PyExc_TypeError,
            "C function %s.%s has wrong signature (expected %s, got %s)",
             PyModule_GetName(module), funcname, sig, PyCapsule_GetName(cobj));
        goto bad;
    }
    tmp.p = PyCapsule_GetPointer(cobj, sig);
#else
    {const char *desc, *s1, *s2;
    desc = (const char *)PyCObject_GetDesc(cobj);
    if (!desc)
        goto bad;
    s1 = desc; s2 = sig;
    while (*s1 != '\0' && *s1 == *s2) { s1++; s2++; }
    if (*s1 != *s2) {
        PyErr_Format(PyExc_TypeError,
            "C function %s.%s has wrong signature (expected %s, got %s)",
             PyModule_GetName(module), funcname, sig, desc);
        goto bad;
    }
    tmp.p = PyCObject_AsVoidPtr(cobj);}
#endif
    *f = tmp.fp;
    if (!(*f))
        goto bad;
    Py_DECREF(d);
    return 0;
bad:
    Py_XDECREF(d);
    return -1;
}
#endif


static int import_sfml__graphics(void) {
  PyObject *module = 0;
  module = __Pyx_ImportModule("sfml.graphics");
  if (!module) goto bad;
  if (__Pyx_ImportFunction(module, "wrap_color", (void (**)(void))&__pyx_f_4sfml_8graphics_wrap_color, "PyObject *(sf::Color *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "api_wrap_renderstates", (void (**)(void))&__pyx_f_4sfml_8graphics_api_wrap_renderstates, "PyObject *(sf::RenderStates *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "wrap_convexshape", (void (**)(void))&__pyx_f_4sfml_8graphics_wrap_convexshape, "PyObject *(sf::ConvexShape *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "wrap_rendertarget", (void (**)(void))&__pyx_f_4sfml_8graphics_wrap_rendertarget, "PyObject *(sf::RenderTarget *)") < 0) goto bad;
  Py_DECREF(module); module = 0;
  return 0;
  bad:
  Py_XDECREF(module);
  return -1;
}

#endif /* !__PYX_HAVE_API__sfml__graphics */

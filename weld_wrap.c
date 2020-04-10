/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.1
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGJAVA
#define SWIGJAVA
#endif


/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>
#include "weld.h"


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1,
  SWIG_JavaIOException,
  SWIG_JavaRuntimeException,
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError,
  SWIG_JavaIllegalStateException,
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { SWIG_JavaIllegalStateException, "java/lang/IllegalStateException" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_weldJNI_weld_1conf_1free(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  weld_conf_t arg1 = (weld_conf_t) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_conf_t *)&jarg1; 
  weld_conf_free(arg1);
}


SWIGEXPORT jstring JNICALL Java_weldJNI_weld_1conf_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jstring jarg2) {
  jstring jresult = 0 ;
  weld_conf_t arg1 = (weld_conf_t) 0 ;
  char *arg2 = (char *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_conf_t *)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return 0;
  }
  result = (char *)weld_conf_get(arg1,(char const *)arg2);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_weldJNI_weld_1conf_1new(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  weld_conf_t result;
  
  (void)jenv;
  (void)jcls;
  result = (weld_conf_t)weld_conf_new();
  *(weld_conf_t *)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_weldJNI_weld_1conf_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jstring jarg2, jstring jarg3) {
  weld_conf_t arg1 = (weld_conf_t) 0 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_conf_t *)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return ;
  }
  arg3 = 0;
  if (jarg3) {
    arg3 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg3, 0);
    if (!arg3) return ;
  }
  weld_conf_set(arg1,(char const *)arg2,(char const *)arg3);
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
  if (arg3) (*jenv)->ReleaseStringUTFChars(jenv, jarg3, (const char *)arg3);
}


SWIGEXPORT void JNICALL Java_weldJNI_weld_1context_1free(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  weld_context_t arg1 = (weld_context_t) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_context_t *)&jarg1; 
  weld_context_free(arg1);
}


SWIGEXPORT jlong JNICALL Java_weldJNI_weld_1context_1memory_1usage(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  weld_context_t arg1 = (weld_context_t) 0 ;
  int64_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_context_t *)&jarg1; 
  result = weld_context_memory_usage(arg1);
  {
    int64_t * resultptr = (int64_t *) malloc(sizeof(int64_t));
    memmove(resultptr, &result, sizeof(int64_t));
    *(int64_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_weldJNI_weld_1context_1new(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  weld_conf_t arg1 = (weld_conf_t) 0 ;
  weld_context_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_conf_t *)&jarg1; 
  result = (weld_context_t)weld_context_new(arg1);
  *(weld_context_t *)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_weldJNI_weld_1error_1code(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  weld_error_t arg1 = (weld_error_t) 0 ;
  uint64_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_error_t *)&jarg1; 
  result = weld_error_code(arg1);
  {
    uint64_t * resultptr = (uint64_t *) malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT void JNICALL Java_weldJNI_weld_1error_1free(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  weld_error_t arg1 = (weld_error_t) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_error_t *)&jarg1; 
  weld_error_free(arg1);
}


SWIGEXPORT jstring JNICALL Java_weldJNI_weld_1error_1message(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jstring jresult = 0 ;
  weld_error_t arg1 = (weld_error_t) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_error_t *)&jarg1; 
  result = (char *)weld_error_message(arg1);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_weldJNI_weld_1error_1new(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  weld_error_t result;
  
  (void)jenv;
  (void)jcls;
  result = (weld_error_t)weld_error_new();
  *(weld_error_t *)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_weldJNI_weld_1load_1library(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2) {
  char *arg1 = (char *) 0 ;
  weld_error_t arg2 = (weld_error_t) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return ;
  }
  arg2 = *(weld_error_t *)&jarg2; 
  weld_load_library((char const *)arg1,arg2);
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
}


SWIGEXPORT jlong JNICALL Java_weldJNI_weld_1module_1compile(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2, jlong jarg3) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  weld_conf_t arg2 = (weld_conf_t) 0 ;
  weld_error_t arg3 = (weld_error_t) 0 ;
  weld_module_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = *(weld_conf_t *)&jarg2; 
  arg3 = *(weld_error_t *)&jarg3; 
  result = (weld_module_t)weld_module_compile((char const *)arg1,arg2,arg3);
  *(weld_module_t *)&jresult = result; 
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT void JNICALL Java_weldJNI_weld_1module_1free(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  weld_module_t arg1 = (weld_module_t) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_module_t *)&jarg1; 
  weld_module_free(arg1);
}


SWIGEXPORT jlong JNICALL Java_weldJNI_weld_1module_1run(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jlong jarg3, jlong jarg4) {
  jlong jresult = 0 ;
  weld_module_t arg1 = (weld_module_t) 0 ;
  weld_context_t arg2 = (weld_context_t) 0 ;
  weld_value_t arg3 = (weld_value_t) 0 ;
  weld_error_t arg4 = (weld_error_t) 0 ;
  weld_value_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_module_t *)&jarg1; 
  arg2 = *(weld_context_t *)&jarg2; 
  arg3 = *(weld_value_t *)&jarg3; 
  arg4 = *(weld_error_t *)&jarg4; 
  result = (weld_value_t)weld_module_run(arg1,arg2,arg3,arg4);
  *(weld_value_t *)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_weldJNI_weld_1set_1log_1level(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  uint64_t arg1 ;
  uint64_t *argp1 ;
  
  (void)jenv;
  (void)jcls;
  argp1 = *(uint64_t **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null uint64_t");
    return ;
  }
  arg1 = *argp1; 
  weld_set_log_level(arg1);
}


SWIGEXPORT jlong JNICALL Java_weldJNI_weld_1value_1context(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  weld_value_t arg1 = (weld_value_t) 0 ;
  weld_context_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_value_t *)&jarg1; 
  result = (weld_context_t)weld_value_context(arg1);
  *(weld_context_t *)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_weldJNI_weld_1value_1data(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  weld_value_t arg1 = (weld_value_t) 0 ;
  void *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_value_t *)&jarg1; 
  result = (void *)weld_value_data(arg1);
  *(void **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_weldJNI_weld_1value_1free(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  weld_value_t arg1 = (weld_value_t) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_value_t *)&jarg1; 
  weld_value_free(arg1);
}


SWIGEXPORT jlong JNICALL Java_weldJNI_weld_1value_1new(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  void *arg1 = (void *) 0 ;
  weld_value_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  result = (weld_value_t)weld_value_new((void const *)arg1);
  *(weld_value_t *)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_weldJNI_weld_1value_1run(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  weld_value_t arg1 = (weld_value_t) 0 ;
  int64_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(weld_value_t *)&jarg1; 
  result = weld_value_run(arg1);
  {
    int64_t * resultptr = (int64_t *) malloc(sizeof(int64_t));
    memmove(resultptr, &result, sizeof(int64_t));
    *(int64_t **)&jresult = resultptr;
  }
  return jresult;
}


#ifdef __cplusplus
}
#endif


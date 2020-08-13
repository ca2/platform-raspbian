#pragma once



//#define _GNU_SOURCE
//#define _REENTRANT
#define _THREAD_SAFE


#ifndef LINUX
#define LINUX
#endif


#ifndef RASPBIAN
#define RASPBIAN
#endif


#define BROAD_PRECOMPILED_HEADER 0


#define BSD_STYLE_SOCKETS 1
#define HAVE_MYSQL 1
#define HAVE_OPENSSL 1

#define VARIADIC_TEMPLATE_FORMAT2


#ifdef _DEBUG
#define DEBUG
#endif


//#define __WINESRC__

#define CLASS_DECL_EXPORT
#define CLASS_DECL_IMPORT
#define CLASS_DECL_THREAD __thread


#define __PLATFORM   "linux"




#ifdef cplus
#define inline static
#endif

#ifdef __cplusplus

#define LOG_THIS_TAG (get_demangle(typeid(*this).name()))
#define LOG_MEMBER_PREFIX __FUNCTION__

#define ALOG_FUNCTION __FUNCTION__
#define ALOG_LINE __LINE__
#define ALOG_FILE __FILE__


#include <initializer_list>

#endif

#define static_inline static inline


#define AXIS_FREEIMAGE


#define FONT_SANS "FreeSans"
#define FONT_SERIF "FreeSerif"
#define FONT_MONO "Ubuntu Mono"
#define FONT_SANS_EX "Liberation Sans"
#define FONT_SERIF_EX "Liberation Serif"
#define FONT_SANS_FX "Ubuntu"
#define FONT_SERIF_FX "Bitstream Charter"




#define _strdup strdup

#define HNULL NULL

#define STR_NEWLINE "\n"




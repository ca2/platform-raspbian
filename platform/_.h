#pragma once

#include "config.h"

#include "system.h"

#if !defined(THIRD_PRIVATE_C_H)

#ifdef __cplusplus

#include <typeinfo>

typedef std::type_info std_type_info;

#endif

#endif

#include "types.h"

#define stricmp strcasecmp

#define WINAPI

#define WINBOOL int



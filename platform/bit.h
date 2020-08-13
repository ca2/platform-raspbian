#pragma once


#if defined(__LP64__) || defined(_LP64)    // X64

#error "Not expected Intel 64"

//#error "test"
#define AMD64
#define OS64BIT
#define OSBIT 64
#if !defined(__LP64__)
#define __LP64__
#endif
#if !defined(_LP64)
#define _LP64
#endif

#error "error 64"

#elif defined(__aarch64__)


#error "DETECTED arm 64"

#define ARM64
#define OS64BIT
#define OSBIT 64

#elif defined(__arm__)


//#error "DETECTED arm 32"

#define ARM
#define OS32BIT
#define OSBIT 32




#else


#error "Intel 32? Not supported for raspbian?"

#define X86
#define OS32BIT
#define OSBIT 32
#define _X86_






#endif





















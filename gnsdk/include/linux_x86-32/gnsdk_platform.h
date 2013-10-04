/*
 * Copyright (c) 2012 Gracenote.
 *
 * This software may not be used in any way or distributed without
 * permission. All rights reserved.
 *
 * Some code herein may be covered by US and international patents.
 */

/*
 * gnsdk_platform.h - Contains platform-specific definitions.
 * USE THIS FILE TO OVERRIDE THE DEFINITIONS IN gnsdk_defines.h
 */

 #ifndef _GNSDK_DEFINES_H_
 #error gnsdk_platforms.h should not be included directly. Use #include "gnsdk_defines.h"
 #endif

/*
 * Linux Flavor
 */

#ifndef _GNSDK_PLATFORM_H_
#define _GNSDK_PLATFORM_H_


#define GNSDK_LINUX
#define GNSDK_LINUX_X86
#define GNSDK_LINUX_X86_32
#define GNSDK_PLATFORM_STR		"Linux (x86)"


#define GNSDK_EXPORTED_API
#define GNSDK_IMPORTED_API
#define	GNSDK_CALLBACK_API
#define GNSDK_API

#include <assert.h>
#define GNSDK_ASSERT(exp)	assert(exp)

#include <stddef.h> /* for size_t */

#define GNSDK_INTPTR_T
typedef long int 			gnsdk_intptr_t;

#define GNSDK_UINTPTR_T
typedef unsigned long int 	gnsdk_uintptr_t;

#define GNSDK_SIZE_T
typedef unsigned long       gnsdk_size_t;



#endif /* _GNSDK_PLATFORM_H_ */

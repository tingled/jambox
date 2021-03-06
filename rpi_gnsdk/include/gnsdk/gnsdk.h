/*
 * Copyright (c) 2012 Gracenote.
 *
 * This software may not be used in any way or distributed without
 * permission. All rights reserved.
 *
 * Some code herein may be covered by US and international patents.
 */

/*
 * gnsdk.h - header to include all requisite GNSDK headers
 */

#ifndef _GNSDK_H_
#define _GNSDK_H_

/* GNSDK Types and Macros */
#include "gnsdk_defines.h"           /* REQUIRED */
#include "gnsdk_errors.h"            /* REQUIRED */
#include "gnsdk_error_codes.h"       /* REQUIRED */
#include "gnsdk_version.h"           /* STANDARD */

/* GNSDK APIs */
#include "gnsdk_manager.h"           /* REQUIRED */
#include "gnsdk_manager_gdo.h"       /* STANDARD */
#include "gnsdk_manager_lists.h"     /* STANDARD */
#include "gnsdk_manager_locales.h"   /* STANDARD */
#include "gnsdk_manager_logging.h"   /* STANDARD */
#include "gnsdk_manager_storage.h"   /* STANDARD */

#ifdef auto
    /* GNSDKs to be used: Enable defines for all SDKs to be used */
    #if ((!defined GNSDK_MUSICID)           && (!defined GNSDK_MUSICID_FILE) && \
         (!defined GNSDK_LINK)              && (!defined GNSDK_PLAYLIST) && \
         (!defined GNSDK_DSP)               && (!defined GNSDK_STORAGE_SQLITE) && \
         (!defined GNSDK_STORAGE_GDB)       && (!defined GNSDK_STORAGE_QNX) && \
         (!defined GNSDK_LOOKUP_LOCAL)      && (!defined GNSDK_MOODGRID) && \
         (!defined GNSDK_LOOKUP_FPLOCAL))
        #define GNSDK_MUSICID            1
        #define GNSDK_MUSICID_FILE       1
        #define GNSDK_LINK               1
        #define GNSDK_DSP                1
        #define GNSDK_PLAYLIST           1
        #define GNSDK_STORAGE_SQLITE     1
		#ifdef GNSDK_QNX
		#define GNSDK_STORAGE_QNX	     1
		#endif
        #define GNSDK_STORAGE_GDB        0
        #define GNSDK_LOOKUP_LOCAL       1
        #define GNSDK_MOODGRID           1
        #define GNSDK_LOOKUP_FPLOCAL     0
    #endif
#elif acr
    /* GNSDKs to be used: Enable defines for all SDKs to be used */
    #if ((!defined GNSDK_VIDEO)          && (!defined GNSDK_LINK) && \
         (!defined GNSDK_ACR)            && (!defined GNSDK_DSP)&& \
         (!defined GNSDK_STORAGE_SQLITE) && (!defined GNSDK_EPG) && \
         (!defined GNSDK_LOOKUP_LOCAL)   && (!defined GNSDK_LOOKUP_FPLOCAL))
        #define GNSDK_VIDEO              1
        #define GNSDK_LINK               1
        #define GNSDK_DSP                1
        #define GNSDK_ACR                1
        #define GNSDK_EPG                1
        #define GNSDK_STORAGE_SQLITE     1
        #define GNSDK_LOOKUP_LOCAL       1
        #define GNSDK_LOOKUP_FPLOCAL     1
    #endif
#elif desktop
    /* GNSDKs to be used: Enable defines for all SDKs to be used */
    #if ((!defined GNSDK_MUSICID)        && (!defined GNSDK_MUSICID_FILE) && \
         (!defined GNSDK_VIDEO)          && (!defined GNSDK_LINK) && \
         (!defined GNSDK_SUBMIT)         && (!defined GNSDK_PLAYLIST) && \
         (!defined GNSDK_MUSICID_MATCH)  && (!defined GNSDK_DSP) && \
         (!defined GNSDK_LOOKUP_LOCAL)   && (!defined GNSDK_MOODGRID) && \
         (!defined GNSDK_STORAGE_SQLITE))

        #define GNSDK_MUSICID            1
        #define GNSDK_MUSICID_FILE       1
        #define GNSDK_MUSICID_MATCH      1
        #define GNSDK_VIDEO              1
        #define GNSDK_LINK               1
        #define GNSDK_SUBMIT             1
        #define GNSDK_DSP                1
        #define GNSDK_PLAYLIST           1
        #define GNSDK_STORAGE_SQLITE     1
        #define GNSDK_LOOKUP_LOCAL       1
        #define GNSDK_MOODGRID           1
    #endif
#else
    /* GNSDKs to be used: Enable defines for all SDKs to be used */
    #if ((!defined GNSDK_MUSICID)        && (!defined GNSDK_MUSICID_FILE) && \
         (!defined GNSDK_VIDEO)          && (!defined GNSDK_LINK) && \
         (!defined GNSDK_SUBMIT)         && (!defined GNSDK_PLAYLIST) && \
         (!defined GNSDK_ACR)            && (!defined GNSDK_MUSICID_MATCH) && \
         (!defined GNSDK_DSP)            && (!defined GNSDK_EPG) && \
         (!defined GNSDK_STORAGE_SQLITE) && (!defined GNSDK_STORAGE_GDB) && (!defined GNSDK_STORAGE_QNX) && \
         (!defined GNSDK_LOOKUP_LOCAL)   && (!defined GNSDK_MOODGRID)   && \
         (!defined GNSDK_LOOKUP_FPLOCAL))

        #define GNSDK_MUSICID            1
        #define GNSDK_MUSICID_FILE       1
        #define GNSDK_MUSICID_MATCH      1
        #define GNSDK_VIDEO              1
        #define GNSDK_LINK               1
        #define GNSDK_SUBMIT             1
        #define GNSDK_DSP                1
        #define GNSDK_PLAYLIST           1
        #define GNSDK_ACR                1
        #define GNSDK_STORAGE_SQLITE     1
        #define GNSDK_STORAGE_GDB        1
        #define GNSDK_LOOKUP_LOCAL       1
        #define GNSDK_EPG                1
        #define GNSDK_MOODGRID           1
        #define GNSDK_LOOKUP_FPLOCAL     1
    #endif
#endif




#if GNSDK_MUSICID
    #include "gnsdk_musicid.h"
#endif
#if GNSDK_MUSICID_FILE
    #include "gnsdk_musicid_file.h"
#endif
#if GNSDK_MUSICID_MATCH
    #include "gnsdk_musicid_match.h"
#endif
#if GNSDK_VIDEO
    #include "gnsdk_video.h"
#endif
#if GNSDK_LINK
    #include "gnsdk_link.h"
#endif
#if GNSDK_SUBMIT
    #include "gnsdk_submit.h"
    #include "gnsdk_submit_gdo.h"
#endif
#if GNSDK_STORAGE_SQLITE
    #include "gnsdk_storage_sqlite.h"
#endif
#if GNSDK_STORAGE_GDB
    #include "gnsdk_storage_gdb.h"
#endif
#if GNSDK_STORAGE_QNX
    #include "gnsdk_storage_qnx.h"
#endif
#if GNSDK_LOOKUP_LOCAL
    #include "gnsdk_lookup_local.h"
#endif
#if GNSDK_DSP
    #include "gnsdk_dsp.h"
#endif
#if GNSDK_PLAYLIST
    #include "gnsdk_playlist.h"
#endif
#if GNSDK_ACR
    #include "gnsdk_acr.h"
#endif

#if GNSDK_EPG
    #include "gnsdk_epg.h"
#endif

#if GNSDK_MOODGRID
    #include "gnsdk_moodgrid.h"
#endif

#if GNSDK_LOOKUP_FPLOCAL
	#include "gnsdk_lookup_fplocal.h"
#endif

#endif /* _GNSDK_H_ */


/* inffast.h -- header to use inffast.c
 * Copyright (C) 1995-2003, 2010 Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h
 */

/* WARNING: this file should *not* be used by applications. It is
   part of the implementation of the compression library and is
   subject to change. Applications should only use zlib.h.
 */

#ifdef __cplusplus
extern "C" {
#endif

void inflate_fast (z_streamp strm, unsigned start);

#ifdef __cplusplus
} // extern "C"
#endif
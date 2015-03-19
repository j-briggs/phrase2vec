#ifndef DIRENT_INCLUDED
#define DIRENT_INCLUDED

/*

Declaration of POSIX directory browsing functions and types for Win32.

Author:  Kevlin Henney (kevlin@acm.org, kevlin@curbralan.com)
History: Created March 1997. Updated June 2003.
Rights:  See end of file.

*/

#include <io.h> /* _findfirst and _findnext set errno iff they return -1 */

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct DIR DIR;

  struct dirent
  {
    char *d_name;
    unsigned attrib;
  };

  DIR           *opendir(const char *);
  int           closedir(DIR *);
  struct dirent *readdir(DIR *);
  void          rewinddir(DIR *);

  /*

  Copyright Kevlin Henney, 1997, 2003. All rights reserved.

  Permission to use, copy, modify, and distribute this software and its
  documentation for any purpose is hereby granted without fee, provided
  that this copyright and permissions notice appear in all copies and
  derivatives.

  This software is supplied "as is" without express or implied warranty.

  But that said, if there are any problems please get in touch.

  */

#ifdef __cplusplus
}
#endif

#endif


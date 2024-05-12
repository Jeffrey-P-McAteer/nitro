/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://www.hdfgroup.org/licenses.               *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/* H5pubconf.h  Generated By CMake during the configuration */

#ifndef H5pubconf_h_
#define H5pubconf_h_
#pragma once

#if defined(_WIN32)
#include "H5pubconf_WIN32.h"
#else

#include <features.h>
#if defined(_POSIX_C_SOURCE)
#include "H5pubconf_POSIX.h"
#else
#error "Unknown platform."
#endif

#endif

#endif // H5pubconf_h_
/*
 * Copyright (C) 2004, 2005  Internet Systems Consortium, Inc. ("ISC")
 * Copyright (C) 2000, 2001  Internet Software Consortium.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/* $Id: errno2result.h,v 1.6.18.2 2005/06/09 23:55:10 marka Exp $ */

#ifndef UNIX_ERRNO2RESULT_H
#define UNIX_ERRNO2RESULT_H 1

/* XXXDCL this should be moved to lib/isc/include/isc/errno2result.h. */

#include <errno.h>		/* Provides errno. */

#include <isc/lang.h>
#include <isc/types.h>

ISC_LANG_BEGINDECLS

#define isc__errno2result(posixerrno) \
	isc__errno2resultx(posixerrno, __FILE__, __LINE__)

isc_result_t
isc__errno2resultx(int posixerrno, const char *file, int line);

ISC_LANG_ENDDECLS

#endif /* UNIX_ERRNO2RESULT_H */
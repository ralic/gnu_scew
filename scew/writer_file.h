/**
 * @file     writer.h
 * @brief    SCEW writer functions
 * @author   Aleix Conchillo Flaque <aleix@member.fsf.org>
 * @date     Thu Nov 13, 2008 11:01
 *
 * @if copyright
 *
 * Copyright (C) 2008 Aleix Conchillo Flaque
 *
 * SCEW is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * SCEW is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 * @endif
 */

#ifndef WRITER_FILE_H_0811131101
#define WRITER_FILE_H_0811131101

#include "writer.h"

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


// Functions

/**
 * Creates a new SCEW writer for the given file name. This routine
 * will create a new file if the file does not exist or it will
 * overwrite the existing one. Once the writer is created, any of the
 * SCEW writer functions might be called in order to store some
 * information to the file.
 *
 * @pre file_name != NULL
 *
 * @param file_name the file name to create for the new SCEW writer.
 *
 * @return a new SCEW writer for the given file name or NULL if the
 * writer could not be created.
 *
 * @ingroup SCEWWriterAlloc
 */
extern scew_writer* scew_writer_file_create (char const *file_name);

/**
 * Creates a new SCEW writer for the given @a file stream. Once the
 * writer is created, any of the SCEW writer functions might be called
 * in order to store some information to the file.
 *
 * Note that the file stream has an orientation which might be
 * manually set immediately after creating it (see @a fwide), or is
 * automatically set with the first I/O operation. SCEW will use the
 * correct output function according to the Expat XML_Char type
 * defined in your system (to enable UTF-16 define @a XML_UNICODE or
 * @a XML_UNICODE_WCHAR_T). The orientation should not be changed
 * before any SCEW function is used on the stream (or at least it
 * should be changed according to XML_Char).
 *
 * @pre file != NULL
 *
 * @param file the file where the new SCEW writer will write to.
 *
 * @return a new SCEW writer for the given file stream or NULL if the
 * writer could not be created.
 *
 * @ingroup SCEWWriterAlloc
 */
extern scew_writer* scew_writer_fp_create (FILE *file);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif // WRITER_FILE_H_0811131101
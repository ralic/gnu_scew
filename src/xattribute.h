/**
 *
 * @file     xattribute.h
 * @author   Aleix Conchillo Flaque <aconchillo@acm.org>
 * @date     Mon Nov 25, 2002 00:54
 * @brief    SCEW private attribute type declaration
 *
 * $Id$
 *
 * @if copyright
 *
 * Copyright (C) 2002 Aleix Conchillo Flaque
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
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * @endif
 */


#ifndef XATTRIBUTE_H_ALEIX0211250054
#define XATTRIBUTE_H_ALEIX0211250054

#include "attribute.h"


struct _scew_attribute
{
    XML_Char* name;
    XML_Char* value;
};


void
free_attribute(scew_attribute* attribute);

#endif /* XATTRIBUTE_H_ALEIX0211250054 */
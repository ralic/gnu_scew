/**
 *
 * @file     attribute.h
 * @author   Aleix Conchillo Flaque <aconchillo@acm.org>
 * @date     Mon Nov 25, 2002 00:39
 * @brief    SCEW attribute type declaration
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
 *
 * Attribute related functions. SCEW provides functions to access the
 * attributes of all the loaded elements. XML element attributes are
 * basically a name-value pair.
 */


#ifndef ATTRIBUTE_H_ALEIX0211250039
#define ATTRIBUTE_H_ALEIX0211250039

#include <expat.h>

#include "element.h"

/**
 * This is the type declaration for element attributes.
 */
typedef struct _scew_attribute scew_attribute;


/**
 * Returns the number of attributes of the specified element. An element
 * can have zero or more attributes.
 */
extern unsigned int
scew_get_attribute_count(scew_element const* element);

/**
 * Returns the element attribute on the specified position. Positions
 * are zero based.
 *
 * @return the attribute on the specified position, NULL if there is no
 * attribute in the position.
 */
extern scew_attribute const*
scew_get_attribute(scew_element const* element, unsigned int idx);

/**
 * Returns the element attribute with the specified name. Remember that
 * XML names are case-sensitive.
 *
 * @return the attribute with the given name, NULL if not found.
 */
extern scew_attribute const*
scew_get_attribute_by_name(scew_element const* element, XML_Char const* name);

/**
 * Returns the attribute name or NULL if the attribute does not exist.
 */
extern XML_Char const*
scew_get_attribute_name(scew_attribute const* attribute);

/**
 * Returns the attribute value or NULL if the attribute does not exist.
 */
extern XML_Char const*
scew_get_attribute_value(scew_attribute const* attribute);


#endif /* ATTRIBUTE_H_ALEIX0211250039 */
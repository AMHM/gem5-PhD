/** \file LinkDirection.hh
 *
 * Auto generated C++ code started by /PhD_Accounts/Phd_Accounts/a.monazzah/gem5-PhD/src/mem/slicc/symbols/Type.py:457
 */

#ifndef __LinkDirection_HH__
#define __LinkDirection_HH__

#include <iostream>
#include <string>


// Class definition
/** \enum LinkDirection
 *  \brief ...
 */
enum LinkDirection {
    LinkDirection_FIRST,
    LinkDirection_In = LinkDirection_FIRST, /**< Inward link direction */
    LinkDirection_Out, /**< Outward link direction */
    LinkDirection_NUM
};

// Code to convert from a string to the enumeration
LinkDirection string_to_LinkDirection(const std::string& str);

// Code to convert state to a string
std::string LinkDirection_to_string(const LinkDirection& obj);

// Code to increment an enumeration type
LinkDirection &operator++(LinkDirection &e);
std::ostream& operator<<(std::ostream& out, const LinkDirection& obj);

#endif // __LinkDirection_HH__

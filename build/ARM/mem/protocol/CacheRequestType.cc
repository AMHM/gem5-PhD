/** \file CacheRequestType.hh
 *
 * Auto generated C++ code started by /PhD_Accounts/Phd_Accounts/a.monazzah/gem5-PhD/src/mem/slicc/symbols/Type.py:554
 */

#include <cassert>
#include <iostream>
#include <string>

#include "base/misc.hh"
#include "mem/protocol/CacheRequestType.hh"

using namespace std;

// Code for output operator
ostream&
operator<<(ostream& out, const CacheRequestType& obj)
{
    out << CacheRequestType_to_string(obj);
    out << flush;
    return out;
}

// Code to convert state to a string
string
CacheRequestType_to_string(const CacheRequestType& obj)
{
    switch(obj) {
      case CacheRequestType_DataArrayRead:
        return "DataArrayRead";
      case CacheRequestType_DataArrayWrite:
        return "DataArrayWrite";
      case CacheRequestType_TagArrayRead:
        return "TagArrayRead";
      case CacheRequestType_TagArrayWrite:
        return "TagArrayWrite";
      default:
        panic("Invalid range for type CacheRequestType");
    }
}

// Code to convert from a string to the enumeration
CacheRequestType
string_to_CacheRequestType(const string& str)
{
    if (str == "DataArrayRead") {
        return CacheRequestType_DataArrayRead;
    } else if (str == "DataArrayWrite") {
        return CacheRequestType_DataArrayWrite;
    } else if (str == "TagArrayRead") {
        return CacheRequestType_TagArrayRead;
    } else if (str == "TagArrayWrite") {
        return CacheRequestType_TagArrayWrite;
    } else {
        panic("Invalid string conversion for %s, type CacheRequestType", str);
    }
}

// Code to increment an enumeration type
CacheRequestType&
operator++(CacheRequestType& e)
{
    assert(e < CacheRequestType_NUM);
    return e = CacheRequestType(e+1);
}

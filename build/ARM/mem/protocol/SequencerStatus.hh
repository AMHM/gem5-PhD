/** \file SequencerStatus.hh
 *
 * Auto generated C++ code started by /PhD_Accounts/Phd_Accounts/a.monazzah/gem5-PhD/src/mem/slicc/symbols/Type.py:457
 */

#ifndef __SequencerStatus_HH__
#define __SequencerStatus_HH__

#include <iostream>
#include <string>


// Class definition
/** \enum SequencerStatus
 *  \brief ...
 */
enum SequencerStatus {
    SequencerStatus_FIRST,
    SequencerStatus_Idle = SequencerStatus_FIRST, /**< Idle */
    SequencerStatus_Pending, /**< Pending */
    SequencerStatus_NUM
};

// Code to convert from a string to the enumeration
SequencerStatus string_to_SequencerStatus(const std::string& str);

// Code to convert state to a string
std::string SequencerStatus_to_string(const SequencerStatus& obj);

// Code to increment an enumeration type
SequencerStatus &operator++(SequencerStatus &e);
std::ostream& operator<<(std::ostream& out, const SequencerStatus& obj);

#endif // __SequencerStatus_HH__

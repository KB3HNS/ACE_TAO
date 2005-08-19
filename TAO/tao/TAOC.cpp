// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:277


#include "TAOC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:70

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from 
// be\be_visitor_structure/structure_cs.cpp:66

void 
TAO::BufferingConstraint::_tao_any_destructor (
    void *_tao_void_pointer
  )
{
  BufferingConstraint *_tao_tmp_pointer =
    static_cast<BufferingConstraint *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for TAO::BufferingConstraintPolicy.

TAO::BufferingConstraintPolicy_ptr
TAO::Objref_Traits<TAO::BufferingConstraintPolicy>::duplicate (
    TAO::BufferingConstraintPolicy_ptr p
  )
{
  return TAO::BufferingConstraintPolicy::_duplicate (p);
}

void
TAO::Objref_Traits<TAO::BufferingConstraintPolicy>::release (
    TAO::BufferingConstraintPolicy_ptr p
  )
{
  CORBA::release (p);
}

TAO::BufferingConstraintPolicy_ptr
TAO::Objref_Traits<TAO::BufferingConstraintPolicy>::nil (void)
{
  return TAO::BufferingConstraintPolicy::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<TAO::BufferingConstraintPolicy>::marshal (
    TAO::BufferingConstraintPolicy_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

TAO::BufferingConstraintPolicy::BufferingConstraintPolicy (void)
{}

TAO::BufferingConstraintPolicy::~BufferingConstraintPolicy (void)
{}

TAO::BufferingConstraintPolicy_ptr
TAO::BufferingConstraintPolicy::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  return BufferingConstraintPolicy::_duplicate (
      dynamic_cast<BufferingConstraintPolicy_ptr> (_tao_objref)
    );
}

TAO::BufferingConstraintPolicy_ptr
TAO::BufferingConstraintPolicy::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  return BufferingConstraintPolicy::_duplicate (
      dynamic_cast<BufferingConstraintPolicy_ptr> (_tao_objref)
    );
}

TAO::BufferingConstraintPolicy_ptr
TAO::BufferingConstraintPolicy::_duplicate (BufferingConstraintPolicy_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
TAO::BufferingConstraintPolicy::_tao_release (BufferingConstraintPolicy_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
TAO::BufferingConstraintPolicy::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Policy:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:tao/TAO/BufferingConstraintPolicy:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* TAO::BufferingConstraintPolicy::_interface_repository_id (void) const
{
  return "IDL:tao/TAO/BufferingConstraintPolicy:1.0";
}

CORBA::Boolean
TAO::BufferingConstraintPolicy::marshal (TAO_OutputCDR &)
{
  return false;
}

// TAO_IDL - Generated from
// be\be_visitor_structure/cdr_op_cs.cpp:61

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO::BufferingConstraint &_tao_aggregate
  )
{
  return
    (strm << _tao_aggregate.mode) &&
    (strm << _tao_aggregate.timeout) &&
    (strm << _tao_aggregate.message_count) &&
    (strm << _tao_aggregate.message_bytes);
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TAO::BufferingConstraint &_tao_aggregate
  )
{
  return
    (strm >> _tao_aggregate.mode) &&
    (strm >> _tao_aggregate.timeout) &&
    (strm >> _tao_aggregate.message_count) &&
    (strm >> _tao_aggregate.message_bytes);
}

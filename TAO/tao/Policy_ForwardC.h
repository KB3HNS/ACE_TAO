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
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:151

#ifndef _TAO_IDL_ORIG_POLICY_FORWARDC_H_
#define _TAO_IDL_ORIG_POLICY_FORWARDC_H_

#include "ace/pre.h"
#include "tao/Sequence.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/CDR.h"
#include "tao/Objref_Varout_T.h"
#include "tao/Seq_VarOut_T.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO TAO_Export
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_module/module_ch.cpp:48

TAO_NAMESPACE  CORBA
{
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typedef/typedef_ch.cpp:333
  
  typedef CORBA::ULong PolicyType;
  typedef CORBA::ULong_out PolicyType_out;
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_PolicyType;
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:566
  
#if !defined (_CORBA_POLICY__ODDS_N_ENDS_CH_)
#define _CORBA_POLICY__ODDS_N_ENDS_CH_
  
  class Policy;
  typedef Policy *Policy_ptr;
  struct tao_Policy_life;
  typedef TAO_Objref_Var_T<Policy, tao_Policy_life> Policy_var;
  typedef TAO_Objref_Out_T<Policy, tao_Policy_life> Policy_out;
  
  struct TAO_Export tao_Policy_life
  {
    static Policy_ptr tao_duplicate (Policy_ptr);
    static void tao_release (Policy_ptr);
    static Policy_ptr tao_nil (void);
    static CORBA::Boolean tao_marshal (
        Policy_ptr,
        TAO_OutputCDR &
      );
  };
  
  struct TAO_Export tao_Policy_cast
  {
    static Policy_ptr tao_narrow (
        CORBA::Object_ptr
        ACE_ENV_ARG_DECL
      );
    static CORBA::Object_ptr tao_upcast (void *);
  };
  
#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/sequence_ch.cpp:75
  
  class PolicyList;
  
  typedef
    TAO_MngSeq_Var_T<
        PolicyList,
        TAO_Object_Manager<
            CORBA::Policy,
            CORBA::Policy_var,
            CORBA::tao_Policy_life
          >
      >
    PolicyList_var;
  
  typedef
    TAO_Seq_Out_T<
        PolicyList,
        PolicyList_var,
        TAO_Object_Manager<
            CORBA::Policy,
            CORBA::Policy_var,
            CORBA::tao_Policy_life
          >
      >
    PolicyList_out;
  
  class TAO_Export PolicyList
    : public
        TAO_Unbounded_Object_Sequence<
            CORBA::Policy,
            CORBA::Policy_var,
            CORBA::tao_Policy_life,
            CORBA::tao_Policy_cast
          >
  {
  public:
    PolicyList (void);
    PolicyList (CORBA::ULong max);
    PolicyList (
        CORBA::ULong max,
        CORBA::ULong length,
        Policy_ptr* buffer, 
        CORBA::Boolean release = 0
      );
    PolicyList (const PolicyList &);
    ~PolicyList (void);
    
    static void _tao_any_destructor (void *);
    
    typedef PolicyList_var _var_type;
  };
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_PolicyList;
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/sequence_ch.cpp:75
  
  class PolicyTypeSeq;
  
  typedef
    TAO_FixedSeq_Var_T<
        PolicyTypeSeq,
        CORBA::PolicyType
      >
    PolicyTypeSeq_var;
  
  typedef
    TAO_Seq_Out_T<
        PolicyTypeSeq,
        PolicyTypeSeq_var,
        CORBA::PolicyType
      >
    PolicyTypeSeq_out;
  
  class TAO_Export PolicyTypeSeq
    : public
        TAO_Unbounded_Sequence<
            CORBA::PolicyType
          >
  {
  public:
    PolicyTypeSeq (void);
    PolicyTypeSeq (CORBA::ULong max);
    PolicyTypeSeq (
        CORBA::ULong max,
        CORBA::ULong length,
        CORBA::ULong* buffer, 
        CORBA::Boolean release = 0
      );
    PolicyTypeSeq (const PolicyTypeSeq &);
    ~PolicyTypeSeq (void);
    
    static void _tao_any_destructor (void *);
    
    typedef PolicyTypeSeq_var _var_type;
  };
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_PolicyTypeSeq;
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_enum/enum_ch.cpp:57
  
  enum SetOverrideType
  {
    SET_OVERRIDE,
    ADD_OVERRIDE
  };
  
  typedef SetOverrideType &SetOverrideType_out;
  
  // TAO_IDL - Generated from
  // W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_SetOverrideType;

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_module/module_ch.cpp:67

}
TAO_NAMESPACE_CLOSE // module CORBA

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface_fwd/any_op_ch.cpp:65

TAO_Export void operator<<= (CORBA::Any &, CORBA::Policy_ptr); // copying
TAO_Export void operator<<= (CORBA::Any &, CORBA::Policy_ptr *); // non-copying
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA::Policy *&);

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const CORBA::PolicyList &); // copying version
TAO_Export void operator<<= (CORBA::Any &, CORBA::PolicyList*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA::PolicyList *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const CORBA::PolicyList *&);

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const CORBA::PolicyTypeSeq &); // copying version
TAO_Export void operator<<= (CORBA::Any &, CORBA::PolicyTypeSeq*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA::PolicyTypeSeq *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const CORBA::PolicyTypeSeq *&);

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_enum/any_op_ch.cpp:51

TAO_Export void operator<<= (CORBA::Any &, CORBA::SetOverrideType);
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, CORBA::SetOverrideType &);

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_root/cdr_op.cpp:48

#ifndef __ACE_INLINE__

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface_fwd/cdr_op_ch.cpp:66

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA::Policy_ptr );
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::Policy_ptr &);


// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/cdr_op_ch.cpp:57

#if !defined _TAO_CDR_OP_CORBA_PolicyList_H_
#define _TAO_CDR_OP_CORBA_PolicyList_H_

TAO_Export CORBA::Boolean operator<< (
    TAO_OutputCDR &,
    const CORBA::PolicyList &
  );
TAO_Export CORBA::Boolean operator>> (
    TAO_InputCDR &,
    CORBA::PolicyList &
  );

#endif /* _TAO_CDR_OP_CORBA_PolicyList_H_ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/cdr_op_ch.cpp:57

#if !defined _TAO_CDR_OP_CORBA_PolicyTypeSeq_H_
#define _TAO_CDR_OP_CORBA_PolicyTypeSeq_H_

TAO_Export CORBA::Boolean operator<< (
    TAO_OutputCDR &,
    const CORBA::PolicyTypeSeq &
  );
TAO_Export CORBA::Boolean operator>> (
    TAO_InputCDR &,
    CORBA::PolicyTypeSeq &
  );

#endif /* _TAO_CDR_OP_CORBA_PolicyTypeSeq_H_ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_enum/cdr_op_ch.cpp:50

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA::SetOverrideType &);
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::SetOverrideType &);

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_root/cdr_op.cpp:64

#endif /* __ACE_INLINE__ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:1018

#if defined (__ACE_INLINE__)
#include "Policy_ForwardC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#include "ace/post.h"
#endif /* ifndef */


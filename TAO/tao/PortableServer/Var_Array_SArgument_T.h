// -*- C++ -*-

//=============================================================================
/**
 *  @file    Var_Array_SArgument_T.h
 *
 *  $Id$
 *
 *  @authors Jeff Parsons, Carlos O'Ryan and Ossama Othman
 */
//=============================================================================

#ifndef TAO_VAR_ARRAY_SARGUMENT_T_H
#define TAO_VAR_ARRAY_SARGUMENT_T_H

#include /**/ "ace/pre.h"

#include "tao/Argument_T.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

namespace TAO
{
  /**
   * @class In_Var_Array_SArgument_T
   *
   * @brief IN skeleton argument of variable size element array.
   *
   */
  template<typename S, typename S_forany>
  class In_Var_Array_SArgument_T : public Const_Argument_T<S const &>
  {
  public:
    In_Var_Array_SArgument_T (void);

    virtual CORBA::Boolean demarshal (TAO_InputCDR &);
#if TAO_HAS_INTERCEPTORS == 1
    virtual void interceptor_param (Dynamic::Parameter &);
#endif /* TAO_HAS_INTERCEPTORS == 1 */
    virtual S const & arg (void) const;

  private:
    S x_;
  };

  /**
   * @class Inout_Var_Array_SArgument_T
   *
   * @brief INOUT skeleton argument of variable size element array.
   *
   */
  template<typename S, typename S_forany>
  class Inout_Var_Array_SArgument_T : public Mutable_Argument_T<S &>
  {
  public:
    Inout_Var_Array_SArgument_T (void);

    virtual CORBA::Boolean marshal (TAO_OutputCDR &);
    virtual CORBA::Boolean demarshal (TAO_InputCDR &);
#if TAO_HAS_INTERCEPTORS == 1
    virtual void interceptor_param (Dynamic::Parameter &);
#endif /* TAO_HAS_INTERCEPTORS == 1 */
    virtual S & arg (void);

  private:
    S x_;
  };

  /**
   * @class Out_Var_Array_SArgument_T
   *
   * @brief OUT skeleton argument of variable size element array.
   *
   */
  template<typename S_slice, typename S_var, typename S_forany>
  class Out_Var_Array_SArgument_T : public Mutable_Argument_T<S_slice *&>
  {
  public:
    Out_Var_Array_SArgument_T (void);

    virtual CORBA::Boolean marshal (TAO_OutputCDR &);
#if TAO_HAS_INTERCEPTORS == 1
    virtual void interceptor_param (Dynamic::Parameter &);
#endif /* TAO_HAS_INTERCEPTORS == 1 */
    virtual S_slice *& arg (void);

  private:
    S_var x_;
  };

  /**
   * @class Ret_Var_Array_SArgument_T
   *
   * @brief Skeleton value of variable size element array.
   *
   */
  template<typename S_slice, typename S_var, typename S_forany>
  class Ret_Var_Array_SArgument_T : public Mutable_Argument_T<S_slice *&>
  {
  public:
    Ret_Var_Array_SArgument_T (void);

    virtual CORBA::Boolean marshal (TAO_OutputCDR &);
#if TAO_HAS_INTERCEPTORS == 1
    virtual void interceptor_result (CORBA::Any *);
#endif /* TAO_HAS_INTERCEPTORS == 1 */
    virtual S_slice *& arg (void);

  private:
    S_var x_;
  };

  /**
   * @struct Var_Array_SArg_Traits_T
   *
   * @brief Argument traits of variable size element array.
   *
   */
  template<typename T,
           typename T_slice,
           typename T_var,
           typename T_out,
           typename T_forany>
  struct Var_Array_SArg_Traits_T
  {
    typedef T_slice *                                   ret_type;
    typedef const T                                     in_type;
    typedef T                                           inout_type;
    typedef T_out                                       out_type;

    typedef In_Var_Array_SArgument_T<T,T_forany>        in_arg_val;
    typedef Inout_Var_Array_SArgument_T<T,T_forany>     inout_arg_val;
    typedef Out_Var_Array_SArgument_T<T_slice,
                                      T_var,
                                      T_forany>         out_arg_val;
    typedef Ret_Var_Array_SArgument_T<T_slice,
                                      T_var,
                                      T_forany>         ret_val;

    typedef Const_Argument_T<T_slice const *>           in_arg_base;
    typedef Mutable_Argument_T<ret_type>                inout_arg_base;
    typedef Mutable_Argument_T<ret_type &>              out_arg_base;
    typedef Mutable_Argument_T<ret_type &>              ret_base;

  };
};

#if defined (__ACE_INLINE__)
#include "tao/PortableServer/Var_Array_SArgument_T.inl"
#endif /* __ACE_INLINE__ */

#if defined (ACE_TEMPLATES_REQUIRE_SOURCE)
#include "tao/PortableServer/Var_Array_SArgument_T.cpp"
#endif /* ACE_TEMPLATES_REQUIRE_SOURCE */

#if defined (ACE_TEMPLATES_REQUIRE_PRAGMA)
#pragma implementation ("Var_Array_SArgument_T.cpp")
#endif /* ACE_TEMPLATES_REQUIRE_PRAGMA */

#include /**/ "ace/post.h"

#endif /* TAO_VAR_ARRAY_SARGUMENT_T_H */

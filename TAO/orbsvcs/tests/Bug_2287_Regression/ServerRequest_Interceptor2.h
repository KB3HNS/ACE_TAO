// -*- C++ -*-

//=============================================================================
//=============================================================================

#ifndef TAO249_SERVER_REQUEST_INTERCEPTOR2_H
#define TAO249_SERVER_REQUEST_INTERCEPTOR2_H

#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */
#include "tao/LocalObject.h"
#include "tao/PortableInterceptorC.h"
#include "tao/ORB.h"
#include "tao/PI/PI.h"
#include "tao/PI_Server/PI_Server.h"
#include "tao/TimeBaseC.h"

class TAO249_ServerRequest_Interceptor2
: public virtual PortableInterceptor::ServerRequestInterceptor,
  public virtual ::CORBA::LocalObject
{
public:
  /// Constructor.
  TAO249_ServerRequest_Interceptor2 ();

  /// Destructor.
  ~TAO249_ServerRequest_Interceptor2 ();

  /**
   * @name Methods Required by the Server Request Interceptor
   * Interface
   *
   * These are methods that must be implemented since they are pure
   * virtual in the abstract base class.  They are the canonical
   * methods required for all server request interceptors.
   */
  //@{
  /// Return the name of this ServerRequestinterceptor.
  virtual char * name ();

  virtual void destroy ();

  virtual void receive_request_service_contexts (
    PortableInterceptor::ServerRequestInfo_ptr ri
    );

  virtual void receive_request (
      PortableInterceptor::ServerRequestInfo_ptr ri
      );

  virtual void send_reply (
      PortableInterceptor::ServerRequestInfo_ptr ri
      );

  virtual void send_exception (
      PortableInterceptor::ServerRequestInfo_ptr ri
      );

  virtual void send_other (
      PortableInterceptor::ServerRequestInfo_ptr ri
      );
  //@}

  CORBA::Object_var server_iogr_;

protected:
  TimeBase::TimeT get_now ();

private:
  CORBA::ORB_var orb_;

  CORBA::Boolean expired_;
};

#endif  /* TAO249_SERVER_REQUEST_INTERCEPTOR2_H */


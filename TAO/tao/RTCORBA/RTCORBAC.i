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
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_PRIORITYMODELPOLICY___CI_)
#define _RTCORBA_PRIORITYMODELPOLICY___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_THREADPOOLPOLICY___CI_)
#define _RTCORBA_THREADPOOLPOLICY___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_PROTOCOLPROPERTIES___CI_)
#define _RTCORBA_PROTOCOLPROPERTIES___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_SERVERPROTOCOLPOLICY___CI_)
#define _RTCORBA_SERVERPROTOCOLPOLICY___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_CLIENTPROTOCOLPOLICY___CI_)
#define _RTCORBA_CLIENTPROTOCOLPOLICY___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_PRIVATECONNECTIONPOLICY___CI_)
#define _RTCORBA_PRIVATECONNECTIONPOLICY___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_TCPPROTOCOLPROPERTIES___CI_)
#define _RTCORBA_TCPPROTOCOLPROPERTIES___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_GIOPPROTOCOLPROPERTIES___CI_)
#define _RTCORBA_GIOPPROTOCOLPROPERTIES___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_UNIXDOMAINPROTOCOLPROPERTIES___CI_)
#define _RTCORBA_UNIXDOMAINPROTOCOLPROPERTIES___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_SHAREDMEMORYPROTOCOLPROPERTIES___CI_)
#define _RTCORBA_SHAREDMEMORYPROTOCOLPROPERTIES___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_PRIORITYBANDEDCONNECTIONPOLICY___CI_)
#define _RTCORBA_PRIORITYBANDEDCONNECTIONPOLICY___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_CURRENT___CI_)
#define _RTCORBA_CURRENT___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_MUTEX___CI_)
#define _RTCORBA_MUTEX___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_RTCORBA_RTORB___CI_)
#define _RTCORBA_RTORB___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/cdr_op_ci.cpp:71

ACE_INLINE
CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const RTCORBA::ThreadpoolLane &_tao_aggregate
  )
{
  if (
    (strm << _tao_aggregate.lane_priority) &&
    (strm << _tao_aggregate.static_threads) &&
    (strm << _tao_aggregate.dynamic_threads)
   )
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

ACE_INLINE
CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    RTCORBA::ThreadpoolLane &_tao_aggregate
  )
{
  if (
    (strm >> _tao_aggregate.lane_priority) &&
    (strm >> _tao_aggregate.static_threads) &&
    (strm >> _tao_aggregate.dynamic_threads)
   )
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/cdr_op_ci.cpp:84

#if !defined _TAO_CDR_OP_RTCORBA_ThreadpoolLanes_I_
#define _TAO_CDR_OP_RTCORBA_ThreadpoolLanes_I_

CORBA::Boolean TAO_RTCORBA_Export operator<< (
    TAO_OutputCDR &,
    const RTCORBA::ThreadpoolLanes &
  );

CORBA::Boolean TAO_RTCORBA_Export operator>> (
    TAO_InputCDR &,
    RTCORBA::ThreadpoolLanes &
  );

#endif /* _TAO_CDR_OP_RTCORBA_ThreadpoolLanes_I_ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_enum/cdr_op_ci.cpp:51

ACE_INLINE
CORBA::Boolean operator<< (TAO_OutputCDR &strm, const RTCORBA::PriorityModel &_tao_enumval)
{
  CORBA::ULong _tao_temp = _tao_enumval;
  return strm << _tao_temp;
}

ACE_INLINE
CORBA::Boolean operator>> (TAO_InputCDR &strm, RTCORBA::PriorityModel &_tao_enumval)
{
  CORBA::ULong _tao_temp = 0;
  CORBA::Boolean _tao_result = strm >> _tao_temp;
  
  if (_tao_result == 1)
    {
      _tao_enumval = ACE_static_cast (RTCORBA::PriorityModel, _tao_temp);
    }
  
  return _tao_result;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/cdr_op_ci.cpp:71

ACE_INLINE
CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const RTCORBA::PriorityBand &_tao_aggregate
  )
{
  if (
    (strm << _tao_aggregate.low) &&
    (strm << _tao_aggregate.high)
   )
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

ACE_INLINE
CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    RTCORBA::PriorityBand &_tao_aggregate
  )
{
  if (
    (strm >> _tao_aggregate.low) &&
    (strm >> _tao_aggregate.high)
   )
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/cdr_op_ci.cpp:84

#if !defined _TAO_CDR_OP_RTCORBA_PriorityBands_I_
#define _TAO_CDR_OP_RTCORBA_PriorityBands_I_

CORBA::Boolean TAO_RTCORBA_Export operator<< (
    TAO_OutputCDR &,
    const RTCORBA::PriorityBands &
  );

CORBA::Boolean TAO_RTCORBA_Export operator>> (
    TAO_InputCDR &,
    RTCORBA::PriorityBands &
  );

#endif /* _TAO_CDR_OP_RTCORBA_PriorityBands_I_ */


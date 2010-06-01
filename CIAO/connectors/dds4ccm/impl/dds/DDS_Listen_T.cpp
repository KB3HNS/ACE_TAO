// -*- C++ -*-
// $Id$

#include "dds4ccm/impl/dds/DataListenerControl_T.h"
#include "dds4ccm/impl/dds/DataReaderListener_T.h"
#include "dds4ccm/impl/logger/Log_Macros.h"

template <typename DDS_TYPE, typename CCM_TYPE, bool FIXED>
DDS_Listen_T<DDS_TYPE, CCM_TYPE, FIXED>::DDS_Listen_T (void) :
  data_control_ (new CCM_DDS_DataListenerControl_T
    < ::CCM_DDS::CCM_DataListenerControl> ())
{
}

template <typename DDS_TYPE, typename CCM_TYPE, bool FIXED>
DDS_Listen_T<DDS_TYPE, CCM_TYPE, FIXED>::~DDS_Listen_T (void)
{
}

template <typename DDS_TYPE, typename CCM_TYPE, bool FIXED>
void
DDS_Listen_T<DDS_TYPE, CCM_TYPE, FIXED>::activate (
  typename CCM_TYPE::listener_type::_ptr_type listener,
  ::CCM_DDS::PortStatusListener_ptr status,
  ACE_Reactor* reactor)
{
  DDS4CCM_TRACE ("DDS_Listen_T<DDS_TYPE, CCM_TYPE, FIXED>::activate");
  try
    {
      if (::CORBA::is_nil (this->listener_.in ()))
        {
          ACE_NEW_THROW_EX (this->listener_,
                            DataReaderListener (
                              listener,
                              status,
                              this->data_control_.in (),
                              reactor),
                            CORBA::NO_MEMORY ());
        }

      this->data_reader_.set_listener (
        this->listener_.in (),
        DataReaderListener::get_mask (status));
    }
  catch (...)
    {
      DDS4CCM_ERROR (1, (LM_EMERGENCY, "DDS_Listen_T::activate: Caught unexpected exception.\n"));
      throw CORBA::INTERNAL ();
    }
}

template <typename DDS_TYPE, typename CCM_TYPE, bool FIXED>
::CCM_DDS::CCM_DataListenerControl_ptr
DDS_Listen_T<DDS_TYPE, CCM_TYPE, FIXED>::get_data_control (void)
{
  DDS4CCM_TRACE ("DDS_Listen_T<DDS_TYPE, CCM_TYPE, FIXED>::get_data_control");

  return ::CCM_DDS::CCM_DataListenerControl::_duplicate (this->data_control_.in ());
}


// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p15
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:152

#ifndef _TAO_IDL_TESTTYPESUPPORTC_NAJPE9_H_
#define _TAO_IDL_TESTTYPESUPPORTC_NAJPE9_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "TestIDL_Export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "dds/DCPS/ZeroCopyInfoSeq_T.h"
#include "dds/DCPS/ZeroCopySeq_T.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "TestC.h"
#include "dds/DdsDcpsInfrastructureC.h"
#include "dds/DdsDcpsPublicationC.h"
#include "dds/DdsDcpsSubscriptionExtC.h"
#include "dds/DdsDcpsTopicC.h"
#include "dds/DdsDcpsTypeSupportExtC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TestIDL_Export

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:38

namespace Test
{

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:102

  typedef ::TAO::DCPS::ZeroCopyDataSeq< Test::TestStruct, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> TestStructSeq;
  

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_interface.cpp:751

#if !defined (_TEST_TESTSTRUCTTYPESUPPORT__VAR_OUT_CH_)
#define _TEST_TESTSTRUCTTYPESUPPORT__VAR_OUT_CH_

  class TestStructTypeSupport;
  typedef TestStructTypeSupport *TestStructTypeSupport_ptr;

  typedef
    TAO_Objref_Var_T<
        TestStructTypeSupport
      >
    TestStructTypeSupport_var;
  
  typedef
    TAO_Objref_Out_T<
        TestStructTypeSupport
      >
    TestStructTypeSupport_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:43

  class TestIDL_Export TestStructTypeSupport
    : public virtual ::OpenDDS::DCPS::TypeSupport
  
  {
  public:

    // TAO_IDL - Generated from
    // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_type.cpp:307

    typedef TestStructTypeSupport_ptr _ptr_type;
    typedef TestStructTypeSupport_var _var_type;
    typedef TestStructTypeSupport_out _out_type;

    // The static operations.
    static TestStructTypeSupport_ptr _duplicate (TestStructTypeSupport_ptr obj);

    static void _tao_release (TestStructTypeSupport_ptr obj);

    static TestStructTypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
    static TestStructTypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static TestStructTypeSupport_ptr _nil (void);

    // TAO_IDL - Generated from
    // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    TestStructTypeSupport (void);

    

    virtual ~TestStructTypeSupport (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    TestStructTypeSupport (const TestStructTypeSupport &);

    void operator= (const TestStructTypeSupport &);
  };

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_interface.cpp:751

#if !defined (_TEST_TESTSTRUCTDATAWRITER__VAR_OUT_CH_)
#define _TEST_TESTSTRUCTDATAWRITER__VAR_OUT_CH_

  class TestStructDataWriter;
  typedef TestStructDataWriter *TestStructDataWriter_ptr;

  typedef
    TAO_Objref_Var_T<
        TestStructDataWriter
      >
    TestStructDataWriter_var;
  
  typedef
    TAO_Objref_Out_T<
        TestStructDataWriter
      >
    TestStructDataWriter_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:43

  class TestIDL_Export TestStructDataWriter
    : public virtual ::DDS::DataWriter
  
  {
  public:

    // TAO_IDL - Generated from
    // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_type.cpp:307

    typedef TestStructDataWriter_ptr _ptr_type;
    typedef TestStructDataWriter_var _var_type;
    typedef TestStructDataWriter_out _out_type;

    // The static operations.
    static TestStructDataWriter_ptr _duplicate (TestStructDataWriter_ptr obj);

    static void _tao_release (TestStructDataWriter_ptr obj);

    static TestStructDataWriter_ptr _narrow (::CORBA::Object_ptr obj);
    static TestStructDataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static TestStructDataWriter_ptr _nil (void);

    virtual ::DDS::InstanceHandle_t register_instance (
      const ::Test::TestStruct & instance) = 0;

    virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
      const ::Test::TestStruct & instance,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance (
      const ::Test::TestStruct & instance,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
      const ::Test::TestStruct & instance,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t write (
      const ::Test::TestStruct & instance_data,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t write_w_timestamp (
      const ::Test::TestStruct & instance_data,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t dispose (
      const ::Test::TestStruct & instance_data,
      ::DDS::InstanceHandle_t instance_handle) = 0;

    virtual ::DDS::ReturnCode_t dispose_w_timestamp (
      const ::Test::TestStruct & instance_data,
      ::DDS::InstanceHandle_t instance_handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::Test::TestStruct & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::Test::TestStruct & instance_data) = 0;

    // TAO_IDL - Generated from
    // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    TestStructDataWriter (void);

    

    virtual ~TestStructDataWriter (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    TestStructDataWriter (const TestStructDataWriter &);

    void operator= (const TestStructDataWriter &);
  };

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_interface.cpp:751

#if !defined (_TEST_TESTSTRUCTDATAREADER__VAR_OUT_CH_)
#define _TEST_TESTSTRUCTDATAREADER__VAR_OUT_CH_

  class TestStructDataReader;
  typedef TestStructDataReader *TestStructDataReader_ptr;

  typedef
    TAO_Objref_Var_T<
        TestStructDataReader
      >
    TestStructDataReader_var;
  
  typedef
    TAO_Objref_Out_T<
        TestStructDataReader
      >
    TestStructDataReader_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:43

  class TestIDL_Export TestStructDataReader
    : public virtual ::OpenDDS::DCPS::DataReaderEx
  
  {
  public:

    // TAO_IDL - Generated from
    // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_type.cpp:307

    typedef TestStructDataReader_ptr _ptr_type;
    typedef TestStructDataReader_var _var_type;
    typedef TestStructDataReader_out _out_type;

    // The static operations.
    static TestStructDataReader_ptr _duplicate (TestStructDataReader_ptr obj);

    static void _tao_release (TestStructDataReader_ptr obj);

    static TestStructDataReader_ptr _narrow (::CORBA::Object_ptr obj);
    static TestStructDataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static TestStructDataReader_ptr _nil (void);

    virtual ::DDS::ReturnCode_t read (
      ::Test::TestStructSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take (
      ::Test::TestStructSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_w_condition (
      ::Test::TestStructSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_w_condition (
      ::Test::TestStructSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_sample (
      ::Test::TestStruct & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t take_next_sample (
      ::Test::TestStruct & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t read_instance (
      ::Test::TestStructSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_instance (
      ::Test::TestStructSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_instance_w_condition (
      ::Test::TestStructSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_instance_w_condition (
      ::Test::TestStructSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance (
      ::Test::TestStructSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance (
      ::Test::TestStructSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
      ::Test::TestStructSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
      ::Test::TestStructSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t return_loan (
      ::Test::TestStructSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::Test::TestStruct & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::Test::TestStruct & instance_data) = 0;

    // TAO_IDL - Generated from
    // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    TestStructDataReader (void);

    

    virtual ~TestStructDataReader (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    TestStructDataReader (const TestStructDataReader &);

    void operator= (const TestStructDataReader &);
  };

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:67

} // module Test

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_TEST_TESTSTRUCTTYPESUPPORT__TRAITS_)
#define _TEST_TESTSTRUCTTYPESUPPORT__TRAITS_

  template<>
  struct TestIDL_Export Objref_Traits< ::Test::TestStructTypeSupport>
  {
    static ::Test::TestStructTypeSupport_ptr duplicate (
        ::Test::TestStructTypeSupport_ptr p);
    static void release (
        ::Test::TestStructTypeSupport_ptr p);
    static ::Test::TestStructTypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::TestStructTypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TEST_TESTSTRUCTDATAWRITER__TRAITS_)
#define _TEST_TESTSTRUCTDATAWRITER__TRAITS_

  template<>
  struct TestIDL_Export Objref_Traits< ::Test::TestStructDataWriter>
  {
    static ::Test::TestStructDataWriter_ptr duplicate (
        ::Test::TestStructDataWriter_ptr p);
    static void release (
        ::Test::TestStructDataWriter_ptr p);
    static ::Test::TestStructDataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::TestStructDataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TEST_TESTSTRUCTDATAREADER__TRAITS_)
#define _TEST_TESTSTRUCTDATAREADER__TRAITS_

  template<>
  struct TestIDL_Export Objref_Traits< ::Test::TestStructDataReader>
  {
    static ::Test::TestStructDataReader_ptr duplicate (
        ::Test::TestStructDataReader_ptr p);
    static void release (
        ::Test::TestStructDataReader_ptr p);
    static ::Test::TestStructDataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::TestStructDataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "TestTypeSupportC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

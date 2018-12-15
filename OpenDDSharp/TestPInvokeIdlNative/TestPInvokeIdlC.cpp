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
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:376


#include "TestPInvokeIdlC.h"
#include "tao/CDR.h"

#if !defined (__ACE_INLINE__)
#include "TestPInvokeIdlC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:73

#if !defined (_TEST_LONGLIST_CS_)
#define _TEST_LONGLIST_CS_

Test::LongList::LongList (void)
{}

Test::LongList::LongList (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Long
      > (max)
{}

Test::LongList::LongList (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Long * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Long
      >
    (max, length, buffer, release)
{}

Test::LongList::LongList (
    const LongList &seq)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Long
      > (seq)
{}

Test::LongList::~LongList (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:73

#if !defined (_TEST_STRINGLIST_CS_)
#define _TEST_STRINGLIST_CS_

Test::StringList::StringList (void)
{}

Test::StringList::StringList (
    ::CORBA::ULong max)
  : ::TAO::unbounded_basic_string_sequence<char> (max)
{}

Test::StringList::StringList (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Char * * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_basic_string_sequence<char>
    (max, length, buffer, release)
{}

Test::StringList::StringList (
    const StringList &seq)
  : ::TAO::unbounded_basic_string_sequence<char> (seq)
{}

Test::StringList::~StringList (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:73

#if !defined (_TEST_STRUCTLIST_CS_)
#define _TEST_STRUCTLIST_CS_

Test::StructList::StructList (void)
{}

Test::StructList::StructList (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        NestedTestStruct
      > (max)
{}

Test::StructList::StructList (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    Test::NestedTestStruct * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        NestedTestStruct
      >
    (max, length, buffer, release)
{}

Test::StructList::StructList (
    const StructList &seq)
  : ::TAO::unbounded_value_sequence<
        NestedTestStruct
      > (seq)
{}

Test::StructList::~StructList (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_cs.cpp:97

Test::ArrayLong_slice *
Test::ArrayLong_dup (const Test::ArrayLong_slice *_tao_src_array)
{
  Test::ArrayLong_slice *_tao_dup_array =
    Test::ArrayLong_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Test::ArrayLong_slice *> (0);
    }
  
  Test::ArrayLong_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Test::ArrayLong_slice *
Test::ArrayLong_alloc (void)
{
  Test::ArrayLong_slice *retval = 0;
  ACE_NEW_RETURN (retval, ::CORBA::Long[5], 0);
  return retval;
}

void
Test::ArrayLong_free (
    Test::ArrayLong_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Test::ArrayLong_copy (
    Test::ArrayLong_slice * _tao_to,
    const Test::ArrayLong_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 5; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_cs.cpp:97

Test::ArrayString_slice *
Test::ArrayString_dup (const Test::ArrayString_slice *_tao_src_array)
{
  Test::ArrayString_slice *_tao_dup_array =
    Test::ArrayString_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Test::ArrayString_slice *> (0);
    }
  
  Test::ArrayString_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Test::ArrayString_slice *
Test::ArrayString_alloc (void)
{
  Test::ArrayString_slice *retval = 0;
  ACE_NEW_RETURN (retval, ::TAO::String_Manager[10], 0);
  return retval;
}

void
Test::ArrayString_free (
    Test::ArrayString_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Test::ArrayString_copy (
    Test::ArrayString_slice * _tao_to,
    const Test::ArrayString_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 10; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_cs.cpp:97

Test::ArrayWString_slice *
Test::ArrayWString_dup (const Test::ArrayWString_slice *_tao_src_array)
{
  Test::ArrayWString_slice *_tao_dup_array =
    Test::ArrayWString_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Test::ArrayWString_slice *> (0);
    }
  
  Test::ArrayWString_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Test::ArrayWString_slice *
Test::ArrayWString_alloc (void)
{
  Test::ArrayWString_slice *retval = 0;
  ACE_NEW_RETURN (retval, ::TAO::WString_Manager[4], 0);
  return retval;
}

void
Test::ArrayWString_free (
    Test::ArrayWString_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Test::ArrayWString_copy (
    Test::ArrayWString_slice * _tao_to,
    const Test::ArrayWString_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 4; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_cs.cpp:97

Test::ArrayStruct_slice *
Test::ArrayStruct_dup (const Test::ArrayStruct_slice *_tao_src_array)
{
  Test::ArrayStruct_slice *_tao_dup_array =
    Test::ArrayStruct_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Test::ArrayStruct_slice *> (0);
    }
  
  Test::ArrayStruct_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Test::ArrayStruct_slice *
Test::ArrayStruct_alloc (void)
{
  Test::ArrayStruct_slice *retval = 0;
  ACE_NEW_RETURN (retval, Test::NestedTestStruct[5], 0);
  return retval;
}

void
Test::ArrayStruct_free (
    Test::ArrayStruct_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Test::ArrayStruct_copy (
    Test::ArrayStruct_slice * _tao_to,
    const Test::ArrayStruct_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 5; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_cs.cpp:97

Test::MultiArrayLong_slice *
Test::MultiArrayLong_dup (const Test::MultiArrayLong_slice *_tao_src_array)
{
  Test::MultiArrayLong_slice *_tao_dup_array =
    Test::MultiArrayLong_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Test::MultiArrayLong_slice *> (0);
    }
  
  Test::MultiArrayLong_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Test::MultiArrayLong_slice *
Test::MultiArrayLong_alloc (void)
{
  Test::MultiArrayLong_slice *retval = 0;
  ACE_NEW_RETURN (retval, ::CORBA::Long[3][4][2], 0);
  return retval;
}

void
Test::MultiArrayLong_free (
    Test::MultiArrayLong_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Test::MultiArrayLong_copy (
    Test::MultiArrayLong_slice * _tao_to,
    const Test::MultiArrayLong_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 3; ++i0)
    {
      for ( ::CORBA::ULong i1 = 0; i1 < 4; ++i1)
        {
          for ( ::CORBA::ULong i2 = 0; i2 < 2; ++i2)
            {
              _tao_to[i0][i1][i2] = _tao_from[i0][i1][i2];
            }
        }
    }
}

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::NestedTestStruct &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.Id) &&
    (strm << _tao_aggregate.Message.in ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::NestedTestStruct &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.Id) &&
    (strm >> _tao_aggregate.Message.out ());
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Test_LongList_CPP_
#define _TAO_CDR_OP_Test_LongList_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::LongList &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::LongList &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Test_LongList_CPP_ */

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Test_StringList_CPP_
#define _TAO_CDR_OP_Test_StringList_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::StringList &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::StringList &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Test_StringList_CPP_ */

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Test_StructList_CPP_
#define _TAO_CDR_OP_Test_StructList_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::StructList &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::StructList &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Test_StructList_CPP_ */

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::ArrayLong_forany &_tao_array)
{
  return
    strm.write_long_array (
        reinterpret_cast <const ACE_CDR::Long *> (_tao_array.in ()),
        5);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::ArrayLong_forany &_tao_array)
{
  return
    strm.read_long_array (
        reinterpret_cast <ACE_CDR::Long *> (_tao_array.out ()),
        5);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::ArrayString_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 10 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm << _tao_array [i0].in ());
    }

  return _tao_marshal_flag;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::ArrayString_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 10 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm >> _tao_array [i0].out ());
    }

  return _tao_marshal_flag;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::ArrayWString_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 4 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm << _tao_array [i0].in ());
    }

  return _tao_marshal_flag;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::ArrayWString_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 4 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm >> _tao_array [i0].out ());
    }

  return _tao_marshal_flag;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::ArrayStruct_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 5 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm << _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::ArrayStruct_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 5 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm >> _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::MultiArrayLong_forany &_tao_array)
{
  return
    strm.write_long_array (
        reinterpret_cast <const ACE_CDR::Long *> (_tao_array.in ()),
        3*4*2);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::MultiArrayLong_forany &_tao_array)
{
  return
    strm.read_long_array (
        reinterpret_cast <ACE_CDR::Long *> (_tao_array.out ()),
        3*4*2);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::BasicTestStruct &_tao_aggregate)
{
  Test::ArrayLong_forany _tao_aggregate_LongArray
      #if defined __IBMCPP__ && __IBMCPP__ <= 800
      ((Test::ArrayLong_slice*) (
      #else
      (const_cast<
          Test::ArrayLong_slice*> (
      #endif
          _tao_aggregate.LongArray
        )
    );
  Test::ArrayString_forany _tao_aggregate_StringArray
      #if defined __IBMCPP__ && __IBMCPP__ <= 800
      ((Test::ArrayString_slice*) (
      #else
      (const_cast<
          Test::ArrayString_slice*> (
      #endif
          _tao_aggregate.StringArray
        )
    );
  Test::ArrayWString_forany _tao_aggregate_WStringArray
      #if defined __IBMCPP__ && __IBMCPP__ <= 800
      ((Test::ArrayWString_slice*) (
      #else
      (const_cast<
          Test::ArrayWString_slice*> (
      #endif
          _tao_aggregate.WStringArray
        )
    );
  Test::ArrayStruct_forany _tao_aggregate_StructArray
      #if defined __IBMCPP__ && __IBMCPP__ <= 800
      ((Test::ArrayStruct_slice*) (
      #else
      (const_cast<
          Test::ArrayStruct_slice*> (
      #endif
          _tao_aggregate.StructArray
        )
    );
  Test::MultiArrayLong_forany _tao_aggregate_LongMultiArray
      #if defined __IBMCPP__ && __IBMCPP__ <= 800
      ((Test::MultiArrayLong_slice*) (
      #else
      (const_cast<
          Test::MultiArrayLong_slice*> (
      #endif
          _tao_aggregate.LongMultiArray
        )
    );
  return
    (strm << _tao_aggregate.Id) &&
    (strm << _tao_aggregate.Message.in ()) &&
    (strm << _tao_aggregate.WMessage.in ()) &&
    (strm << _tao_aggregate.LongSequence) &&
    (strm << _tao_aggregate.StringSequence) &&
    (strm << _tao_aggregate_LongArray) &&
    (strm << _tao_aggregate_StringArray) &&
    (strm << _tao_aggregate_WStringArray) &&
    (strm << _tao_aggregate.StructTest) &&
    (strm << _tao_aggregate.StructSequence) &&
    (strm << _tao_aggregate_StructArray) &&
    (strm << _tao_aggregate_LongMultiArray);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::BasicTestStruct &_tao_aggregate)
{
  Test::ArrayLong_forany _tao_aggregate_LongArray
      #if defined __IBMCPP__ && __IBMCPP__ <= 800
      ((Test::ArrayLong_slice*) (
      #else
      (const_cast<
          Test::ArrayLong_slice*> (
      #endif
          _tao_aggregate.LongArray
        )
    );
  Test::ArrayString_forany _tao_aggregate_StringArray
      #if defined __IBMCPP__ && __IBMCPP__ <= 800
      ((Test::ArrayString_slice*) (
      #else
      (const_cast<
          Test::ArrayString_slice*> (
      #endif
          _tao_aggregate.StringArray
        )
    );
  Test::ArrayWString_forany _tao_aggregate_WStringArray
      #if defined __IBMCPP__ && __IBMCPP__ <= 800
      ((Test::ArrayWString_slice*) (
      #else
      (const_cast<
          Test::ArrayWString_slice*> (
      #endif
          _tao_aggregate.WStringArray
        )
    );
  Test::ArrayStruct_forany _tao_aggregate_StructArray
      #if defined __IBMCPP__ && __IBMCPP__ <= 800
      ((Test::ArrayStruct_slice*) (
      #else
      (const_cast<
          Test::ArrayStruct_slice*> (
      #endif
          _tao_aggregate.StructArray
        )
    );
  Test::MultiArrayLong_forany _tao_aggregate_LongMultiArray
      #if defined __IBMCPP__ && __IBMCPP__ <= 800
      ((Test::MultiArrayLong_slice*) (
      #else
      (const_cast<
          Test::MultiArrayLong_slice*> (
      #endif
          _tao_aggregate.LongMultiArray
        )
    );
  return
    (strm >> _tao_aggregate.Id) &&
    (strm >> _tao_aggregate.Message.out ()) &&
    (strm >> _tao_aggregate.WMessage.out ()) &&
    (strm >> _tao_aggregate.LongSequence) &&
    (strm >> _tao_aggregate.StringSequence) &&
    (strm >> _tao_aggregate_LongArray) &&
    (strm >> _tao_aggregate_StringArray) &&
    (strm >> _tao_aggregate_WStringArray) &&
    (strm >> _tao_aggregate.StructTest) &&
    (strm >> _tao_aggregate.StructSequence) &&
    (strm >> _tao_aggregate_StructArray) &&
    (strm >> _tao_aggregate_LongMultiArray);
}

TAO_END_VERSIONED_NAMESPACE_DECL




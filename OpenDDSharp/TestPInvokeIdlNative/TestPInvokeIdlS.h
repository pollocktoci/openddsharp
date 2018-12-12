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
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:461

#ifndef _TAO_IDL_TESTPINVOKEIDLS_VUXBKM_H_
#define _TAO_IDL_TESTPINVOKEIDLS_VUXBKM_H_

#include /**/ "ace/pre.h"

#include "TestPInvokeIdlC.h"
#include "tao/BooleanSeqS.h"
#include "tao/CharSeqS.h"
#include "tao/DoubleSeqS.h"
#include "tao/FloatSeqS.h"
#include "tao/LongDoubleSeqS.h"
#include "tao/LongSeqS.h"
#include "tao/OctetSeqS.h"
#include "tao/ShortSeqS.h"
#include "tao/StringSeqS.h"
#include "tao/ULongSeqS.h"
#include "tao/UShortSeqS.h"
#include "tao/WCharSeqS.h"
#include "tao/WStringSeqS.h"
#include "tao/LongLongSeqS.h"
#include "tao/ULongLongSeqS.h"
#include "tao/PolicyS.h"
#include "tao/Policy_ManagerS.h"
#include "tao/Policy_CurrentS.h"
#include "tao/ServicesS.h"
#include "tao/ParameterModeS.h"
#include "tao/orb_typesS.h"
#include "tao/Typecode_typesS.h"
#include "tao/WrongTransactionS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Fixed_Array_SArgument_T.h"
#include "tao/PortableServer/Var_Array_SArgument_T.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Test::NestedTestStruct>
    : public
        Var_Size_SArg_Traits_T<
            ::Test::NestedTestStruct,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Test::LongList>
    : public
        Var_Size_SArg_Traits_T<
            ::Test::LongList,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Test::StringList>
    : public
        Var_Size_SArg_Traits_T<
            ::Test::StringList,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Test::StructList>
    : public
        Var_Size_SArg_Traits_T<
            ::Test::StructList,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class SArg_Traits< ::Test::ArrayLong_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::Test::ArrayLong_var,
            ::Test::ArrayLong_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class SArg_Traits< ::Test::ArrayString_tag>
    : public
        Var_Array_SArg_Traits_T<
            ::Test::ArrayString_out,
            ::Test::ArrayString_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class SArg_Traits< ::Test::ArrayWString_tag>
    : public
        Var_Array_SArg_Traits_T<
            ::Test::ArrayWString_out,
            ::Test::ArrayWString_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class SArg_Traits< ::Test::ArrayStruct_tag>
    : public
        Var_Array_SArg_Traits_T<
            ::Test::ArrayStruct_out,
            ::Test::ArrayStruct_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Test::BasicTestStruct>
    : public
        Var_Size_SArg_Traits_T<
            ::Test::BasicTestStruct,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_sh.cpp:38

namespace POA_Test
{
  

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_sh.cpp:69

} // module Test

#include /**/ "ace/post.h"

#endif /* ifndef */


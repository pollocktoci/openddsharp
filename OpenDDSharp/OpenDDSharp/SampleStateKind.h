#pragma once

#pragma unmanaged 
#include <dds\DdsDcpsInfrastructureC.h>
#pragma managed

#include "SampleStateMask.h"

namespace OpenDDSharp {
	namespace DDS {
		public value struct SampleStateKind {

		public:
			static const SampleStateKind ReadSampleState = ::DDS::READ_SAMPLE_STATE;
			static const SampleStateKind NotReadSampleState = ::DDS::NOT_READ_SAMPLE_STATE;			

		private:
			System::UInt32 m_value;

		internal:
			SampleStateKind(System::UInt32 value);

		public:
			static operator System::UInt32(SampleStateKind self) {
				return self.m_value;
			}

			static operator SampleStateKind(System::UInt32 value) {
				SampleStateKind r(value);
				return r;
			}

			static operator SampleStateMask(SampleStateKind value) {
				SampleStateMask r(value);
				return r;
			}

			static SampleStateMask operator  | (SampleStateKind a, SampleStateKind b) {
				return static_cast<SampleStateMask>(static_cast<unsigned int>(a) | static_cast<unsigned int>(b));
			}

		};
	}
};



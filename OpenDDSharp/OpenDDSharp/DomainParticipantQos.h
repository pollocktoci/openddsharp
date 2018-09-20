/*********************************************************************
This file is part of OpenDDSharp.

OpenDDSharp is a .NET wrapper for OpenDDS
Copyright (C) 2018 Jose Morato

OpenDDSharp is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

OpenDDSharp is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with OpenDDSharp. If not, see <http://www.gnu.org/licenses/>.
**********************************************************************/
#pragma once

#pragma unmanaged 
#include <dds\DdsDcpsCoreC.h>
#pragma managed

#include "UserDataQosPolicy.h"
#include "EntityFactoryQosPolicy.h"

namespace OpenDDSharp {
	namespace DDS {

		/// <summary>
		/// Holds the <see cref="DomainParticipant" /> Quality of Service policies.
		/// </summary>
		public ref class DomainParticipantQos {		

		private:
			OpenDDSharp::DDS::UserDataQosPolicy^ user_data;
			OpenDDSharp::DDS::EntityFactoryQosPolicy^ entity_factory;
	
		public:
			/// <summary>
			/// Gets the user data QoS policy.
			/// </summary>
			property OpenDDSharp::DDS::UserDataQosPolicy^ UserData {
				OpenDDSharp::DDS::UserDataQosPolicy^ get();				
			};

			/// <summary>
			/// Gets the entity factory QoS policy.
			/// </summary>
			property OpenDDSharp::DDS::EntityFactoryQosPolicy^ EntityFactory {
				OpenDDSharp::DDS::EntityFactoryQosPolicy^ get();			
			};

		public:
			/// <summary>
			/// Creates a new instance of <see cref="DomainParticipantQos" />.
			/// </summary>
			DomainParticipantQos();						

		internal:
			::DDS::DomainParticipantQos ToNative();
			void FromNative(::DDS::DomainParticipantQos qos);

		};
	};
};

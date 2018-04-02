#pragma once

#pragma unmanaged 
#include <dds\DdsDcpsCoreC.h>
#pragma managed

#include "BuiltinTopicKey.h"
#include "DurabilityQosPolicy.h"
#include "DeadlineQosPolicy.h"
#include "LatencyBudgetQosPolicy.h"
#include "LivelinessQosPolicy.h"
#include "ReliabilityQosPolicy.h"
#include "OwnershipQosPolicy.h"
#include "DestinationOrderQosPolicy.h"
#include "UserDataQosPolicy.h"
#include "TimeBasedFilterQosPolicy.h"
#include "PresentationQosPolicy.h"
#include "PartitionQosPolicy.h"
#include "TopicDataQosPolicy.h"
#include "GroupDataQosPolicy.h"

#include <vcclr.h>
#include <msclr/marshal.h>

namespace OpenDDSharp {
	namespace DDS {
		public value struct SubscriptionBuiltinTopicData {

		private:
			OpenDDSharp::DDS::BuiltinTopicKey key;
			OpenDDSharp::DDS::BuiltinTopicKey participant_key;
			System::String^ topic_name;
			System::String^ type_name;
			OpenDDSharp::DDS::DurabilityQosPolicy^ durability;
			OpenDDSharp::DDS::DeadlineQosPolicy^ deadline;
			OpenDDSharp::DDS::LatencyBudgetQosPolicy^ latency_budget;
			OpenDDSharp::DDS::LivelinessQosPolicy^ liveliness;
			OpenDDSharp::DDS::ReliabilityQosPolicy^ reliability;
			OpenDDSharp::DDS::OwnershipQosPolicy^ ownership;
			OpenDDSharp::DDS::DestinationOrderQosPolicy^ destination_order;
			OpenDDSharp::DDS::UserDataQosPolicy^ user_data;
			OpenDDSharp::DDS::TimeBasedFilterQosPolicy^ time_based_filter;
			OpenDDSharp::DDS::PresentationQosPolicy^ presentation;
			OpenDDSharp::DDS::PartitionQosPolicy^ partition;
			OpenDDSharp::DDS::TopicDataQosPolicy^ topic_data;
			OpenDDSharp::DDS::GroupDataQosPolicy^ group_data;

		public:
			property OpenDDSharp::DDS::BuiltinTopicKey Key {
				OpenDDSharp::DDS::BuiltinTopicKey get();
			};

			property OpenDDSharp::DDS::BuiltinTopicKey ParticipantKey {
				OpenDDSharp::DDS::BuiltinTopicKey get();
			};

			property System::String^ TopicName {
				System::String^ get();
			};

			property System::String^ TypeName {
				System::String^ get();
			};

			property OpenDDSharp::DDS::DurabilityQosPolicy^ Durability {
				OpenDDSharp::DDS::DurabilityQosPolicy^ get();
			};

			property OpenDDSharp::DDS::DeadlineQosPolicy^ Deadline {
				OpenDDSharp::DDS::DeadlineQosPolicy^ get();
			};

			property OpenDDSharp::DDS::LatencyBudgetQosPolicy^ LatencyBudget {
				OpenDDSharp::DDS::LatencyBudgetQosPolicy^ get();
			};


			property OpenDDSharp::DDS::LivelinessQosPolicy^ Liveliness {
				OpenDDSharp::DDS::LivelinessQosPolicy^ get();
			};

			property OpenDDSharp::DDS::ReliabilityQosPolicy^ Reliability {
				OpenDDSharp::DDS::ReliabilityQosPolicy^ get();
			};

			property OpenDDSharp::DDS::OwnershipQosPolicy^ Ownership {
				OpenDDSharp::DDS::OwnershipQosPolicy^ get();
			};

			property OpenDDSharp::DDS::DestinationOrderQosPolicy^ DestinationOrder {
				OpenDDSharp::DDS::DestinationOrderQosPolicy^ get();
			};

			property OpenDDSharp::DDS::UserDataQosPolicy^ UserData {
				OpenDDSharp::DDS::UserDataQosPolicy^ get();
			};

			property OpenDDSharp::DDS::TimeBasedFilterQosPolicy^ TimeBasedFilter {
				OpenDDSharp::DDS::TimeBasedFilterQosPolicy^ get();
			};

			property OpenDDSharp::DDS::PresentationQosPolicy^ Presentation {
				OpenDDSharp::DDS::PresentationQosPolicy^ get();
			};

			property OpenDDSharp::DDS::PartitionQosPolicy^ Partition {
				OpenDDSharp::DDS::PartitionQosPolicy^ get();
			};

			property OpenDDSharp::DDS::TopicDataQosPolicy^ TopicData {
				OpenDDSharp::DDS::TopicDataQosPolicy^ get();
			};

			property OpenDDSharp::DDS::GroupDataQosPolicy^ GroupData {
				OpenDDSharp::DDS::GroupDataQosPolicy^ get();
			};

		internal:
			void FromNative(::DDS::SubscriptionBuiltinTopicData native);
		};
	};
};

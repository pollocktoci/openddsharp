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
#include "DomainParticipant.h"

::DDS::Entity_ptr DomainParticipant_NarrowBase(::DDS::DomainParticipant_ptr dp) {
	return static_cast<::DDS::Entity_ptr>(dp);
}

::DDS::Publisher_ptr DomainParticipant_CreatePublisher(::DDS::DomainParticipant_ptr dp, 
                                                       PublisherQosWrapper qos, 
                                                       ::DDS::PublisherListener_ptr a_listener, 
                                                       ::DDS::StatusMask mask) {
    return dp->create_publisher(qos, NULL, ::OpenDDS::DCPS::DEFAULT_STATUS_MASK);
}

::DDS::Subscriber_ptr DomainParticipant_CreateSubscriber(::DDS::DomainParticipant_ptr dp,
                                                         SubscriberQosWrapper qos,
                                                         ::DDS::SubscriberListener_ptr a_listener,
                                                         ::DDS::StatusMask mask) {
    return dp->create_subscriber(qos, NULL, ::OpenDDS::DCPS::DEFAULT_STATUS_MASK);
}

::DDS::Topic_ptr DomainParticipant_CreateTopic(::DDS::DomainParticipant_ptr dp,
                                               const char * topic_name,
                                               const char * type_name,
                                               TopicQosWrapper qos,
                                               ::DDS::TopicListener_ptr a_listener,
                                               ::DDS::StatusMask mask) {
    return dp->create_topic(topic_name, type_name, qos, NULL, ::OpenDDS::DCPS::DEFAULT_STATUS_MASK);
}

::DDS::ReturnCode_t DomainParticipant_GetQos(::DDS::DomainParticipant_ptr dp, DomainParticipantQosWrapper& qos_wrapper) {
    ::DDS::DomainParticipantQos qos_native;
    ::DDS::ReturnCode_t ret = dp->get_qos(qos_native);

    if (ret == ::DDS::RETCODE_OK) {
        qos_wrapper = qos_native;
    }

    return ret;
}

::DDS::ReturnCode_t DomainParticipant_SetQos(::DDS::DomainParticipant_ptr dp, DomainParticipantQosWrapper qos_wrapper) {
    return dp->set_qos(qos_wrapper);
}

::DDS::ReturnCode_t DomainParticipant_DeleteContainedEntities(::DDS::DomainParticipant_ptr dp)
{
	return dp->delete_contained_entities();
}

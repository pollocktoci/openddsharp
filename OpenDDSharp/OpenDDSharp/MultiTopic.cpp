#include "MultiTopic.h"
#include "DomainParticipant.h"

OpenDDSharp::DDS::MultiTopic::MultiTopic(::DDS::MultiTopic_ptr native) : TopicDescription(native) {
	impl_entity = native;
}

System::String^ OpenDDSharp::DDS::MultiTopic::SubscriptionExpression::get() {
	return GetSubscriptionExpression();
}

System::String^ OpenDDSharp::DDS::MultiTopic::GetSubscriptionExpression() {
	msclr::interop::marshal_context context;

	const char* expression = impl_entity->get_subscription_expression();
	if (expression != NULL) {
		return context.marshal_as<System::String^>(expression);
	}
	else {
		return nullptr;
	}
}

OpenDDSharp::DDS::ReturnCode OpenDDSharp::DDS::MultiTopic::GetExpressionParameters(ICollection<System::String^>^ params) {
	if (params == nullptr) {
		return OpenDDSharp::DDS::ReturnCode::BadParameter;
	}
	params->Clear();

	msclr::interop::marshal_context context;

	::DDS::StringSeq seq;
	::DDS::ReturnCode_t ret = impl_entity->get_expression_parameters(seq);

	if (ret == ::DDS::RETCODE_OK) {
		for (unsigned int i = 0; i < seq.length(); i++) {
			const char * s = seq[i];
			params->Add(context.marshal_as<System::String^>(s));
		}
	}

	return (OpenDDSharp::DDS::ReturnCode)ret;
}

OpenDDSharp::DDS::ReturnCode OpenDDSharp::DDS::MultiTopic::SetExpressionParameters(ICollection<System::String^>^ params) {
	if (params == nullptr) {
		return OpenDDSharp::DDS::ReturnCode::BadParameter;
	}

	msclr::interop::marshal_context context;

	::DDS::StringSeq seq;
	seq.length(params->Count);

	int i = 0;
	for each (System::String^ s in params)
	{
		seq[i] = context.marshal_as<const char *>(s);
		i++;
	}

	return (OpenDDSharp::DDS::ReturnCode)impl_entity->set_expression_parameters(seq);
}
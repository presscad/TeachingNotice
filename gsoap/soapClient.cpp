/* soapClient.cpp
   Generated by gSOAP 2.8.79 for soapAPI.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.8.79 2019-05-07 03:06:05 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__add(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2, int *result)
{	if (soap_send_ns__add(soap, soap_endpoint, soap_action, num1, num2) || soap_recv_ns__add(soap, result))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send_ns__add(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2)
{	struct ns__add soap_tmp_ns__add;
	soap_tmp_ns__add.num1 = num1;
	soap_tmp_ns__add.num2 = num2;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_ns__add(soap, &soap_tmp_ns__add);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__add(soap, &soap_tmp_ns__add, "ns:add", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__add(soap, &soap_tmp_ns__add, "ns:add", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv_ns__add(struct soap *soap, int *result)
{
	struct ns__addResponse *soap_tmp_ns__addResponse;
	if (!result)
		return soap_closesock(soap);
	soap_default_int(soap, result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_ns__addResponse = soap_get_ns__addResponse(soap, NULL, "ns:addResponse", NULL);
	if (!soap_tmp_ns__addResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (result && soap_tmp_ns__addResponse->result)
		*result = *soap_tmp_ns__addResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__sub(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2, int *result)
{	if (soap_send_ns__sub(soap, soap_endpoint, soap_action, num1, num2) || soap_recv_ns__sub(soap, result))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send_ns__sub(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2)
{	struct ns__sub soap_tmp_ns__sub;
	soap_tmp_ns__sub.num1 = num1;
	soap_tmp_ns__sub.num2 = num2;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_ns__sub(soap, &soap_tmp_ns__sub);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__sub(soap, &soap_tmp_ns__sub, "ns:sub", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__sub(soap, &soap_tmp_ns__sub, "ns:sub", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv_ns__sub(struct soap *soap, int *result)
{
	struct ns__subResponse *soap_tmp_ns__subResponse;
	if (!result)
		return soap_closesock(soap);
	soap_default_int(soap, result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_ns__subResponse = soap_get_ns__subResponse(soap, NULL, "ns:subResponse", NULL);
	if (!soap_tmp_ns__subResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (result && soap_tmp_ns__subResponse->result)
		*result = *soap_tmp_ns__subResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__mult(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2, int *result)
{	if (soap_send_ns__mult(soap, soap_endpoint, soap_action, num1, num2) || soap_recv_ns__mult(soap, result))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send_ns__mult(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2)
{	struct ns__mult soap_tmp_ns__mult;
	soap_tmp_ns__mult.num1 = num1;
	soap_tmp_ns__mult.num2 = num2;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_ns__mult(soap, &soap_tmp_ns__mult);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__mult(soap, &soap_tmp_ns__mult, "ns:mult", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__mult(soap, &soap_tmp_ns__mult, "ns:mult", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv_ns__mult(struct soap *soap, int *result)
{
	struct ns__multResponse *soap_tmp_ns__multResponse;
	if (!result)
		return soap_closesock(soap);
	soap_default_int(soap, result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_ns__multResponse = soap_get_ns__multResponse(soap, NULL, "ns:multResponse", NULL);
	if (!soap_tmp_ns__multResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (result && soap_tmp_ns__multResponse->result)
		*result = *soap_tmp_ns__multResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__divid(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2, int *result)
{	if (soap_send_ns__divid(soap, soap_endpoint, soap_action, num1, num2) || soap_recv_ns__divid(soap, result))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send_ns__divid(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2)
{	struct ns__divid soap_tmp_ns__divid;
	soap_tmp_ns__divid.num1 = num1;
	soap_tmp_ns__divid.num2 = num2;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_ns__divid(soap, &soap_tmp_ns__divid);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__divid(soap, &soap_tmp_ns__divid, "ns:divid", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__divid(soap, &soap_tmp_ns__divid, "ns:divid", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv_ns__divid(struct soap *soap, int *result)
{
	struct ns__dividResponse *soap_tmp_ns__dividResponse;
	if (!result)
		return soap_closesock(soap);
	soap_default_int(soap, result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_ns__dividResponse = soap_get_ns__dividResponse(soap, NULL, "ns:dividResponse", NULL);
	if (!soap_tmp_ns__dividResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (result && soap_tmp_ns__dividResponse->result)
		*result = *soap_tmp_ns__dividResponse->result;
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.cpp */

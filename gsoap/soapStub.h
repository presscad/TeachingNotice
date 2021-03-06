/* soapStub.h
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


#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20879
# error "GSOAP VERSION 20879 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes, Structs and Unions                                                *
 *                                                                            *
\******************************************************************************/

struct ns__addResponse;	/* soapAPI.h:4 */
struct ns__add;	/* soapAPI.h:4 */
struct ns__subResponse;	/* soapAPI.h:5 */
struct ns__sub;	/* soapAPI.h:5 */
struct ns__multResponse;	/* soapAPI.h:6 */
struct ns__mult;	/* soapAPI.h:6 */
struct ns__dividResponse;	/* soapAPI.h:7 */
struct ns__divid;	/* soapAPI.h:7 */

/* soapAPI.h:4 */
#ifndef SOAP_TYPE_ns__addResponse
#define SOAP_TYPE_ns__addResponse (9)
/* complex XML schema type 'ns:addResponse': */
struct SOAP_CMAC ns__addResponse {
      public:
        /** Optional element 'result' of XML schema type 'xsd:int' */
        int *result;
      public:
        /** Return unique type id SOAP_TYPE_ns__addResponse */
        long soap_type() const { return SOAP_TYPE_ns__addResponse; }
        /** Constructor with member initializations */
        ns__addResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__addResponse * SOAP_FMAC2 soap_instantiate_ns__addResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soapAPI.h:4 */
#ifndef SOAP_TYPE_ns__add
#define SOAP_TYPE_ns__add (10)
/* complex XML schema type 'ns:add': */
struct SOAP_CMAC ns__add {
      public:
        /** Required element 'num1' of XML schema type 'xsd:int' */
        int num1;
        /** Required element 'num2' of XML schema type 'xsd:int' */
        int num2;
      public:
        /** Return unique type id SOAP_TYPE_ns__add */
        long soap_type() const { return SOAP_TYPE_ns__add; }
        /** Constructor with member initializations */
        ns__add() : num1(), num2() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__add * SOAP_FMAC2 soap_instantiate_ns__add(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soapAPI.h:5 */
#ifndef SOAP_TYPE_ns__subResponse
#define SOAP_TYPE_ns__subResponse (12)
/* complex XML schema type 'ns:subResponse': */
struct SOAP_CMAC ns__subResponse {
      public:
        /** Optional element 'result' of XML schema type 'xsd:int' */
        int *result;
      public:
        /** Return unique type id SOAP_TYPE_ns__subResponse */
        long soap_type() const { return SOAP_TYPE_ns__subResponse; }
        /** Constructor with member initializations */
        ns__subResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__subResponse * SOAP_FMAC2 soap_instantiate_ns__subResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soapAPI.h:5 */
#ifndef SOAP_TYPE_ns__sub
#define SOAP_TYPE_ns__sub (13)
/* complex XML schema type 'ns:sub': */
struct SOAP_CMAC ns__sub {
      public:
        /** Required element 'num1' of XML schema type 'xsd:int' */
        int num1;
        /** Required element 'num2' of XML schema type 'xsd:int' */
        int num2;
      public:
        /** Return unique type id SOAP_TYPE_ns__sub */
        long soap_type() const { return SOAP_TYPE_ns__sub; }
        /** Constructor with member initializations */
        ns__sub() : num1(), num2() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__sub * SOAP_FMAC2 soap_instantiate_ns__sub(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soapAPI.h:6 */
#ifndef SOAP_TYPE_ns__multResponse
#define SOAP_TYPE_ns__multResponse (15)
/* complex XML schema type 'ns:multResponse': */
struct SOAP_CMAC ns__multResponse {
      public:
        /** Optional element 'result' of XML schema type 'xsd:int' */
        int *result;
      public:
        /** Return unique type id SOAP_TYPE_ns__multResponse */
        long soap_type() const { return SOAP_TYPE_ns__multResponse; }
        /** Constructor with member initializations */
        ns__multResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__multResponse * SOAP_FMAC2 soap_instantiate_ns__multResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soapAPI.h:6 */
#ifndef SOAP_TYPE_ns__mult
#define SOAP_TYPE_ns__mult (16)
/* complex XML schema type 'ns:mult': */
struct SOAP_CMAC ns__mult {
      public:
        /** Required element 'num1' of XML schema type 'xsd:int' */
        int num1;
        /** Required element 'num2' of XML schema type 'xsd:int' */
        int num2;
      public:
        /** Return unique type id SOAP_TYPE_ns__mult */
        long soap_type() const { return SOAP_TYPE_ns__mult; }
        /** Constructor with member initializations */
        ns__mult() : num1(), num2() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__mult * SOAP_FMAC2 soap_instantiate_ns__mult(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soapAPI.h:7 */
#ifndef SOAP_TYPE_ns__dividResponse
#define SOAP_TYPE_ns__dividResponse (18)
/* complex XML schema type 'ns:dividResponse': */
struct SOAP_CMAC ns__dividResponse {
      public:
        /** Optional element 'result' of XML schema type 'xsd:int' */
        int *result;
      public:
        /** Return unique type id SOAP_TYPE_ns__dividResponse */
        long soap_type() const { return SOAP_TYPE_ns__dividResponse; }
        /** Constructor with member initializations */
        ns__dividResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__dividResponse * SOAP_FMAC2 soap_instantiate_ns__dividResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soapAPI.h:7 */
#ifndef SOAP_TYPE_ns__divid
#define SOAP_TYPE_ns__divid (19)
/* complex XML schema type 'ns:divid': */
struct SOAP_CMAC ns__divid {
      public:
        /** Required element 'num1' of XML schema type 'xsd:int' */
        int num1;
        /** Required element 'num2' of XML schema type 'xsd:int' */
        int num2;
      public:
        /** Return unique type id SOAP_TYPE_ns__divid */
        long soap_type() const { return SOAP_TYPE_ns__divid; }
        /** Constructor with member initializations */
        ns__divid() : num1(), num2() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__divid * SOAP_FMAC2 soap_instantiate_ns__divid(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soapAPI.h:8 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (20)
/* SOAP_ENV__Header: */
struct SOAP_CMAC SOAP_ENV__Header {
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Header */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Header; }
        /** Constructor with member initializations */
        SOAP_ENV__Header() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* soapAPI.h:8 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (21)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_CMAC SOAP_ENV__Code {
      public:
        /** Optional element 'SOAP-ENV:Value' of XML schema type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XML schema type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Code */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Code; }
        /** Constructor with member initializations */
        SOAP_ENV__Code() : SOAP_ENV__Value(), SOAP_ENV__Subcode() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* soapAPI.h:8 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (23)
/* SOAP_ENV__Detail: */
struct SOAP_CMAC SOAP_ENV__Detail {
      public:
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_<typename> assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Detail */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Detail; }
        /** Constructor with member initializations */
        SOAP_ENV__Detail() : __any(), __type(), fault() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* soapAPI.h:8 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (26)
/* SOAP_ENV__Reason: */
struct SOAP_CMAC SOAP_ENV__Reason {
      public:
        /** Optional element 'SOAP-ENV:Text' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Text;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Reason */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Reason; }
        /** Constructor with member initializations */
        SOAP_ENV__Reason() : SOAP_ENV__Text() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* soapAPI.h:8 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (27)
/* SOAP_ENV__Fault: */
struct SOAP_CMAC SOAP_ENV__Fault {
      public:
        /** Optional element 'faultcode' of XML schema type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XML schema type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XML schema type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XML schema type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XML schema type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XML schema type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XML schema type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Fault */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Fault; }
        /** Constructor with member initializations */
        SOAP_ENV__Fault() : faultcode(), faultstring(), faultactor(), detail(), SOAP_ENV__Code(), SOAP_ENV__Reason(), SOAP_ENV__Node(), SOAP_ENV__Role(), SOAP_ENV__Detail() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* (built-in):0 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
typedef char *_XML;
#endif

/* (built-in):0 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
typedef char *_QName;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (27)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (26)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (23)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (21)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (20)
#endif

/* struct ns__divid has binding name 'ns__divid' for type 'ns:divid' */
#ifndef SOAP_TYPE_ns__divid
#define SOAP_TYPE_ns__divid (19)
#endif

/* struct ns__dividResponse has binding name 'ns__dividResponse' for type 'ns:dividResponse' */
#ifndef SOAP_TYPE_ns__dividResponse
#define SOAP_TYPE_ns__dividResponse (18)
#endif

/* struct ns__mult has binding name 'ns__mult' for type 'ns:mult' */
#ifndef SOAP_TYPE_ns__mult
#define SOAP_TYPE_ns__mult (16)
#endif

/* struct ns__multResponse has binding name 'ns__multResponse' for type 'ns:multResponse' */
#ifndef SOAP_TYPE_ns__multResponse
#define SOAP_TYPE_ns__multResponse (15)
#endif

/* struct ns__sub has binding name 'ns__sub' for type 'ns:sub' */
#ifndef SOAP_TYPE_ns__sub
#define SOAP_TYPE_ns__sub (13)
#endif

/* struct ns__subResponse has binding name 'ns__subResponse' for type 'ns:subResponse' */
#ifndef SOAP_TYPE_ns__subResponse
#define SOAP_TYPE_ns__subResponse (12)
#endif

/* struct ns__add has binding name 'ns__add' for type 'ns:add' */
#ifndef SOAP_TYPE_ns__add
#define SOAP_TYPE_ns__add (10)
#endif

/* struct ns__addResponse has binding name 'ns__addResponse' for type 'ns:addResponse' */
#ifndef SOAP_TYPE_ns__addResponse
#define SOAP_TYPE_ns__addResponse (9)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (29)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (28)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (22)
#endif

/* int * has binding name 'PointerToint' for type 'xsd:int' */
#ifndef SOAP_TYPE_PointerToint
#define SOAP_TYPE_PointerToint (7)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Client-Side Call Stub Functions                                            *
 *                                                                            *
\******************************************************************************/

    
    /** Web service synchronous operation 'soap_call_ns__add' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__add(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2, int *result);
    /** Web service asynchronous operation 'soap_send_ns__add' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_send_ns__add(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2);
    /** Web service asynchronous operation 'soap_recv_ns__add' to receive a response message from the connected endpoint, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_recv_ns__add(struct soap *soap, int *result);
    
    /** Web service synchronous operation 'soap_call_ns__sub' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__sub(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2, int *result);
    /** Web service asynchronous operation 'soap_send_ns__sub' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_send_ns__sub(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2);
    /** Web service asynchronous operation 'soap_recv_ns__sub' to receive a response message from the connected endpoint, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_recv_ns__sub(struct soap *soap, int *result);
    
    /** Web service synchronous operation 'soap_call_ns__mult' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__mult(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2, int *result);
    /** Web service asynchronous operation 'soap_send_ns__mult' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_send_ns__mult(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2);
    /** Web service asynchronous operation 'soap_recv_ns__mult' to receive a response message from the connected endpoint, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_recv_ns__mult(struct soap *soap, int *result);
    
    /** Web service synchronous operation 'soap_call_ns__divid' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__divid(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2, int *result);
    /** Web service asynchronous operation 'soap_send_ns__divid' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_send_ns__divid(struct soap *soap, const char *soap_endpoint, const char *soap_action, int num1, int num2);
    /** Web service asynchronous operation 'soap_recv_ns__divid' to receive a response message from the connected endpoint, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_recv_ns__divid(struct soap *soap, int *result);

/******************************************************************************\
 *                                                                            *
 * Server-Side Operations                                                     *
 *                                                                            *
\******************************************************************************/

    /** Web service operation 'ns__add' implementation, should return SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 ns__add(struct soap*, int num1, int num2, int *result);
    /** Web service operation 'ns__sub' implementation, should return SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 ns__sub(struct soap*, int num1, int num2, int *result);
    /** Web service operation 'ns__mult' implementation, should return SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 ns__mult(struct soap*, int num1, int num2, int *result);
    /** Web service operation 'ns__divid' implementation, should return SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 ns__divid(struct soap*, int num1, int num2, int *result);

/******************************************************************************\
 *                                                                            *
 * Server-Side Skeletons to Invoke Service Operations                         *
 *                                                                            *
\******************************************************************************/

extern "C" SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap*);

extern "C" SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__add(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__sub(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__mult(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__divid(struct soap*);

#endif

/* End of soapStub.h */

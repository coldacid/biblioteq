/** \file ../include/yaz/diagsrw.h
    \brief Diagnostics: Generated by csvtodiag.tcl from ./srw.csv */

#include <yaz/yconfig.h>

#ifndef YAZ_DIAG_srw_H
#define YAZ_DIAG_srw_H
YAZ_BEGIN_CDECL
YAZ_EXPORT const char *yaz_diag_srw_str(int code);
#define YAZ_SRW_PERMANENT_SYSTEM_ERROR 1
#define YAZ_SRW_SYSTEM_TEMPORARILY_UNAVAILABLE 2
#define YAZ_SRW_AUTHENTICATION_ERROR 3
#define YAZ_SRW_UNSUPP_OPERATION 4
#define YAZ_SRW_UNSUPP_VERSION 5
#define YAZ_SRW_UNSUPP_PARAMETER_VALUE 6
#define YAZ_SRW_MANDATORY_PARAMETER_NOT_SUPPLIED 7
#define YAZ_SRW_UNSUPP_PARAMETER 8
#define YAZ_SRW_QUERY_SYNTAX_ERROR 10
#define YAZ_SRW_UNSUPP_QUERY_TYPE 11
#define YAZ_SRW_TOO_MANY_CHARS_IN_QUERY 12
#define YAZ_SRW_INVALID_OR_UNSUPP_USE_OF_PARENTHESES 13
#define YAZ_SRW_INVALID_OR_UNSUPP_USE_OF_QUOTES 14
#define YAZ_SRW_UNSUPP_CONTEXT_SET 15
#define YAZ_SRW_UNSUPP_INDEX 16
#define YAZ_SRW_UNSUPP_COMBI_OF_INDEX_AND_CONTEXT_SET 17
#define YAZ_SRW_UNSUPP_COMBI_OF_INDEXES 18
#define YAZ_SRW_UNSUPP_RELATION 19
#define YAZ_SRW_UNSUPP_RELATION_MODIFIER 20
#define YAZ_SRW_UNSUPP_COMBI_OF_RELATION_MODIFIERS 21
#define YAZ_SRW_UNSUPP_COMBI_OF_RELATION_AND_INDEX 22
#define YAZ_SRW_TOO_MANY_CHARS_IN_TERM 23
#define YAZ_SRW_UNSUPP_COMBI_OF_RELATION_AND_TERM 24
#define YAZ_SRW_SPECIAL_CHARS_NOT_QUOTED_IN_TERM 25
#define YAZ_SRW_NON_SPECIAL_CHAR_ESCAPED_IN_TERM 26
#define YAZ_SRW_EMPTY_TERM_UNSUPP 27
#define YAZ_SRW_MASKING_CHAR_UNSUPP 28
#define YAZ_SRW_MASKED_WORDS_TOO_SHORT 29
#define YAZ_SRW_TOO_MANY_MASKING_CHARS_IN_TERM 30
#define YAZ_SRW_ANCHORING_CHAR_UNSUPP 31
#define YAZ_SRW_ANCHORING_CHAR_IN_UNSUPP_POSITION 32
#define YAZ_SRW_COMBI_OF_PROX_ADJACENCY_AND_MASKING_CHARS_UNSUPP 33
#define YAZ_SRW_COMBI_OF_PROX_ADJACENCY_AND_ANCHORING_CHARS_UNSUPP 34
#define YAZ_SRW_TERM_CONTAINS_ONLY_STOPWORDS 35
#define YAZ_SRW_TERM_IN_INVALID_FORMAT_FOR_INDEX_OR_RELATION 36
#define YAZ_SRW_UNSUPP_BOOLEAN_OPERATOR 37
#define YAZ_SRW_TOO_MANY_BOOLEAN_OPERATORS_IN_QUERY 38
#define YAZ_SRW_PROX_UNSUPP 39
#define YAZ_SRW_UNSUPP_PROX_RELATION 40
#define YAZ_SRW_UNSUPP_PROX_DISTANCE 41
#define YAZ_SRW_UNSUPP_PROX_UNIT 42
#define YAZ_SRW_UNSUPP_PROX_ORDERING 43
#define YAZ_SRW_UNSUPP_COMBI_OF_PROX_MODIFIERS 44
#define YAZ_SRW_PREFIX_ASSIGNED_TO_MULTIPLE_IDENTIFIERS 45
#define YAZ_SRW_UNSUPP_BOOLEAN_MODIFIER 46
#define YAZ_SRW_CANNOT_PROCESS_QUERY_REASON_UNKNOWN 47
#define YAZ_SRW_QUERY_FEATURE_UNSUPP 48
#define YAZ_SRW_MASKING_CHAR_IN_UNSUPP_POSITION 49
#define YAZ_SRW_RESULT_SETS_UNSUPP 50
#define YAZ_SRW_RESULT_SET_DOES_NOT_EXIST 51
#define YAZ_SRW_RESULT_SET_TEMPORARILY_UNAVAILABLE 52
#define YAZ_SRW_RESULT_SETS_ONLY_SUPPORTED_FOR_RETRIEVAL 53
#define YAZ_SRW_RETRIEVAL_MAY_ONLY_OCCUR_FROM_AN_EXISTING_RESULT_SET 54
#define YAZ_SRW_COMBI_OF_RESULT_SETS_WITH_SEARCH_TERMS_UNSUPP 55
#define YAZ_SRW_ONLY_COMBI_OF_SINGLE_RESULT_SET_WITH_SEARCH_TERMS_ 56
#define YAZ_SRW_RESULT_SET_CREATED_BUT_NO_RECORDS_AVAILABLE 57
#define YAZ_SRW_RESULT_SET_CREATED_WITH_UNPREDICTABLE_PARTIAL_RESULTS_ 58
#define YAZ_SRW_RESULT_SET_CREATED_WITH_VALID_PARTIAL_RESULTS_AVAILABLE 59
#define YAZ_SRW_RESULT_SET_NOT_CREATED_TOO_MANY_MATCHING_RECORDS 60
#define YAZ_SRW_FIRST_RECORD_POSITION_OUT_OF_RANGE 61
#define YAZ_SRW_NEGATIVE_NUMBER_OF_RECORDS_REQUESTED 62
#define YAZ_SRW_SYSTEM_ERROR_IN_RETRIEVING_RECORDS 63
#define YAZ_SRW_RECORD_TEMPORARILY_UNAVAILABLE 64
#define YAZ_SRW_RECORD_DOES_NOT_EXIST 65
#define YAZ_SRW_UNKNOWN_SCHEMA_FOR_RETRIEVAL 66
#define YAZ_SRW_RECORD_NOT_AVAILABLE_IN_THIS_SCHEMA 67
#define YAZ_SRW_NOT_AUTHORISED_TO_SEND_RECORD 68
#define YAZ_SRW_NOT_AUTHORISED_TO_SEND_RECORD_IN_THIS_SCHEMA 69
#define YAZ_SRW_RECORD_TOO_LARGE_TO_SEND 70
#define YAZ_SRW_UNSUPP_RECORD_PACKING 71
#define YAZ_SRW_XPATH_RETRIEVAL_UNSUPP 72
#define YAZ_SRW_XPATH_EXPRESSION_CONTAINS_UNSUPP_FEATURE 73
#define YAZ_SRW_UNABLE_TO_EVALUATE_XPATH_EXPRESSION 74
#define YAZ_SRW_SORT_UNSUPP 80
#define YAZ_SRW_UNSUPP_SORT_TYPE 81
#define YAZ_SRW_UNSUPP_SORT_SEQUENCE 82
#define YAZ_SRW_TOO_MANY_RECORDS_TO_SORT 83
#define YAZ_SRW_TOO_MANY_SORT_KEYS_TO_SORT 84
#define YAZ_SRW_DUP_SORT_KEYS 85
#define YAZ_SRW_CANNOT_SORT_INCOMPATIBLE_RECORD_FORMATS 86
#define YAZ_SRW_UNSUPP_SCHEMA_FOR_SORT 87
#define YAZ_SRW_UNSUPP_PATH_FOR_SORT 88
#define YAZ_SRW_PATH_UNSUPP_FOR_SCHEMA 89
#define YAZ_SRW_UNSUPP_DIRECTION_VALUE 90
#define YAZ_SRW_UNSUPP_CASE_VALUE 91
#define YAZ_SRW_UNSUPP_MISSING_VALUE_ACTION 92
#define YAZ_SRW_SORT_ENDED_DUE_TO_MISSING_VALUE 93
#define YAZ_SRW_EXPLAIN_UNSUPP 100
#define YAZ_SRW_EXPLAIN_REQUEST_TYPE_UNSUPP_SOAP_VS_GET_ 101
#define YAZ_SRW_EXPLAIN_RECORD_TEMPORARILY_UNAVAILABLE 102
#define YAZ_SRW_STYLESHEETS_UNSUPP 110
#define YAZ_SRW_UNSUPP_STYLESHEET 111
#define YAZ_SRW_RESPONSE_POSITION_OUT_OF_RANGE 120
#define YAZ_SRW_TOO_MANY_TERMS_REQUESTED 121
#define YAZ_SRW_DATABASE_DOES_NOT_EXIST 235
#define YAZ_SRW_ACCESS_TO_SPECIFIED_DATABASE_DENIED 236
#define YAZ_SRW_INIT_AC_MAXIMUM_NUMBER_OF_SIMULTANEOUS_SESSIONS_FOR_ 1015
#define YAZ_SRW_PROXY_FAILURE 1074

YAZ_END_CDECL
#endif


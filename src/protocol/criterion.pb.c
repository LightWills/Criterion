/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.5-dev at Fri Dec 11 16:22:10 2015. */

#include "criterion.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

const int32_t criterion_protocol_msg_version_default = 1;


const pb_field_t criterion_protocol_birth_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_pre_init_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_pre_test_fields[2] = {
    PB_FIELD(  1, INT64   , OPTIONAL, STATIC  , FIRST, criterion_protocol_pre_test, timestamp, timestamp, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_post_test_fields[2] = {
    PB_FIELD(  1, INT64   , OPTIONAL, STATIC  , FIRST, criterion_protocol_post_test, timestamp, timestamp, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_post_fini_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_death_fields[3] = {
    PB_FIELD(  1, UENUM   , OPTIONAL, STATIC  , FIRST, criterion_protocol_death, result, result, 0),
    PB_FIELD(  2, INT64   , OPTIONAL, STATIC  , OTHER, criterion_protocol_death, status, result, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_assert_fields[5] = {
    PB_FIELD(  1, STRING  , REQUIRED, POINTER , FIRST, criterion_protocol_assert, message, message, 0),
    PB_FIELD(  2, BOOL    , REQUIRED, STATIC  , OTHER, criterion_protocol_assert, passed, message, 0),
    PB_FIELD(  3, STRING  , OPTIONAL, POINTER , OTHER, criterion_protocol_assert, file, passed, 0),
    PB_FIELD(  4, INT64   , OPTIONAL, STATIC  , OTHER, criterion_protocol_assert, line, file, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_submessage_fields[8] = {
    PB_FIELD(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, criterion_protocol_submessage, birth, birth, &criterion_protocol_birth_fields),
    PB_FIELD(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, criterion_protocol_submessage, pre_init, birth, &criterion_protocol_pre_init_fields),
    PB_FIELD(  3, MESSAGE , OPTIONAL, STATIC  , OTHER, criterion_protocol_submessage, pre_test, pre_init, &criterion_protocol_pre_test_fields),
    PB_FIELD(  4, MESSAGE , OPTIONAL, STATIC  , OTHER, criterion_protocol_submessage, post_test, pre_test, &criterion_protocol_post_test_fields),
    PB_FIELD(  5, MESSAGE , OPTIONAL, STATIC  , OTHER, criterion_protocol_submessage, post_fini, post_test, &criterion_protocol_post_fini_fields),
    PB_FIELD(  6, MESSAGE , OPTIONAL, STATIC  , OTHER, criterion_protocol_submessage, death, post_fini, &criterion_protocol_death_fields),
    PB_FIELD(  7, MESSAGE , OPTIONAL, STATIC  , OTHER, criterion_protocol_submessage, assert, death, &criterion_protocol_assert_fields),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_msg_fields[4] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, criterion_protocol_msg, version, version, &criterion_protocol_msg_version_default),
    PB_ONEOF_FIELD(id,   2, INT64   , ONEOF, STATIC  , OTHER, criterion_protocol_msg, pid, version, 0),
    PB_FIELD( 16, MESSAGE , REQUIRED, STATIC  , OTHER, criterion_protocol_msg, data, id.pid, &criterion_protocol_submessage_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(criterion_protocol_submessage, birth) < 65536 && pb_membersize(criterion_protocol_submessage, pre_init) < 65536 && pb_membersize(criterion_protocol_submessage, pre_test) < 65536 && pb_membersize(criterion_protocol_submessage, post_test) < 65536 && pb_membersize(criterion_protocol_submessage, post_fini) < 65536 && pb_membersize(criterion_protocol_submessage, death) < 65536 && pb_membersize(criterion_protocol_submessage, assert) < 65536 && pb_membersize(criterion_protocol_submessage, birth) < 65536 && pb_membersize(criterion_protocol_submessage, pre_init) < 65536 && pb_membersize(criterion_protocol_submessage, pre_test) < 65536 && pb_membersize(criterion_protocol_submessage, post_test) < 65536 && pb_membersize(criterion_protocol_submessage, post_fini) < 65536 && pb_membersize(criterion_protocol_submessage, death) < 65536 && pb_membersize(criterion_protocol_submessage, assert) < 65536 && pb_membersize(criterion_protocol_msg, data) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_criterion_protocol_birth_criterion_protocol_pre_init_criterion_protocol_pre_test_criterion_protocol_post_test_criterion_protocol_post_fini_criterion_protocol_death_criterion_protocol_assert_criterion_protocol_submessage_criterion_protocol_msg)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(criterion_protocol_submessage, birth) < 256 && pb_membersize(criterion_protocol_submessage, pre_init) < 256 && pb_membersize(criterion_protocol_submessage, pre_test) < 256 && pb_membersize(criterion_protocol_submessage, post_test) < 256 && pb_membersize(criterion_protocol_submessage, post_fini) < 256 && pb_membersize(criterion_protocol_submessage, death) < 256 && pb_membersize(criterion_protocol_submessage, assert) < 256 && pb_membersize(criterion_protocol_submessage, birth) < 256 && pb_membersize(criterion_protocol_submessage, pre_init) < 256 && pb_membersize(criterion_protocol_submessage, pre_test) < 256 && pb_membersize(criterion_protocol_submessage, post_test) < 256 && pb_membersize(criterion_protocol_submessage, post_fini) < 256 && pb_membersize(criterion_protocol_submessage, death) < 256 && pb_membersize(criterion_protocol_submessage, assert) < 256 && pb_membersize(criterion_protocol_msg, data) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_criterion_protocol_birth_criterion_protocol_pre_init_criterion_protocol_pre_test_criterion_protocol_post_test_criterion_protocol_post_fini_criterion_protocol_death_criterion_protocol_assert_criterion_protocol_submessage_criterion_protocol_msg)
#endif



/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_osmformat_2eproto__INCLUDED
#define PROTOBUF_C_osmformat_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _HeaderBlock HeaderBlock;
typedef struct _HeaderBBox HeaderBBox;
typedef struct _PrimitiveBlock PrimitiveBlock;
typedef struct _PrimitiveGroup PrimitiveGroup;
typedef struct _StringTable StringTable;
typedef struct _Info Info;
typedef struct _DenseInfo DenseInfo;
typedef struct _ChangeSet ChangeSet;
typedef struct _Node Node;
typedef struct _DenseNodes DenseNodes;
typedef struct _Way Way;
typedef struct _Relation Relation;


/* --- enums --- */

typedef enum _Relation__MemberType {
  RELATION__MEMBER_TYPE__NODE = 0,
  RELATION__MEMBER_TYPE__WAY = 1,
  RELATION__MEMBER_TYPE__RELATION = 2
} Relation__MemberType;

/* --- messages --- */

struct  _HeaderBlock
{
  ProtobufCMessage base;
  HeaderBBox *bbox;
  size_t n_required_features;
  char **required_features;
  size_t n_optional_features;
  char **optional_features;
  char *writingprogram;
  char *source;
};
#define HEADER_BLOCK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&header_block__descriptor) \
    , NULL, 0,NULL, 0,NULL, NULL, NULL }


struct  _HeaderBBox
{
  ProtobufCMessage base;
  int64_t left;
  int64_t right;
  int64_t top;
  int64_t bottom;
};
#define HEADER_BBOX__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&header_bbox__descriptor) \
    , 0, 0, 0, 0 }


struct  _PrimitiveBlock
{
  ProtobufCMessage base;
  StringTable *stringtable;
  size_t n_primitivegroup;
  PrimitiveGroup **primitivegroup;
  protobuf_c_boolean has_granularity;
  int32_t granularity;
  protobuf_c_boolean has_lat_offset;
  int64_t lat_offset;
  protobuf_c_boolean has_lon_offset;
  int64_t lon_offset;
  protobuf_c_boolean has_date_granularity;
  int32_t date_granularity;
};
#define PRIMITIVE_BLOCK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&primitive_block__descriptor) \
    , NULL, 0,NULL, 0,100, 0,0, 0,0, 0,1000 }


struct  _PrimitiveGroup
{
  ProtobufCMessage base;
  size_t n_nodes;
  Node **nodes;
  DenseNodes *dense;
  size_t n_ways;
  Way **ways;
  size_t n_relations;
  Relation **relations;
  size_t n_changesets;
  ChangeSet **changesets;
};
#define PRIMITIVE_GROUP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&primitive_group__descriptor) \
    , 0,NULL, NULL, 0,NULL, 0,NULL, 0,NULL }


struct  _StringTable
{
  ProtobufCMessage base;
  size_t n_s;
  ProtobufCBinaryData *s;
};
#define STRING_TABLE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&string_table__descriptor) \
    , 0,NULL }


struct  _Info
{
  ProtobufCMessage base;
  protobuf_c_boolean has_version;
  int32_t version;
  protobuf_c_boolean has_timestamp;
  int32_t timestamp;
  protobuf_c_boolean has_changeset;
  int64_t changeset;
  protobuf_c_boolean has_uid;
  int32_t uid;
  protobuf_c_boolean has_user_sid;
  int32_t user_sid;
};
#define INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&info__descriptor) \
    , 0,-1, 0,0, 0,0, 0,0, 0,0 }


struct  _DenseInfo
{
  ProtobufCMessage base;
  size_t n_version;
  int32_t *version;
  size_t n_timestamp;
  int64_t *timestamp;
  size_t n_changeset;
  int64_t *changeset;
  size_t n_uid;
  int32_t *uid;
  size_t n_user_sid;
  int32_t *user_sid;
};
#define DENSE_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dense_info__descriptor) \
    , 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL }


struct  _ChangeSet
{
  ProtobufCMessage base;
  int64_t id;
  size_t n_keys;
  uint32_t *keys;
  size_t n_vals;
  uint32_t *vals;
  Info *info;
  int64_t created_at;
  protobuf_c_boolean has_closetime_delta;
  int64_t closetime_delta;
  protobuf_c_boolean open;
  HeaderBBox *bbox;
};
#define CHANGE_SET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&change_set__descriptor) \
    , 0, 0,NULL, 0,NULL, NULL, 0, 0,0, 0, NULL }


struct  _Node
{
  ProtobufCMessage base;
  int64_t id;
  size_t n_keys;
  uint32_t *keys;
  size_t n_vals;
  uint32_t *vals;
  Info *info;
  int64_t lat;
  int64_t lon;
};
#define NODE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&node__descriptor) \
    , 0, 0,NULL, 0,NULL, NULL, 0, 0 }


struct  _DenseNodes
{
  ProtobufCMessage base;
  size_t n_id;
  int64_t *id;
  DenseInfo *denseinfo;
  size_t n_lat;
  int64_t *lat;
  size_t n_lon;
  int64_t *lon;
  size_t n_keys_vals;
  int32_t *keys_vals;
};
#define DENSE_NODES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dense_nodes__descriptor) \
    , 0,NULL, NULL, 0,NULL, 0,NULL, 0,NULL }


struct  _Way
{
  ProtobufCMessage base;
  int64_t id;
  size_t n_keys;
  uint32_t *keys;
  size_t n_vals;
  uint32_t *vals;
  Info *info;
  size_t n_refs;
  int64_t *refs;
};
#define WAY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&way__descriptor) \
    , 0, 0,NULL, 0,NULL, NULL, 0,NULL }


struct  _Relation
{
  ProtobufCMessage base;
  int64_t id;
  size_t n_keys;
  uint32_t *keys;
  size_t n_vals;
  uint32_t *vals;
  Info *info;
  size_t n_roles_sid;
  int32_t *roles_sid;
  size_t n_memids;
  int64_t *memids;
  size_t n_types;
  Relation__MemberType *types;
};
#define RELATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&relation__descriptor) \
    , 0, 0,NULL, 0,NULL, NULL, 0,NULL, 0,NULL, 0,NULL }


/* HeaderBlock methods */
void   header_block__init
                     (HeaderBlock         *message);
size_t header_block__get_packed_size
                     (const HeaderBlock   *message);
size_t header_block__pack
                     (const HeaderBlock   *message,
                      uint8_t             *out);
size_t header_block__pack_to_buffer
                     (const HeaderBlock   *message,
                      ProtobufCBuffer     *buffer);
HeaderBlock *
       header_block__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   header_block__free_unpacked
                     (HeaderBlock *message,
                      ProtobufCAllocator *allocator);
/* HeaderBBox methods */
void   header_bbox__init
                     (HeaderBBox         *message);
size_t header_bbox__get_packed_size
                     (const HeaderBBox   *message);
size_t header_bbox__pack
                     (const HeaderBBox   *message,
                      uint8_t             *out);
size_t header_bbox__pack_to_buffer
                     (const HeaderBBox   *message,
                      ProtobufCBuffer     *buffer);
HeaderBBox *
       header_bbox__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   header_bbox__free_unpacked
                     (HeaderBBox *message,
                      ProtobufCAllocator *allocator);
/* PrimitiveBlock methods */
void   primitive_block__init
                     (PrimitiveBlock         *message);
size_t primitive_block__get_packed_size
                     (const PrimitiveBlock   *message);
size_t primitive_block__pack
                     (const PrimitiveBlock   *message,
                      uint8_t             *out);
size_t primitive_block__pack_to_buffer
                     (const PrimitiveBlock   *message,
                      ProtobufCBuffer     *buffer);
PrimitiveBlock *
       primitive_block__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   primitive_block__free_unpacked
                     (PrimitiveBlock *message,
                      ProtobufCAllocator *allocator);
/* PrimitiveGroup methods */
void   primitive_group__init
                     (PrimitiveGroup         *message);
size_t primitive_group__get_packed_size
                     (const PrimitiveGroup   *message);
size_t primitive_group__pack
                     (const PrimitiveGroup   *message,
                      uint8_t             *out);
size_t primitive_group__pack_to_buffer
                     (const PrimitiveGroup   *message,
                      ProtobufCBuffer     *buffer);
PrimitiveGroup *
       primitive_group__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   primitive_group__free_unpacked
                     (PrimitiveGroup *message,
                      ProtobufCAllocator *allocator);
/* StringTable methods */
void   string_table__init
                     (StringTable         *message);
size_t string_table__get_packed_size
                     (const StringTable   *message);
size_t string_table__pack
                     (const StringTable   *message,
                      uint8_t             *out);
size_t string_table__pack_to_buffer
                     (const StringTable   *message,
                      ProtobufCBuffer     *buffer);
StringTable *
       string_table__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   string_table__free_unpacked
                     (StringTable *message,
                      ProtobufCAllocator *allocator);
/* Info methods */
void   info__init
                     (Info         *message);
size_t info__get_packed_size
                     (const Info   *message);
size_t info__pack
                     (const Info   *message,
                      uint8_t             *out);
size_t info__pack_to_buffer
                     (const Info   *message,
                      ProtobufCBuffer     *buffer);
Info *
       info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   info__free_unpacked
                     (Info *message,
                      ProtobufCAllocator *allocator);
/* DenseInfo methods */
void   dense_info__init
                     (DenseInfo         *message);
size_t dense_info__get_packed_size
                     (const DenseInfo   *message);
size_t dense_info__pack
                     (const DenseInfo   *message,
                      uint8_t             *out);
size_t dense_info__pack_to_buffer
                     (const DenseInfo   *message,
                      ProtobufCBuffer     *buffer);
DenseInfo *
       dense_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dense_info__free_unpacked
                     (DenseInfo *message,
                      ProtobufCAllocator *allocator);
/* ChangeSet methods */
void   change_set__init
                     (ChangeSet         *message);
size_t change_set__get_packed_size
                     (const ChangeSet   *message);
size_t change_set__pack
                     (const ChangeSet   *message,
                      uint8_t             *out);
size_t change_set__pack_to_buffer
                     (const ChangeSet   *message,
                      ProtobufCBuffer     *buffer);
ChangeSet *
       change_set__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   change_set__free_unpacked
                     (ChangeSet *message,
                      ProtobufCAllocator *allocator);
/* Node methods */
void   node__init
                     (Node         *message);
size_t node__get_packed_size
                     (const Node   *message);
size_t node__pack
                     (const Node   *message,
                      uint8_t             *out);
size_t node__pack_to_buffer
                     (const Node   *message,
                      ProtobufCBuffer     *buffer);
Node *
       node__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   node__free_unpacked
                     (Node *message,
                      ProtobufCAllocator *allocator);
/* DenseNodes methods */
void   dense_nodes__init
                     (DenseNodes         *message);
size_t dense_nodes__get_packed_size
                     (const DenseNodes   *message);
size_t dense_nodes__pack
                     (const DenseNodes   *message,
                      uint8_t             *out);
size_t dense_nodes__pack_to_buffer
                     (const DenseNodes   *message,
                      ProtobufCBuffer     *buffer);
DenseNodes *
       dense_nodes__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dense_nodes__free_unpacked
                     (DenseNodes *message,
                      ProtobufCAllocator *allocator);
/* Way methods */
void   way__init
                     (Way         *message);
size_t way__get_packed_size
                     (const Way   *message);
size_t way__pack
                     (const Way   *message,
                      uint8_t             *out);
size_t way__pack_to_buffer
                     (const Way   *message,
                      ProtobufCBuffer     *buffer);
Way *
       way__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   way__free_unpacked
                     (Way *message,
                      ProtobufCAllocator *allocator);
/* Relation methods */
void   relation__init
                     (Relation         *message);
size_t relation__get_packed_size
                     (const Relation   *message);
size_t relation__pack
                     (const Relation   *message,
                      uint8_t             *out);
size_t relation__pack_to_buffer
                     (const Relation   *message,
                      ProtobufCBuffer     *buffer);
Relation *
       relation__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   relation__free_unpacked
                     (Relation *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*HeaderBlock_Closure)
                 (const HeaderBlock *message,
                  void *closure_data);
typedef void (*HeaderBBox_Closure)
                 (const HeaderBBox *message,
                  void *closure_data);
typedef void (*PrimitiveBlock_Closure)
                 (const PrimitiveBlock *message,
                  void *closure_data);
typedef void (*PrimitiveGroup_Closure)
                 (const PrimitiveGroup *message,
                  void *closure_data);
typedef void (*StringTable_Closure)
                 (const StringTable *message,
                  void *closure_data);
typedef void (*Info_Closure)
                 (const Info *message,
                  void *closure_data);
typedef void (*DenseInfo_Closure)
                 (const DenseInfo *message,
                  void *closure_data);
typedef void (*ChangeSet_Closure)
                 (const ChangeSet *message,
                  void *closure_data);
typedef void (*Node_Closure)
                 (const Node *message,
                  void *closure_data);
typedef void (*DenseNodes_Closure)
                 (const DenseNodes *message,
                  void *closure_data);
typedef void (*Way_Closure)
                 (const Way *message,
                  void *closure_data);
typedef void (*Relation_Closure)
                 (const Relation *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor header_block__descriptor;
extern const ProtobufCMessageDescriptor header_bbox__descriptor;
extern const ProtobufCMessageDescriptor primitive_block__descriptor;
extern const ProtobufCMessageDescriptor primitive_group__descriptor;
extern const ProtobufCMessageDescriptor string_table__descriptor;
extern const ProtobufCMessageDescriptor info__descriptor;
extern const ProtobufCMessageDescriptor dense_info__descriptor;
extern const ProtobufCMessageDescriptor change_set__descriptor;
extern const ProtobufCMessageDescriptor node__descriptor;
extern const ProtobufCMessageDescriptor dense_nodes__descriptor;
extern const ProtobufCMessageDescriptor way__descriptor;
extern const ProtobufCMessageDescriptor relation__descriptor;
extern const ProtobufCEnumDescriptor    relation__member_type__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_osmformat_2eproto__INCLUDED */
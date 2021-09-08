// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: c2s.proto

#include "c2s.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace protocol {
constexpr C2SLoginReq::C2SLoginReq(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : friends_()
  , account_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , age_(0){}
struct C2SLoginReqDefaultTypeInternal {
  constexpr C2SLoginReqDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~C2SLoginReqDefaultTypeInternal() {}
  union {
    C2SLoginReq _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT C2SLoginReqDefaultTypeInternal _C2SLoginReq_default_instance_;
constexpr S2CLoginResp::S2CLoginResp(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : ret_(0){}
struct S2CLoginRespDefaultTypeInternal {
  constexpr S2CLoginRespDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~S2CLoginRespDefaultTypeInternal() {}
  union {
    S2CLoginResp _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT S2CLoginRespDefaultTypeInternal _S2CLoginResp_default_instance_;
constexpr C2SLogoutReq::C2SLogoutReq(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct C2SLogoutReqDefaultTypeInternal {
  constexpr C2SLogoutReqDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~C2SLogoutReqDefaultTypeInternal() {}
  union {
    C2SLogoutReq _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT C2SLogoutReqDefaultTypeInternal _C2SLogoutReq_default_instance_;
constexpr S2CLogoutResp::S2CLogoutResp(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : ret_(0){}
struct S2CLogoutRespDefaultTypeInternal {
  constexpr S2CLogoutRespDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~S2CLogoutRespDefaultTypeInternal() {}
  union {
    S2CLogoutResp _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT S2CLogoutRespDefaultTypeInternal _S2CLogoutResp_default_instance_;
}  // namespace protocol
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_c2s_2eproto[4];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_c2s_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_c2s_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_c2s_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::protocol::C2SLoginReq, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::protocol::C2SLoginReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::protocol::C2SLoginReq, account_),
  PROTOBUF_FIELD_OFFSET(::protocol::C2SLoginReq, age_),
  PROTOBUF_FIELD_OFFSET(::protocol::C2SLoginReq, friends_),
  0,
  1,
  ~0u,
  PROTOBUF_FIELD_OFFSET(::protocol::S2CLoginResp, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::protocol::S2CLoginResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::protocol::S2CLoginResp, ret_),
  0,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::protocol::C2SLogoutReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::protocol::S2CLogoutResp, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::protocol::S2CLogoutResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::protocol::S2CLogoutResp, ret_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::protocol::C2SLoginReq)},
  { 11, 17, sizeof(::protocol::S2CLoginResp)},
  { 18, -1, sizeof(::protocol::C2SLogoutReq)},
  { 23, 29, sizeof(::protocol::S2CLogoutResp)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protocol::_C2SLoginReq_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protocol::_S2CLoginResp_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protocol::_C2SLogoutReq_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protocol::_S2CLogoutResp_default_instance_),
};

const char descriptor_table_protodef_c2s_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tc2s.proto\022\010protocol\"<\n\013C2SLoginReq\022\017\n\007"
  "account\030\001 \001(\t\022\013\n\003age\030\002 \001(\005\022\017\n\007friends\030\003 "
  "\003(\005\"\033\n\014S2CLoginResp\022\013\n\003ret\030\001 \001(\005\"\016\n\014C2SL"
  "ogoutReq\"\034\n\rS2CLogoutResp\022\013\n\003ret\030\001 \001(\005*X"
  "\n\002ID\022\022\n\rC2S_LOGIN_REQ\020\351\007\022\023\n\016S2C_LOGIN_RE"
  "SP\020\352\007\022\023\n\016C2S_LOGOUT_REQ\020\353\007\022\024\n\017S2C_LOGOUT"
  "_RESP\020\354\007B\rZ\013./;protocol"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_c2s_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_c2s_2eproto = {
  false, false, 263, descriptor_table_protodef_c2s_2eproto, "c2s.proto", 
  &descriptor_table_c2s_2eproto_once, nullptr, 0, 4,
  schemas, file_default_instances, TableStruct_c2s_2eproto::offsets,
  file_level_metadata_c2s_2eproto, file_level_enum_descriptors_c2s_2eproto, file_level_service_descriptors_c2s_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_c2s_2eproto_getter() {
  return &descriptor_table_c2s_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_c2s_2eproto(&descriptor_table_c2s_2eproto);
namespace protocol {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ID_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_c2s_2eproto);
  return file_level_enum_descriptors_c2s_2eproto[0];
}
bool ID_IsValid(int value) {
  switch (value) {
    case 1001:
    case 1002:
    case 1003:
    case 1004:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class C2SLoginReq::_Internal {
 public:
  using HasBits = decltype(std::declval<C2SLoginReq>()._has_bits_);
  static void set_has_account(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_age(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

C2SLoginReq::C2SLoginReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  friends_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:protocol.C2SLoginReq)
}
C2SLoginReq::C2SLoginReq(const C2SLoginReq& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      friends_(from.friends_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  account_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_account()) {
    account_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_account(), 
      GetArenaForAllocation());
  }
  age_ = from.age_;
  // @@protoc_insertion_point(copy_constructor:protocol.C2SLoginReq)
}

inline void C2SLoginReq::SharedCtor() {
account_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
age_ = 0;
}

C2SLoginReq::~C2SLoginReq() {
  // @@protoc_insertion_point(destructor:protocol.C2SLoginReq)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void C2SLoginReq::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  account_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void C2SLoginReq::ArenaDtor(void* object) {
  C2SLoginReq* _this = reinterpret_cast< C2SLoginReq* >(object);
  (void)_this;
}
void C2SLoginReq::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void C2SLoginReq::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void C2SLoginReq::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.C2SLoginReq)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  friends_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    account_.ClearNonDefaultToEmpty();
  }
  age_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* C2SLoginReq::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string account = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_account();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "protocol.C2SLoginReq.account");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 age = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_age(&has_bits);
          age_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated int32 friends = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_friends(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<24>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_friends(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* C2SLoginReq::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.C2SLoginReq)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string account = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_account().data(), static_cast<int>(this->_internal_account().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "protocol.C2SLoginReq.account");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_account(), target);
  }

  // optional int32 age = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_age(), target);
  }

  // repeated int32 friends = 3;
  for (int i = 0, n = this->_internal_friends_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_friends(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protocol.C2SLoginReq)
  return target;
}

size_t C2SLoginReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.C2SLoginReq)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 friends = 3;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->friends_);
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_friends_size());
    total_size += data_size;
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string account = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_account());
    }

    // optional int32 age = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_age());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData C2SLoginReq::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    C2SLoginReq::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*C2SLoginReq::GetClassData() const { return &_class_data_; }

void C2SLoginReq::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<C2SLoginReq *>(to)->MergeFrom(
      static_cast<const C2SLoginReq &>(from));
}


void C2SLoginReq::MergeFrom(const C2SLoginReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.C2SLoginReq)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  friends_.MergeFrom(from.friends_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_account(from._internal_account());
    }
    if (cached_has_bits & 0x00000002u) {
      age_ = from.age_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void C2SLoginReq::CopyFrom(const C2SLoginReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.C2SLoginReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C2SLoginReq::IsInitialized() const {
  return true;
}

void C2SLoginReq::InternalSwap(C2SLoginReq* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  friends_.InternalSwap(&other->friends_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &account_, GetArenaForAllocation(),
      &other->account_, other->GetArenaForAllocation()
  );
  swap(age_, other->age_);
}

::PROTOBUF_NAMESPACE_ID::Metadata C2SLoginReq::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_c2s_2eproto_getter, &descriptor_table_c2s_2eproto_once,
      file_level_metadata_c2s_2eproto[0]);
}

// ===================================================================

class S2CLoginResp::_Internal {
 public:
  using HasBits = decltype(std::declval<S2CLoginResp>()._has_bits_);
  static void set_has_ret(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

S2CLoginResp::S2CLoginResp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:protocol.S2CLoginResp)
}
S2CLoginResp::S2CLoginResp(const S2CLoginResp& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ret_ = from.ret_;
  // @@protoc_insertion_point(copy_constructor:protocol.S2CLoginResp)
}

inline void S2CLoginResp::SharedCtor() {
ret_ = 0;
}

S2CLoginResp::~S2CLoginResp() {
  // @@protoc_insertion_point(destructor:protocol.S2CLoginResp)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void S2CLoginResp::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void S2CLoginResp::ArenaDtor(void* object) {
  S2CLoginResp* _this = reinterpret_cast< S2CLoginResp* >(object);
  (void)_this;
}
void S2CLoginResp::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void S2CLoginResp::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void S2CLoginResp::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.S2CLoginResp)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ret_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* S2CLoginResp::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 ret = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_ret(&has_bits);
          ret_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* S2CLoginResp::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.S2CLoginResp)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 ret = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_ret(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protocol.S2CLoginResp)
  return target;
}

size_t S2CLoginResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.S2CLoginResp)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional int32 ret = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_ret());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData S2CLoginResp::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    S2CLoginResp::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*S2CLoginResp::GetClassData() const { return &_class_data_; }

void S2CLoginResp::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<S2CLoginResp *>(to)->MergeFrom(
      static_cast<const S2CLoginResp &>(from));
}


void S2CLoginResp::MergeFrom(const S2CLoginResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.S2CLoginResp)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_ret()) {
    _internal_set_ret(from._internal_ret());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void S2CLoginResp::CopyFrom(const S2CLoginResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.S2CLoginResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool S2CLoginResp::IsInitialized() const {
  return true;
}

void S2CLoginResp::InternalSwap(S2CLoginResp* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(ret_, other->ret_);
}

::PROTOBUF_NAMESPACE_ID::Metadata S2CLoginResp::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_c2s_2eproto_getter, &descriptor_table_c2s_2eproto_once,
      file_level_metadata_c2s_2eproto[1]);
}

// ===================================================================

class C2SLogoutReq::_Internal {
 public:
};

C2SLogoutReq::C2SLogoutReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:protocol.C2SLogoutReq)
}
C2SLogoutReq::C2SLogoutReq(const C2SLogoutReq& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:protocol.C2SLogoutReq)
}

inline void C2SLogoutReq::SharedCtor() {
}

C2SLogoutReq::~C2SLogoutReq() {
  // @@protoc_insertion_point(destructor:protocol.C2SLogoutReq)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void C2SLogoutReq::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void C2SLogoutReq::ArenaDtor(void* object) {
  C2SLogoutReq* _this = reinterpret_cast< C2SLogoutReq* >(object);
  (void)_this;
}
void C2SLogoutReq::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void C2SLogoutReq::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void C2SLogoutReq::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.C2SLogoutReq)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* C2SLogoutReq::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* C2SLogoutReq::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.C2SLogoutReq)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protocol.C2SLogoutReq)
  return target;
}

size_t C2SLogoutReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.C2SLogoutReq)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData C2SLogoutReq::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    C2SLogoutReq::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*C2SLogoutReq::GetClassData() const { return &_class_data_; }

void C2SLogoutReq::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<C2SLogoutReq *>(to)->MergeFrom(
      static_cast<const C2SLogoutReq &>(from));
}


void C2SLogoutReq::MergeFrom(const C2SLogoutReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.C2SLogoutReq)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void C2SLogoutReq::CopyFrom(const C2SLogoutReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.C2SLogoutReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C2SLogoutReq::IsInitialized() const {
  return true;
}

void C2SLogoutReq::InternalSwap(C2SLogoutReq* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata C2SLogoutReq::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_c2s_2eproto_getter, &descriptor_table_c2s_2eproto_once,
      file_level_metadata_c2s_2eproto[2]);
}

// ===================================================================

class S2CLogoutResp::_Internal {
 public:
  using HasBits = decltype(std::declval<S2CLogoutResp>()._has_bits_);
  static void set_has_ret(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

S2CLogoutResp::S2CLogoutResp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:protocol.S2CLogoutResp)
}
S2CLogoutResp::S2CLogoutResp(const S2CLogoutResp& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ret_ = from.ret_;
  // @@protoc_insertion_point(copy_constructor:protocol.S2CLogoutResp)
}

inline void S2CLogoutResp::SharedCtor() {
ret_ = 0;
}

S2CLogoutResp::~S2CLogoutResp() {
  // @@protoc_insertion_point(destructor:protocol.S2CLogoutResp)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void S2CLogoutResp::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void S2CLogoutResp::ArenaDtor(void* object) {
  S2CLogoutResp* _this = reinterpret_cast< S2CLogoutResp* >(object);
  (void)_this;
}
void S2CLogoutResp::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void S2CLogoutResp::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void S2CLogoutResp::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.S2CLogoutResp)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ret_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* S2CLogoutResp::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 ret = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_ret(&has_bits);
          ret_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* S2CLogoutResp::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.S2CLogoutResp)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 ret = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_ret(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protocol.S2CLogoutResp)
  return target;
}

size_t S2CLogoutResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.S2CLogoutResp)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional int32 ret = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_ret());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData S2CLogoutResp::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    S2CLogoutResp::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*S2CLogoutResp::GetClassData() const { return &_class_data_; }

void S2CLogoutResp::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<S2CLogoutResp *>(to)->MergeFrom(
      static_cast<const S2CLogoutResp &>(from));
}


void S2CLogoutResp::MergeFrom(const S2CLogoutResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.S2CLogoutResp)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_ret()) {
    _internal_set_ret(from._internal_ret());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void S2CLogoutResp::CopyFrom(const S2CLogoutResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.S2CLogoutResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool S2CLogoutResp::IsInitialized() const {
  return true;
}

void S2CLogoutResp::InternalSwap(S2CLogoutResp* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(ret_, other->ret_);
}

::PROTOBUF_NAMESPACE_ID::Metadata S2CLogoutResp::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_c2s_2eproto_getter, &descriptor_table_c2s_2eproto_once,
      file_level_metadata_c2s_2eproto[3]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace protocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protocol::C2SLoginReq* Arena::CreateMaybeMessage< ::protocol::C2SLoginReq >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protocol::C2SLoginReq >(arena);
}
template<> PROTOBUF_NOINLINE ::protocol::S2CLoginResp* Arena::CreateMaybeMessage< ::protocol::S2CLoginResp >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protocol::S2CLoginResp >(arena);
}
template<> PROTOBUF_NOINLINE ::protocol::C2SLogoutReq* Arena::CreateMaybeMessage< ::protocol::C2SLogoutReq >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protocol::C2SLogoutReq >(arena);
}
template<> PROTOBUF_NOINLINE ::protocol::S2CLogoutResp* Arena::CreateMaybeMessage< ::protocol::S2CLogoutResp >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protocol::S2CLogoutResp >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

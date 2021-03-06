// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: srvRes.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_srvRes_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_srvRes_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "lsEnum.pb.h"
#include "gameProto.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_srvRes_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_srvRes_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_srvRes_2eproto;
namespace lspb {
class SrvRes;
class SrvResDefaultTypeInternal;
extern SrvResDefaultTypeInternal _SrvRes_default_instance_;
}  // namespace lspb
PROTOBUF_NAMESPACE_OPEN
template<> ::lspb::SrvRes* Arena::CreateMaybeMessage<::lspb::SrvRes>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace lspb {

enum SrvMsgType : int {
  errorServerType = 0,
  srvEnterRoom = 101,
  srvInitOver = 102,
  bGameInit = 1001,
  bGameStart = 1002,
  bGameFrame = 1003,
  SrvMsgType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  SrvMsgType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool SrvMsgType_IsValid(int value);
constexpr SrvMsgType SrvMsgType_MIN = errorServerType;
constexpr SrvMsgType SrvMsgType_MAX = bGameFrame;
constexpr int SrvMsgType_ARRAYSIZE = SrvMsgType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SrvMsgType_descriptor();
template<typename T>
inline const std::string& SrvMsgType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SrvMsgType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SrvMsgType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SrvMsgType_descriptor(), enum_t_value);
}
inline bool SrvMsgType_Parse(
    const std::string& name, SrvMsgType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SrvMsgType>(
    SrvMsgType_descriptor(), name, value);
}
// ===================================================================

class SrvRes PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:lspb.SrvRes) */ {
 public:
  inline SrvRes() : SrvRes(nullptr) {};
  virtual ~SrvRes();

  SrvRes(const SrvRes& from);
  SrvRes(SrvRes&& from) noexcept
    : SrvRes() {
    *this = ::std::move(from);
  }

  inline SrvRes& operator=(const SrvRes& from) {
    CopyFrom(from);
    return *this;
  }
  inline SrvRes& operator=(SrvRes&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SrvRes& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SrvRes* internal_default_instance() {
    return reinterpret_cast<const SrvRes*>(
               &_SrvRes_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SrvRes& a, SrvRes& b) {
    a.Swap(&b);
  }
  inline void Swap(SrvRes* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SrvRes* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SrvRes* New() const final {
    return CreateMaybeMessage<SrvRes>(nullptr);
  }

  SrvRes* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SrvRes>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SrvRes& from);
  void MergeFrom(const SrvRes& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SrvRes* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "lspb.SrvRes";
  }
  protected:
  explicit SrvRes(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_srvRes_2eproto);
    return ::descriptor_table_srvRes_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrStrFieldNumber = 3,
    kSrvEnterRoomFieldNumber = 101,
    kSrvInitOverFieldNumber = 102,
    kBGameInitFieldNumber = 1001,
    kBGameStartFieldNumber = 1002,
    kBGameFrameFieldNumber = 1003,
    kMethodIdFieldNumber = 1,
    kResultFieldNumber = 2,
  };
  // string errStr = 3;
  void clear_errstr();
  const std::string& errstr() const;
  void set_errstr(const std::string& value);
  void set_errstr(std::string&& value);
  void set_errstr(const char* value);
  void set_errstr(const char* value, size_t size);
  std::string* mutable_errstr();
  std::string* release_errstr();
  void set_allocated_errstr(std::string* errstr);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_errstr();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_errstr(
      std::string* errstr);
  private:
  const std::string& _internal_errstr() const;
  void _internal_set_errstr(const std::string& value);
  std::string* _internal_mutable_errstr();
  public:

  // .lspb.SrvEnterRoom srvEnterRoom = 101;
  bool has_srventerroom() const;
  private:
  bool _internal_has_srventerroom() const;
  public:
  void clear_srventerroom();
  const ::lspb::SrvEnterRoom& srventerroom() const;
  ::lspb::SrvEnterRoom* release_srventerroom();
  ::lspb::SrvEnterRoom* mutable_srventerroom();
  void set_allocated_srventerroom(::lspb::SrvEnterRoom* srventerroom);
  private:
  const ::lspb::SrvEnterRoom& _internal_srventerroom() const;
  ::lspb::SrvEnterRoom* _internal_mutable_srventerroom();
  public:
  void unsafe_arena_set_allocated_srventerroom(
      ::lspb::SrvEnterRoom* srventerroom);
  ::lspb::SrvEnterRoom* unsafe_arena_release_srventerroom();

  // .lspb.SrvInitOver srvInitOver = 102;
  bool has_srvinitover() const;
  private:
  bool _internal_has_srvinitover() const;
  public:
  void clear_srvinitover();
  const ::lspb::SrvInitOver& srvinitover() const;
  ::lspb::SrvInitOver* release_srvinitover();
  ::lspb::SrvInitOver* mutable_srvinitover();
  void set_allocated_srvinitover(::lspb::SrvInitOver* srvinitover);
  private:
  const ::lspb::SrvInitOver& _internal_srvinitover() const;
  ::lspb::SrvInitOver* _internal_mutable_srvinitover();
  public:
  void unsafe_arena_set_allocated_srvinitover(
      ::lspb::SrvInitOver* srvinitover);
  ::lspb::SrvInitOver* unsafe_arena_release_srvinitover();

  // .lspb.BGameInit bGameInit = 1001;
  bool has_bgameinit() const;
  private:
  bool _internal_has_bgameinit() const;
  public:
  void clear_bgameinit();
  const ::lspb::BGameInit& bgameinit() const;
  ::lspb::BGameInit* release_bgameinit();
  ::lspb::BGameInit* mutable_bgameinit();
  void set_allocated_bgameinit(::lspb::BGameInit* bgameinit);
  private:
  const ::lspb::BGameInit& _internal_bgameinit() const;
  ::lspb::BGameInit* _internal_mutable_bgameinit();
  public:
  void unsafe_arena_set_allocated_bgameinit(
      ::lspb::BGameInit* bgameinit);
  ::lspb::BGameInit* unsafe_arena_release_bgameinit();

  // .lspb.BGameStart bGameStart = 1002;
  bool has_bgamestart() const;
  private:
  bool _internal_has_bgamestart() const;
  public:
  void clear_bgamestart();
  const ::lspb::BGameStart& bgamestart() const;
  ::lspb::BGameStart* release_bgamestart();
  ::lspb::BGameStart* mutable_bgamestart();
  void set_allocated_bgamestart(::lspb::BGameStart* bgamestart);
  private:
  const ::lspb::BGameStart& _internal_bgamestart() const;
  ::lspb::BGameStart* _internal_mutable_bgamestart();
  public:
  void unsafe_arena_set_allocated_bgamestart(
      ::lspb::BGameStart* bgamestart);
  ::lspb::BGameStart* unsafe_arena_release_bgamestart();

  // .lspb.BGameFrame bGameFrame = 1003;
  bool has_bgameframe() const;
  private:
  bool _internal_has_bgameframe() const;
  public:
  void clear_bgameframe();
  const ::lspb::BGameFrame& bgameframe() const;
  ::lspb::BGameFrame* release_bgameframe();
  ::lspb::BGameFrame* mutable_bgameframe();
  void set_allocated_bgameframe(::lspb::BGameFrame* bgameframe);
  private:
  const ::lspb::BGameFrame& _internal_bgameframe() const;
  ::lspb::BGameFrame* _internal_mutable_bgameframe();
  public:
  void unsafe_arena_set_allocated_bgameframe(
      ::lspb::BGameFrame* bgameframe);
  ::lspb::BGameFrame* unsafe_arena_release_bgameframe();

  // .lspb.SrvMsgType methodId = 1;
  void clear_methodid();
  ::lspb::SrvMsgType methodid() const;
  void set_methodid(::lspb::SrvMsgType value);
  private:
  ::lspb::SrvMsgType _internal_methodid() const;
  void _internal_set_methodid(::lspb::SrvMsgType value);
  public:

  // .lspb.Result result = 2;
  void clear_result();
  ::lspb::Result result() const;
  void set_result(::lspb::Result value);
  private:
  ::lspb::Result _internal_result() const;
  void _internal_set_result(::lspb::Result value);
  public:

  // @@protoc_insertion_point(class_scope:lspb.SrvRes)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr errstr_;
  ::lspb::SrvEnterRoom* srventerroom_;
  ::lspb::SrvInitOver* srvinitover_;
  ::lspb::BGameInit* bgameinit_;
  ::lspb::BGameStart* bgamestart_;
  ::lspb::BGameFrame* bgameframe_;
  int methodid_;
  int result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_srvRes_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SrvRes

// .lspb.SrvMsgType methodId = 1;
inline void SrvRes::clear_methodid() {
  methodid_ = 0;
}
inline ::lspb::SrvMsgType SrvRes::_internal_methodid() const {
  return static_cast< ::lspb::SrvMsgType >(methodid_);
}
inline ::lspb::SrvMsgType SrvRes::methodid() const {
  // @@protoc_insertion_point(field_get:lspb.SrvRes.methodId)
  return _internal_methodid();
}
inline void SrvRes::_internal_set_methodid(::lspb::SrvMsgType value) {
  
  methodid_ = value;
}
inline void SrvRes::set_methodid(::lspb::SrvMsgType value) {
  _internal_set_methodid(value);
  // @@protoc_insertion_point(field_set:lspb.SrvRes.methodId)
}

// .lspb.Result result = 2;
inline void SrvRes::clear_result() {
  result_ = 0;
}
inline ::lspb::Result SrvRes::_internal_result() const {
  return static_cast< ::lspb::Result >(result_);
}
inline ::lspb::Result SrvRes::result() const {
  // @@protoc_insertion_point(field_get:lspb.SrvRes.result)
  return _internal_result();
}
inline void SrvRes::_internal_set_result(::lspb::Result value) {
  
  result_ = value;
}
inline void SrvRes::set_result(::lspb::Result value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:lspb.SrvRes.result)
}

// string errStr = 3;
inline void SrvRes::clear_errstr() {
  errstr_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SrvRes::errstr() const {
  // @@protoc_insertion_point(field_get:lspb.SrvRes.errStr)
  return _internal_errstr();
}
inline void SrvRes::set_errstr(const std::string& value) {
  _internal_set_errstr(value);
  // @@protoc_insertion_point(field_set:lspb.SrvRes.errStr)
}
inline std::string* SrvRes::mutable_errstr() {
  // @@protoc_insertion_point(field_mutable:lspb.SrvRes.errStr)
  return _internal_mutable_errstr();
}
inline const std::string& SrvRes::_internal_errstr() const {
  return errstr_.Get();
}
inline void SrvRes::_internal_set_errstr(const std::string& value) {
  
  errstr_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SrvRes::set_errstr(std::string&& value) {
  
  errstr_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:lspb.SrvRes.errStr)
}
inline void SrvRes::set_errstr(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  errstr_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:lspb.SrvRes.errStr)
}
inline void SrvRes::set_errstr(const char* value,
    size_t size) {
  
  errstr_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:lspb.SrvRes.errStr)
}
inline std::string* SrvRes::_internal_mutable_errstr() {
  
  return errstr_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SrvRes::release_errstr() {
  // @@protoc_insertion_point(field_release:lspb.SrvRes.errStr)
  return errstr_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SrvRes::set_allocated_errstr(std::string* errstr) {
  if (errstr != nullptr) {
    
  } else {
    
  }
  errstr_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), errstr,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:lspb.SrvRes.errStr)
}
inline std::string* SrvRes::unsafe_arena_release_errstr() {
  // @@protoc_insertion_point(field_unsafe_arena_release:lspb.SrvRes.errStr)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return errstr_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SrvRes::unsafe_arena_set_allocated_errstr(
    std::string* errstr) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (errstr != nullptr) {
    
  } else {
    
  }
  errstr_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      errstr, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:lspb.SrvRes.errStr)
}

// .lspb.SrvEnterRoom srvEnterRoom = 101;
inline bool SrvRes::_internal_has_srventerroom() const {
  return this != internal_default_instance() && srventerroom_ != nullptr;
}
inline bool SrvRes::has_srventerroom() const {
  return _internal_has_srventerroom();
}
inline const ::lspb::SrvEnterRoom& SrvRes::_internal_srventerroom() const {
  const ::lspb::SrvEnterRoom* p = srventerroom_;
  return p != nullptr ? *p : *reinterpret_cast<const ::lspb::SrvEnterRoom*>(
      &::lspb::_SrvEnterRoom_default_instance_);
}
inline const ::lspb::SrvEnterRoom& SrvRes::srventerroom() const {
  // @@protoc_insertion_point(field_get:lspb.SrvRes.srvEnterRoom)
  return _internal_srventerroom();
}
inline void SrvRes::unsafe_arena_set_allocated_srventerroom(
    ::lspb::SrvEnterRoom* srventerroom) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(srventerroom_);
  }
  srventerroom_ = srventerroom;
  if (srventerroom) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:lspb.SrvRes.srvEnterRoom)
}
inline ::lspb::SrvEnterRoom* SrvRes::release_srventerroom() {
  auto temp = unsafe_arena_release_srventerroom();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::lspb::SrvEnterRoom* SrvRes::unsafe_arena_release_srventerroom() {
  // @@protoc_insertion_point(field_release:lspb.SrvRes.srvEnterRoom)
  
  ::lspb::SrvEnterRoom* temp = srventerroom_;
  srventerroom_ = nullptr;
  return temp;
}
inline ::lspb::SrvEnterRoom* SrvRes::_internal_mutable_srventerroom() {
  
  if (srventerroom_ == nullptr) {
    auto* p = CreateMaybeMessage<::lspb::SrvEnterRoom>(GetArena());
    srventerroom_ = p;
  }
  return srventerroom_;
}
inline ::lspb::SrvEnterRoom* SrvRes::mutable_srventerroom() {
  // @@protoc_insertion_point(field_mutable:lspb.SrvRes.srvEnterRoom)
  return _internal_mutable_srventerroom();
}
inline void SrvRes::set_allocated_srventerroom(::lspb::SrvEnterRoom* srventerroom) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(srventerroom_);
  }
  if (srventerroom) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(srventerroom)->GetArena();
    if (message_arena != submessage_arena) {
      srventerroom = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, srventerroom, submessage_arena);
    }
    
  } else {
    
  }
  srventerroom_ = srventerroom;
  // @@protoc_insertion_point(field_set_allocated:lspb.SrvRes.srvEnterRoom)
}

// .lspb.SrvInitOver srvInitOver = 102;
inline bool SrvRes::_internal_has_srvinitover() const {
  return this != internal_default_instance() && srvinitover_ != nullptr;
}
inline bool SrvRes::has_srvinitover() const {
  return _internal_has_srvinitover();
}
inline const ::lspb::SrvInitOver& SrvRes::_internal_srvinitover() const {
  const ::lspb::SrvInitOver* p = srvinitover_;
  return p != nullptr ? *p : *reinterpret_cast<const ::lspb::SrvInitOver*>(
      &::lspb::_SrvInitOver_default_instance_);
}
inline const ::lspb::SrvInitOver& SrvRes::srvinitover() const {
  // @@protoc_insertion_point(field_get:lspb.SrvRes.srvInitOver)
  return _internal_srvinitover();
}
inline void SrvRes::unsafe_arena_set_allocated_srvinitover(
    ::lspb::SrvInitOver* srvinitover) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(srvinitover_);
  }
  srvinitover_ = srvinitover;
  if (srvinitover) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:lspb.SrvRes.srvInitOver)
}
inline ::lspb::SrvInitOver* SrvRes::release_srvinitover() {
  auto temp = unsafe_arena_release_srvinitover();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::lspb::SrvInitOver* SrvRes::unsafe_arena_release_srvinitover() {
  // @@protoc_insertion_point(field_release:lspb.SrvRes.srvInitOver)
  
  ::lspb::SrvInitOver* temp = srvinitover_;
  srvinitover_ = nullptr;
  return temp;
}
inline ::lspb::SrvInitOver* SrvRes::_internal_mutable_srvinitover() {
  
  if (srvinitover_ == nullptr) {
    auto* p = CreateMaybeMessage<::lspb::SrvInitOver>(GetArena());
    srvinitover_ = p;
  }
  return srvinitover_;
}
inline ::lspb::SrvInitOver* SrvRes::mutable_srvinitover() {
  // @@protoc_insertion_point(field_mutable:lspb.SrvRes.srvInitOver)
  return _internal_mutable_srvinitover();
}
inline void SrvRes::set_allocated_srvinitover(::lspb::SrvInitOver* srvinitover) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(srvinitover_);
  }
  if (srvinitover) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(srvinitover)->GetArena();
    if (message_arena != submessage_arena) {
      srvinitover = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, srvinitover, submessage_arena);
    }
    
  } else {
    
  }
  srvinitover_ = srvinitover;
  // @@protoc_insertion_point(field_set_allocated:lspb.SrvRes.srvInitOver)
}

// .lspb.BGameInit bGameInit = 1001;
inline bool SrvRes::_internal_has_bgameinit() const {
  return this != internal_default_instance() && bgameinit_ != nullptr;
}
inline bool SrvRes::has_bgameinit() const {
  return _internal_has_bgameinit();
}
inline const ::lspb::BGameInit& SrvRes::_internal_bgameinit() const {
  const ::lspb::BGameInit* p = bgameinit_;
  return p != nullptr ? *p : *reinterpret_cast<const ::lspb::BGameInit*>(
      &::lspb::_BGameInit_default_instance_);
}
inline const ::lspb::BGameInit& SrvRes::bgameinit() const {
  // @@protoc_insertion_point(field_get:lspb.SrvRes.bGameInit)
  return _internal_bgameinit();
}
inline void SrvRes::unsafe_arena_set_allocated_bgameinit(
    ::lspb::BGameInit* bgameinit) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(bgameinit_);
  }
  bgameinit_ = bgameinit;
  if (bgameinit) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:lspb.SrvRes.bGameInit)
}
inline ::lspb::BGameInit* SrvRes::release_bgameinit() {
  auto temp = unsafe_arena_release_bgameinit();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::lspb::BGameInit* SrvRes::unsafe_arena_release_bgameinit() {
  // @@protoc_insertion_point(field_release:lspb.SrvRes.bGameInit)
  
  ::lspb::BGameInit* temp = bgameinit_;
  bgameinit_ = nullptr;
  return temp;
}
inline ::lspb::BGameInit* SrvRes::_internal_mutable_bgameinit() {
  
  if (bgameinit_ == nullptr) {
    auto* p = CreateMaybeMessage<::lspb::BGameInit>(GetArena());
    bgameinit_ = p;
  }
  return bgameinit_;
}
inline ::lspb::BGameInit* SrvRes::mutable_bgameinit() {
  // @@protoc_insertion_point(field_mutable:lspb.SrvRes.bGameInit)
  return _internal_mutable_bgameinit();
}
inline void SrvRes::set_allocated_bgameinit(::lspb::BGameInit* bgameinit) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(bgameinit_);
  }
  if (bgameinit) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(bgameinit)->GetArena();
    if (message_arena != submessage_arena) {
      bgameinit = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, bgameinit, submessage_arena);
    }
    
  } else {
    
  }
  bgameinit_ = bgameinit;
  // @@protoc_insertion_point(field_set_allocated:lspb.SrvRes.bGameInit)
}

// .lspb.BGameStart bGameStart = 1002;
inline bool SrvRes::_internal_has_bgamestart() const {
  return this != internal_default_instance() && bgamestart_ != nullptr;
}
inline bool SrvRes::has_bgamestart() const {
  return _internal_has_bgamestart();
}
inline const ::lspb::BGameStart& SrvRes::_internal_bgamestart() const {
  const ::lspb::BGameStart* p = bgamestart_;
  return p != nullptr ? *p : *reinterpret_cast<const ::lspb::BGameStart*>(
      &::lspb::_BGameStart_default_instance_);
}
inline const ::lspb::BGameStart& SrvRes::bgamestart() const {
  // @@protoc_insertion_point(field_get:lspb.SrvRes.bGameStart)
  return _internal_bgamestart();
}
inline void SrvRes::unsafe_arena_set_allocated_bgamestart(
    ::lspb::BGameStart* bgamestart) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(bgamestart_);
  }
  bgamestart_ = bgamestart;
  if (bgamestart) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:lspb.SrvRes.bGameStart)
}
inline ::lspb::BGameStart* SrvRes::release_bgamestart() {
  auto temp = unsafe_arena_release_bgamestart();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::lspb::BGameStart* SrvRes::unsafe_arena_release_bgamestart() {
  // @@protoc_insertion_point(field_release:lspb.SrvRes.bGameStart)
  
  ::lspb::BGameStart* temp = bgamestart_;
  bgamestart_ = nullptr;
  return temp;
}
inline ::lspb::BGameStart* SrvRes::_internal_mutable_bgamestart() {
  
  if (bgamestart_ == nullptr) {
    auto* p = CreateMaybeMessage<::lspb::BGameStart>(GetArena());
    bgamestart_ = p;
  }
  return bgamestart_;
}
inline ::lspb::BGameStart* SrvRes::mutable_bgamestart() {
  // @@protoc_insertion_point(field_mutable:lspb.SrvRes.bGameStart)
  return _internal_mutable_bgamestart();
}
inline void SrvRes::set_allocated_bgamestart(::lspb::BGameStart* bgamestart) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(bgamestart_);
  }
  if (bgamestart) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(bgamestart)->GetArena();
    if (message_arena != submessage_arena) {
      bgamestart = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, bgamestart, submessage_arena);
    }
    
  } else {
    
  }
  bgamestart_ = bgamestart;
  // @@protoc_insertion_point(field_set_allocated:lspb.SrvRes.bGameStart)
}

// .lspb.BGameFrame bGameFrame = 1003;
inline bool SrvRes::_internal_has_bgameframe() const {
  return this != internal_default_instance() && bgameframe_ != nullptr;
}
inline bool SrvRes::has_bgameframe() const {
  return _internal_has_bgameframe();
}
inline const ::lspb::BGameFrame& SrvRes::_internal_bgameframe() const {
  const ::lspb::BGameFrame* p = bgameframe_;
  return p != nullptr ? *p : *reinterpret_cast<const ::lspb::BGameFrame*>(
      &::lspb::_BGameFrame_default_instance_);
}
inline const ::lspb::BGameFrame& SrvRes::bgameframe() const {
  // @@protoc_insertion_point(field_get:lspb.SrvRes.bGameFrame)
  return _internal_bgameframe();
}
inline void SrvRes::unsafe_arena_set_allocated_bgameframe(
    ::lspb::BGameFrame* bgameframe) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(bgameframe_);
  }
  bgameframe_ = bgameframe;
  if (bgameframe) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:lspb.SrvRes.bGameFrame)
}
inline ::lspb::BGameFrame* SrvRes::release_bgameframe() {
  auto temp = unsafe_arena_release_bgameframe();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::lspb::BGameFrame* SrvRes::unsafe_arena_release_bgameframe() {
  // @@protoc_insertion_point(field_release:lspb.SrvRes.bGameFrame)
  
  ::lspb::BGameFrame* temp = bgameframe_;
  bgameframe_ = nullptr;
  return temp;
}
inline ::lspb::BGameFrame* SrvRes::_internal_mutable_bgameframe() {
  
  if (bgameframe_ == nullptr) {
    auto* p = CreateMaybeMessage<::lspb::BGameFrame>(GetArena());
    bgameframe_ = p;
  }
  return bgameframe_;
}
inline ::lspb::BGameFrame* SrvRes::mutable_bgameframe() {
  // @@protoc_insertion_point(field_mutable:lspb.SrvRes.bGameFrame)
  return _internal_mutable_bgameframe();
}
inline void SrvRes::set_allocated_bgameframe(::lspb::BGameFrame* bgameframe) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(bgameframe_);
  }
  if (bgameframe) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(bgameframe)->GetArena();
    if (message_arena != submessage_arena) {
      bgameframe = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, bgameframe, submessage_arena);
    }
    
  } else {
    
  }
  bgameframe_ = bgameframe;
  // @@protoc_insertion_point(field_set_allocated:lspb.SrvRes.bGameFrame)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace lspb

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::lspb::SrvMsgType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::lspb::SrvMsgType>() {
  return ::lspb::SrvMsgType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_srvRes_2eproto

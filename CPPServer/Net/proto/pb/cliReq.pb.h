// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cliReq.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cliReq_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cliReq_2eproto

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
#include <google/protobuf/repeated_field.h> // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "lsEnum.pb.h"
#include "gameProto.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cliReq_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal
{
  class AnyMetadata;
} // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cliReq_2eproto
{
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cliReq_2eproto;
namespace lspb
{
  class CliReq;
  class CliReqDefaultTypeInternal;
  extern CliReqDefaultTypeInternal _CliReq_default_instance_;
} // namespace lspb
PROTOBUF_NAMESPACE_OPEN
template <>
::lspb::CliReq *Arena::CreateMaybeMessage<::lspb::CliReq>(Arena *);
PROTOBUF_NAMESPACE_CLOSE
namespace lspb
{

  enum ClientMsgType : int
  {
    errorClientType = 0,
    cliEnterRoom = 101,
    cliInitOver = 102,
    cliOperate = 103,
    ClientMsgType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
    ClientMsgType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
  };
  bool ClientMsgType_IsValid(int value);
  constexpr ClientMsgType ClientMsgType_MIN = errorClientType;
  constexpr ClientMsgType ClientMsgType_MAX = cliOperate;
  constexpr int ClientMsgType_ARRAYSIZE = ClientMsgType_MAX + 1;

  const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor *ClientMsgType_descriptor();
  template <typename T>
  inline const std::string &ClientMsgType_Name(T enum_t_value)
  {
    static_assert(::std::is_same<T, ClientMsgType>::value ||
                      ::std::is_integral<T>::value,
                  "Incorrect type passed to function ClientMsgType_Name.");
    return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
        ClientMsgType_descriptor(), enum_t_value);
  }
  inline bool ClientMsgType_Parse(
      const std::string &name, ClientMsgType *value)
  {
    return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ClientMsgType>(
        ClientMsgType_descriptor(), name, value);
  }
  // ===================================================================

  class CliReq PROTOBUF_FINAL : public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:lspb.CliReq) */
  {
  public:
    inline CliReq() : CliReq(nullptr){};
    virtual ~CliReq();

    CliReq(const CliReq &from);
    CliReq(CliReq &&from) noexcept
        : CliReq()
    {
      *this = ::std::move(from);
    }

    inline CliReq &operator=(const CliReq &from)
    {
      CopyFrom(from);
      return *this;
    }
    inline CliReq &operator=(CliReq &&from) noexcept
    {
      if (GetArena() == from.GetArena())
      {
        if (this != &from)
          InternalSwap(&from);
      }
      else
      {
        CopyFrom(from);
      }
      return *this;
    }

    static const ::PROTOBUF_NAMESPACE_ID::Descriptor *descriptor()
    {
      return GetDescriptor();
    }
    static const ::PROTOBUF_NAMESPACE_ID::Descriptor *GetDescriptor()
    {
      return GetMetadataStatic().descriptor;
    }
    static const ::PROTOBUF_NAMESPACE_ID::Reflection *GetReflection()
    {
      return GetMetadataStatic().reflection;
    }
    static const CliReq &default_instance();

    static void InitAsDefaultInstance(); // FOR INTERNAL USE ONLY
    static inline const CliReq *internal_default_instance()
    {
      return reinterpret_cast<const CliReq *>(
          &_CliReq_default_instance_);
    }
    static constexpr int kIndexInFileMessages =
        0;

    friend void swap(CliReq &a, CliReq &b)
    {
      a.Swap(&b);
    }
    inline void Swap(CliReq *other)
    {
      if (other == this)
        return;
      if (GetArena() == other->GetArena())
      {
        InternalSwap(other);
      }
      else
      {
        ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
      }
    }
    void UnsafeArenaSwap(CliReq *other)
    {
      if (other == this)
        return;
      GOOGLE_DCHECK(GetArena() == other->GetArena());
      InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    inline CliReq *New() const final
    {
      return CreateMaybeMessage<CliReq>(nullptr);
    }

    CliReq *New(::PROTOBUF_NAMESPACE_ID::Arena *arena) const final
    {
      return CreateMaybeMessage<CliReq>(arena);
    }
    void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
    void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
    void CopyFrom(const CliReq &from);
    void MergeFrom(const CliReq &from);
    PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
    bool IsInitialized() const final;

    size_t ByteSizeLong() const final;
    const char *_InternalParse(const char *ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext *ctx) final;
    ::PROTOBUF_NAMESPACE_ID::uint8 *_InternalSerialize(
        ::PROTOBUF_NAMESPACE_ID::uint8 *target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream *stream) const final;
    int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
    inline void SharedCtor();
    inline void SharedDtor();
    void SetCachedSize(int size) const final;
    void InternalSwap(CliReq *other);
    friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
    static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName()
    {
      return "lspb.CliReq";
    }

  protected:
    explicit CliReq(::PROTOBUF_NAMESPACE_ID::Arena *arena);

  private:
    static void ArenaDtor(void *object);
    inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena *arena);

  public:
    ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  private:
    static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic()
    {
      ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cliReq_2eproto);
      return ::descriptor_table_cliReq_2eproto.file_level_metadata[kIndexInFileMessages];
    }

  public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------

    enum : int
    {
      kCliEnterRoomFieldNumber = 101,
      kCliInitOverFieldNumber = 102,
      kCliOperateFieldNumber = 103,
      kUserIdFieldNumber = 1,
      kModuleIdFieldNumber = 2,
      kMethodIdFieldNumber = 3,
    };
    // .lspb.CliEnterRoom cliEnterRoom = 101;
    bool has_clienterroom() const;

  private:
    bool _internal_has_clienterroom() const;

  public:
    void clear_clienterroom();
    const ::lspb::CliEnterRoom &clienterroom() const;
    ::lspb::CliEnterRoom *release_clienterroom();
    ::lspb::CliEnterRoom *mutable_clienterroom();
    void set_allocated_clienterroom(::lspb::CliEnterRoom *clienterroom);

  private:
    const ::lspb::CliEnterRoom &_internal_clienterroom() const;
    ::lspb::CliEnterRoom *_internal_mutable_clienterroom();

  public:
    void unsafe_arena_set_allocated_clienterroom(
        ::lspb::CliEnterRoom *clienterroom);
    ::lspb::CliEnterRoom *unsafe_arena_release_clienterroom();

    // .lspb.CliInitOver cliInitOver = 102;
    bool has_cliinitover() const;

  private:
    bool _internal_has_cliinitover() const;

  public:
    void clear_cliinitover();
    const ::lspb::CliInitOver &cliinitover() const;
    ::lspb::CliInitOver *release_cliinitover();
    ::lspb::CliInitOver *mutable_cliinitover();
    void set_allocated_cliinitover(::lspb::CliInitOver *cliinitover);

  private:
    const ::lspb::CliInitOver &_internal_cliinitover() const;
    ::lspb::CliInitOver *_internal_mutable_cliinitover();

  public:
    void unsafe_arena_set_allocated_cliinitover(
        ::lspb::CliInitOver *cliinitover);
    ::lspb::CliInitOver *unsafe_arena_release_cliinitover();

    // .lspb.CliOperate cliOperate = 103;
    bool has_clioperate() const;

  private:
    bool _internal_has_clioperate() const;

  public:
    void clear_clioperate();
    const ::lspb::CliOperate &clioperate() const;
    ::lspb::CliOperate *release_clioperate();
    ::lspb::CliOperate *mutable_clioperate();
    void set_allocated_clioperate(::lspb::CliOperate *clioperate);

  private:
    const ::lspb::CliOperate &_internal_clioperate() const;
    ::lspb::CliOperate *_internal_mutable_clioperate();

  public:
    void unsafe_arena_set_allocated_clioperate(
        ::lspb::CliOperate *clioperate);
    ::lspb::CliOperate *unsafe_arena_release_clioperate();

    // int32 userId = 1;
    void clear_userid();
    ::PROTOBUF_NAMESPACE_ID::int32 userid() const;
    void set_userid(::PROTOBUF_NAMESPACE_ID::int32 value);

  private:
    ::PROTOBUF_NAMESPACE_ID::int32 _internal_userid() const;
    void _internal_set_userid(::PROTOBUF_NAMESPACE_ID::int32 value);

  public:
    // .lspb.ModuleId moduleId = 2;
    void clear_moduleid();
    ::lspb::ModuleId moduleid() const;
    void set_moduleid(::lspb::ModuleId value);

  private:
    ::lspb::ModuleId _internal_moduleid() const;
    void _internal_set_moduleid(::lspb::ModuleId value);

  public:
    // .lspb.ClientMsgType methodId = 3;
    void clear_methodid();
    ::lspb::ClientMsgType methodid() const;
    void set_methodid(::lspb::ClientMsgType value);

  private:
    ::lspb::ClientMsgType _internal_methodid() const;
    void _internal_set_methodid(::lspb::ClientMsgType value);

  public:
    // @@protoc_insertion_point(class_scope:lspb.CliReq)
  private:
    class _Internal;

    template <typename T>
    friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
    typedef void InternalArenaConstructable_;
    typedef void DestructorSkippable_;
    ::lspb::CliEnterRoom *clienterroom_;
    ::lspb::CliInitOver *cliinitover_;
    ::lspb::CliOperate *clioperate_;
    ::PROTOBUF_NAMESPACE_ID::int32 userid_;
    int moduleid_;
    int methodid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    friend struct ::TableStruct_cliReq_2eproto;
  };
  // ===================================================================

  // ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif // __GNUC__
  // CliReq

  // int32 userId = 1;
  inline void CliReq::clear_userid()
  {
    userid_ = 0;
  }
  inline ::PROTOBUF_NAMESPACE_ID::int32 CliReq::_internal_userid() const
  {
    return userid_;
  }
  inline ::PROTOBUF_NAMESPACE_ID::int32 CliReq::userid() const
  {
    // @@protoc_insertion_point(field_get:lspb.CliReq.userId)
    return _internal_userid();
  }
  inline void CliReq::_internal_set_userid(::PROTOBUF_NAMESPACE_ID::int32 value)
  {

    userid_ = value;
  }
  inline void CliReq::set_userid(::PROTOBUF_NAMESPACE_ID::int32 value)
  {
    _internal_set_userid(value);
    // @@protoc_insertion_point(field_set:lspb.CliReq.userId)
  }

  // .lspb.ModuleId moduleId = 2;
  inline void CliReq::clear_moduleid()
  {
    moduleid_ = 0;
  }
  inline ::lspb::ModuleId CliReq::_internal_moduleid() const
  {
    return static_cast<::lspb::ModuleId>(moduleid_);
  }
  inline ::lspb::ModuleId CliReq::moduleid() const
  {
    // @@protoc_insertion_point(field_get:lspb.CliReq.moduleId)
    return _internal_moduleid();
  }
  inline void CliReq::_internal_set_moduleid(::lspb::ModuleId value)
  {

    moduleid_ = value;
  }
  inline void CliReq::set_moduleid(::lspb::ModuleId value)
  {
    _internal_set_moduleid(value);
    // @@protoc_insertion_point(field_set:lspb.CliReq.moduleId)
  }

  // .lspb.ClientMsgType methodId = 3;
  inline void CliReq::clear_methodid()
  {
    methodid_ = 0;
  }
  inline ::lspb::ClientMsgType CliReq::_internal_methodid() const
  {
    return static_cast<::lspb::ClientMsgType>(methodid_);
  }
  inline ::lspb::ClientMsgType CliReq::methodid() const
  {
    // @@protoc_insertion_point(field_get:lspb.CliReq.methodId)
    return _internal_methodid();
  }
  inline void CliReq::_internal_set_methodid(::lspb::ClientMsgType value)
  {

    methodid_ = value;
  }
  inline void CliReq::set_methodid(::lspb::ClientMsgType value)
  {
    _internal_set_methodid(value);
    // @@protoc_insertion_point(field_set:lspb.CliReq.methodId)
  }

  // .lspb.CliEnterRoom cliEnterRoom = 101;
  inline bool CliReq::_internal_has_clienterroom() const
  {
    return this != internal_default_instance() && clienterroom_ != nullptr;
  }
  inline bool CliReq::has_clienterroom() const
  {
    return _internal_has_clienterroom();
  }
  inline const ::lspb::CliEnterRoom &CliReq::_internal_clienterroom() const
  {
    const ::lspb::CliEnterRoom *p = clienterroom_;
    return p != nullptr ? *p : *reinterpret_cast<const ::lspb::CliEnterRoom *>(&::lspb::_CliEnterRoom_default_instance_);
  }
  inline const ::lspb::CliEnterRoom &CliReq::clienterroom() const
  {
    // @@protoc_insertion_point(field_get:lspb.CliReq.cliEnterRoom)
    return _internal_clienterroom();
  }
  inline void CliReq::unsafe_arena_set_allocated_clienterroom(
      ::lspb::CliEnterRoom *clienterroom)
  {
    if (GetArena() == nullptr)
    {
      delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite *>(clienterroom_);
    }
    clienterroom_ = clienterroom;
    if (clienterroom)
    {
    }
    else
    {
    }
    // @@protoc_insertion_point(field_unsafe_arena_set_allocated:lspb.CliReq.cliEnterRoom)
  }
  inline ::lspb::CliEnterRoom *CliReq::release_clienterroom()
  {
    auto temp = unsafe_arena_release_clienterroom();
    if (GetArena() != nullptr)
    {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    return temp;
  }
  inline ::lspb::CliEnterRoom *CliReq::unsafe_arena_release_clienterroom()
  {
    // @@protoc_insertion_point(field_release:lspb.CliReq.cliEnterRoom)

    ::lspb::CliEnterRoom *temp = clienterroom_;
    clienterroom_ = nullptr;
    return temp;
  }
  inline ::lspb::CliEnterRoom *CliReq::_internal_mutable_clienterroom()
  {

    if (clienterroom_ == nullptr)
    {
      auto *p = CreateMaybeMessage<::lspb::CliEnterRoom>(GetArena());
      clienterroom_ = p;
    }
    return clienterroom_;
  }
  inline ::lspb::CliEnterRoom *CliReq::mutable_clienterroom()
  {
    // @@protoc_insertion_point(field_mutable:lspb.CliReq.cliEnterRoom)
    return _internal_mutable_clienterroom();
  }
  inline void CliReq::set_allocated_clienterroom(::lspb::CliEnterRoom *clienterroom)
  {
    ::PROTOBUF_NAMESPACE_ID::Arena *message_arena = GetArena();
    if (message_arena == nullptr)
    {
      delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite *>(clienterroom_);
    }
    if (clienterroom)
    {
      ::PROTOBUF_NAMESPACE_ID::Arena *submessage_arena =
          reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite *>(clienterroom)->GetArena();
      if (message_arena != submessage_arena)
      {
        clienterroom = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
            message_arena, clienterroom, submessage_arena);
      }
    }
    else
    {
    }
    clienterroom_ = clienterroom;
    // @@protoc_insertion_point(field_set_allocated:lspb.CliReq.cliEnterRoom)
  }

  // .lspb.CliInitOver cliInitOver = 102;
  inline bool CliReq::_internal_has_cliinitover() const
  {
    return this != internal_default_instance() && cliinitover_ != nullptr;
  }
  inline bool CliReq::has_cliinitover() const
  {
    return _internal_has_cliinitover();
  }
  inline const ::lspb::CliInitOver &CliReq::_internal_cliinitover() const
  {
    const ::lspb::CliInitOver *p = cliinitover_;
    return p != nullptr ? *p : *reinterpret_cast<const ::lspb::CliInitOver *>(&::lspb::_CliInitOver_default_instance_);
  }
  inline const ::lspb::CliInitOver &CliReq::cliinitover() const
  {
    // @@protoc_insertion_point(field_get:lspb.CliReq.cliInitOver)
    return _internal_cliinitover();
  }
  inline void CliReq::unsafe_arena_set_allocated_cliinitover(
      ::lspb::CliInitOver *cliinitover)
  {
    if (GetArena() == nullptr)
    {
      delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite *>(cliinitover_);
    }
    cliinitover_ = cliinitover;
    if (cliinitover)
    {
    }
    else
    {
    }
    // @@protoc_insertion_point(field_unsafe_arena_set_allocated:lspb.CliReq.cliInitOver)
  }
  inline ::lspb::CliInitOver *CliReq::release_cliinitover()
  {
    auto temp = unsafe_arena_release_cliinitover();
    if (GetArena() != nullptr)
    {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    return temp;
  }
  inline ::lspb::CliInitOver *CliReq::unsafe_arena_release_cliinitover()
  {
    // @@protoc_insertion_point(field_release:lspb.CliReq.cliInitOver)

    ::lspb::CliInitOver *temp = cliinitover_;
    cliinitover_ = nullptr;
    return temp;
  }
  inline ::lspb::CliInitOver *CliReq::_internal_mutable_cliinitover()
  {

    if (cliinitover_ == nullptr)
    {
      auto *p = CreateMaybeMessage<::lspb::CliInitOver>(GetArena());
      cliinitover_ = p;
    }
    return cliinitover_;
  }
  inline ::lspb::CliInitOver *CliReq::mutable_cliinitover()
  {
    // @@protoc_insertion_point(field_mutable:lspb.CliReq.cliInitOver)
    return _internal_mutable_cliinitover();
  }
  inline void CliReq::set_allocated_cliinitover(::lspb::CliInitOver *cliinitover)
  {
    ::PROTOBUF_NAMESPACE_ID::Arena *message_arena = GetArena();
    if (message_arena == nullptr)
    {
      delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite *>(cliinitover_);
    }
    if (cliinitover)
    {
      ::PROTOBUF_NAMESPACE_ID::Arena *submessage_arena =
          reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite *>(cliinitover)->GetArena();
      if (message_arena != submessage_arena)
      {
        cliinitover = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
            message_arena, cliinitover, submessage_arena);
      }
    }
    else
    {
    }
    cliinitover_ = cliinitover;
    // @@protoc_insertion_point(field_set_allocated:lspb.CliReq.cliInitOver)
  }

  // .lspb.CliOperate cliOperate = 103;
  inline bool CliReq::_internal_has_clioperate() const
  {
    return this != internal_default_instance() && clioperate_ != nullptr;
  }
  inline bool CliReq::has_clioperate() const
  {
    return _internal_has_clioperate();
  }
  inline const ::lspb::CliOperate &CliReq::_internal_clioperate() const
  {
    const ::lspb::CliOperate *p = clioperate_;
    return p != nullptr ? *p : *reinterpret_cast<const ::lspb::CliOperate *>(&::lspb::_CliOperate_default_instance_);
  }
  inline const ::lspb::CliOperate &CliReq::clioperate() const
  {
    // @@protoc_insertion_point(field_get:lspb.CliReq.cliOperate)
    return _internal_clioperate();
  }
  inline void CliReq::unsafe_arena_set_allocated_clioperate(
      ::lspb::CliOperate *clioperate)
  {
    if (GetArena() == nullptr)
    {
      delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite *>(clioperate_);
    }
    clioperate_ = clioperate;
    if (clioperate)
    {
    }
    else
    {
    }
    // @@protoc_insertion_point(field_unsafe_arena_set_allocated:lspb.CliReq.cliOperate)
  }
  inline ::lspb::CliOperate *CliReq::release_clioperate()
  {
    auto temp = unsafe_arena_release_clioperate();
    if (GetArena() != nullptr)
    {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    return temp;
  }
  inline ::lspb::CliOperate *CliReq::unsafe_arena_release_clioperate()
  {
    // @@protoc_insertion_point(field_release:lspb.CliReq.cliOperate)

    ::lspb::CliOperate *temp = clioperate_;
    clioperate_ = nullptr;
    return temp;
  }
  inline ::lspb::CliOperate *CliReq::_internal_mutable_clioperate()
  {

    if (clioperate_ == nullptr)
    {
      auto *p = CreateMaybeMessage<::lspb::CliOperate>(GetArena());
      clioperate_ = p;
    }
    return clioperate_;
  }
  inline ::lspb::CliOperate *CliReq::mutable_clioperate()
  {
    // @@protoc_insertion_point(field_mutable:lspb.CliReq.cliOperate)
    return _internal_mutable_clioperate();
  }
  inline void CliReq::set_allocated_clioperate(::lspb::CliOperate *clioperate)
  {
    ::PROTOBUF_NAMESPACE_ID::Arena *message_arena = GetArena();
    if (message_arena == nullptr)
    {
      delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite *>(clioperate_);
    }
    if (clioperate)
    {
      ::PROTOBUF_NAMESPACE_ID::Arena *submessage_arena =
          reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite *>(clioperate)->GetArena();
      if (message_arena != submessage_arena)
      {
        clioperate = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
            message_arena, clioperate, submessage_arena);
      }
    }
    else
    {
    }
    clioperate_ = clioperate;
    // @@protoc_insertion_point(field_set_allocated:lspb.CliReq.cliOperate)
  }

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif // __GNUC__

  // @@protoc_insertion_point(namespace_scope)

} // namespace lspb

PROTOBUF_NAMESPACE_OPEN

template <>
struct is_proto_enum<::lspb::ClientMsgType> : ::std::true_type
{
};
template <>
inline const EnumDescriptor *GetEnumDescriptor<::lspb::ClientMsgType>()
{
  return ::lspb::ClientMsgType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cliReq_2eproto

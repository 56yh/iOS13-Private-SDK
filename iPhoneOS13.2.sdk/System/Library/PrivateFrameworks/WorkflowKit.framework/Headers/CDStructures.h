//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Array;

struct AtomicSharedPtr<realm::_impl::CollectionNotifier, true> {
    struct shared_ptr<realm::_impl::CollectionNotifier> m_ptr;
};

struct BacklinkColumn;

struct BasicRow<const realm::Table> {
    struct BasicTableRef<realm::Table> m_table;
    unsigned long long m_row_ndx;
    struct RowBase *m_prev;
    struct RowBase *m_next;
};

struct BasicRow<realm::Table> {
    struct BasicTableRef<realm::Table> m_table;
    unsigned long long m_row_ndx;
    struct RowBase *m_prev;
    struct RowBase *m_next;
};

struct BasicTableRef<realm::Table> {
    struct Table *m_ptr;
};

struct BinaryData {
    char *m_data;
    unsigned long long m_size;
};

struct BpTree<long long> {
    struct unique_ptr<realm::Array, std::__1::default_delete<realm::Array>> m_root;
};




struct Chunk;

struct CollectionChangeSet {
    struct IndexSet deletions;
    struct IndexSet insertions;
    struct IndexSet modifications;
    struct IndexSet modifications_new;
    struct vector<realm::CollectionChangeSet::Move, std::__1::allocator<realm::CollectionChangeSet::Move>> moves;
    struct vector<realm::IndexSet, std::__1::allocator<realm::IndexSet>> columns;
};

struct CollectionNotifier;

struct Column<long long> {
    CDUnknownFunctionPointerType *_vptr$ColumnBase;
    unsigned long long m_column_ndx;
    struct unique_ptr<realm::StringIndex, std::__1::default_delete<realm::StringIndex>> m_search_index;
    struct BpTree<long long> m_tree;
};

struct Config {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> path;
    struct BinaryData realm_data;
    struct vector<char, std::__1::allocator<char>> encryption_key;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> fifo_files_fallback_path;
    _Bool in_memory;
    unsigned char schema_mode;
    struct Optional<realm::Schema> schema;
    unsigned long long schema_version;
    struct function<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> migration_function;
    struct function<void (std::__1::shared_ptr<realm::Realm>)> initialization_function;
    struct function<bool (unsigned long long, unsigned long long)> should_compact_on_launch_function;
    _Bool cache;
    _Bool disable_format_upgrade;
    _Bool automatic_change_notifications;
    struct Optional<unsigned long> execution_context;
    struct shared_ptr<realm::SyncConfig> sync_config;
    _Bool force_sync_history;
    struct function<std::__1::shared_ptr<realm::AuditInterface>()> audit_factory;
};

struct Descriptor;

struct DescriptorOrdering {
    struct vector<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>>> m_descriptors;
};

struct Handle<realm::_impl::CollectionNotifier> {
    struct CollectionNotifier *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct Handle<realm::_impl::ObjectNotifier> {
    struct ObjectNotifier *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct Handle<realm::_impl::ResultsNotifier> {
    struct ResultsNotifier *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct IndexSet {
    struct vector<realm::_impl::ChunkedRangeVector::Chunk, std::__1::allocator<realm::_impl::ChunkedRangeVector::Chunk>> m_data;
};

struct LinkView;

struct List {
    shared_ptr_130f66cc m_realm;
    struct ObjectSchema *m_object_schema;
    struct shared_ptr<realm::LinkView> m_link_view;
    struct BasicTableRef<realm::Table> m_table;
    struct Handle<realm::_impl::CollectionNotifier> m_notifier;
};

struct Move;

struct NotificationToken {
    struct AtomicSharedPtr<realm::_impl::CollectionNotifier, true> m_notifier;
    unsigned long long m_token;
};

struct Object {
    shared_ptr_130f66cc m_realm;
    struct ObjectSchema *m_object_schema;
    struct BasicRow<realm::Table> m_row;
    struct Handle<realm::_impl::ObjectNotifier> m_notifier;
};

struct ObjectNotifier;

struct ObjectSchema {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    struct vector<realm::Property, std::__1::allocator<realm::Property>> _field2;
    struct vector<realm::Property, std::__1::allocator<realm::Property>> _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
};

struct Optional<realm::Schema> {
    union {
        struct Schema m_value;
        char m_null_state;
    } ;
    _Bool m_engaged;
};

struct Optional<unsigned long long> {
    CDUnion_f76efdce ;
    _Bool m_engaged;
};

struct Optional<unsigned long> {
    CDUnion_f76efdce ;
    _Bool m_engaged;
};

struct OptionalBase;

struct Property {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned char _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    struct TaggedBool<realm::IsPrimaryTag> _field6;
    struct TaggedBool<realm::IsIndexedTag> _field7;
    unsigned long long _field8;
};

struct Query {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> error_code;
    struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup>> m_groups;
    struct vector<unsigned long, std::__1::allocator<unsigned long>> m_subtable_path;
    struct shared_ptr<const realm::Descriptor> m_current_descriptor;
    struct BasicTableRef<realm::Table> m_table;
    struct RowIndexes *m_view;
    struct shared_ptr<realm::LinkView> m_source_link_view;
    struct TableViewBase *m_source_table_view;
    struct unique_ptr<realm::TableViewBase, std::__1::default_delete<realm::TableViewBase>> m_owned_source_table_view;
};

struct QueryGroup;

struct RLMClassInfo {
    id _field1;
    id _field2;
    struct ObjectSchema *_field3;
    struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *>> _field4;
    struct Table *_field5;
    struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *>> _field6;
};

struct RLMObservationInfo {
    struct RLMObservationInfo *_field1;
    struct RLMObservationInfo *_field2;
    struct BasicRow<realm::Table> _field3;
    struct RLMClassInfo *_field4;
    id _field5;
    _Bool _field6;
    unsigned long long _field7;
    id _field8;
    id _field9;
    id _field10;
};

struct RLMResultsSetInfo;

struct RLMSchemaInfo {
    struct unordered_map<NSString *, RLMClassInfo, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, RLMClassInfo>>> m_objects;
};

struct Realm;

struct Results {
    shared_ptr_130f66cc m_realm;
    struct ObjectSchema *m_object_schema;
    struct Query m_query;
    struct TableView m_table_view;
    struct shared_ptr<realm::LinkView> m_link_view;
    struct BasicTableRef<realm::Table> m_table;
    struct DescriptorOrdering m_descriptor_ordering;
    struct Handle<realm::_impl::ResultsNotifier> m_notifier;
    int m_mode;
    int m_update_policy;
    _Bool m_has_used_table_view;
    _Bool m_wants_background_updates;
};

struct ResultsNotifier;

struct RowBase;

struct RowIndexes;

struct Schema {
    struct ObjectSchema *__begin_;
    struct ObjectSchema *__end_;
    struct __compressed_pair<realm::ObjectSchema *, std::__1::allocator<realm::ObjectSchema>> {
        struct ObjectSchema *__value_;
    } __end_cap_;
};

struct SipHasher {
    int _c;
    int _d;
    unsigned long long _v0;
    unsigned long long _v1;
    unsigned long long _v2;
    unsigned long long _v3;
    struct TailBuffer _buffer;
};

struct StringIndex;

struct SyncConfig;

struct Table;

struct TableView {
    CDUnknownFunctionPointerType *_vptr$RowIndexes;
    struct Column<long long> m_row_indexes;
    unsigned long long m_limit_count;
    unsigned long long m_debug_cookie;
    struct BasicTableRef<realm::Table> m_table;
    struct BacklinkColumn *m_linked_column;
    struct BasicRow<const realm::Table> m_linked_row;
    struct shared_ptr<const realm::LinkView> m_linkview_source;
    unsigned long long m_distinct_column_source;
    struct DescriptorOrdering m_descriptor_ordering;
    struct Query m_query;
    unsigned long long m_start;
    unsigned long long m_end;
    unsigned long long m_limit;
    struct Optional<unsigned long long> m_last_seen_version;
    unsigned long long m_num_detached_refs;
};

struct TableViewBase;

struct TaggedBool<realm::IsIndexedTag> {
    _Bool _field1;
};

struct TaggedBool<realm::IsPrimaryTag> {
    _Bool _field1;
};

struct TailBuffer {
    unsigned long long value;
};

struct ThreadSafeReferenceBase;

struct WFRowTemplateValueInfo {
    Class _field1;
    SEL _field2;
    SEL _field3;
    id _field4;
    id _field5;
};

struct _WFDatabaseResultsSlice {
    unsigned long long startIndex;
    unsigned long long endIndex;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*> *__next_;
};

struct __shared_weak_count;

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __value_;
    } __r_;
};

struct function<bool (unsigned long long, unsigned long long)> {
    struct __value_func<bool (unsigned long long, unsigned long long)> {
        struct type __buf_;
        struct __base<bool (unsigned long long, unsigned long long)> *__f_;
    } __f_;
};

struct function<std::__1::shared_ptr<realm::AuditInterface>()> {
    struct __value_func<std::__1::shared_ptr<realm::AuditInterface>()> {
        struct type __buf_;
        struct __base<std::__1::shared_ptr<realm::AuditInterface>()> *__f_;
    } __f_;
};

struct function<void (std::__1::shared_ptr<realm::Realm>)> {
    struct __value_func<void (std::__1::shared_ptr<realm::Realm>)> {
        struct type __buf_;
        struct __base<void (std::__1::shared_ptr<realm::Realm>)> *__f_;
    } __f_;
};

struct function<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> {
    struct __value_func<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> {
        struct type __buf_;
        struct __base<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> *__f_;
    } __f_;
};

struct shared_ptr<const realm::Descriptor> {
    struct Descriptor *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<const realm::LinkView> {
    struct LinkView *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<realm::LinkView> {
    struct LinkView *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<realm::Realm> {
    struct Realm *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<realm::SyncConfig> {
    struct SyncConfig *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<realm::_impl::CollectionNotifier> {
    struct CollectionNotifier *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct type {
    unsigned char __lx[32];
};

struct unique_ptr<(anonymous namespace)::OptionalBase, std::__1::default_delete<(anonymous namespace)::OptionalBase>> {
    struct __compressed_pair<(anonymous namespace)::OptionalBase *, std::__1::default_delete<(anonymous namespace)::OptionalBase>> {
        struct OptionalBase *__value_;
    } __ptr_;
};

struct unique_ptr<RLMObservationInfo, std::__1::default_delete<RLMObservationInfo>> {
    struct __compressed_pair<RLMObservationInfo *, std::__1::default_delete<RLMObservationInfo>> {
        struct RLMObservationInfo *__value_;
    } __ptr_;
};

struct unique_ptr<RLMResultsSetInfo, std::__1::default_delete<RLMResultsSetInfo>> {
    struct __compressed_pair<RLMResultsSetInfo *, std::__1::default_delete<RLMResultsSetInfo>> {
        struct RLMResultsSetInfo *__value_;
    } __ptr_;
};

struct unique_ptr<id [], std::__1::default_delete<id []>> {
    struct __compressed_pair<__strong id *, std::__1::default_delete<id []>> {
        id *__value_;
    } __ptr_;
};

struct unique_ptr<realm::Array, std::__1::default_delete<realm::Array>> {
    struct __compressed_pair<realm::Array *, std::__1::default_delete<realm::Array>> {
        struct Array *__value_;
    } __ptr_;
};

struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>;

struct unique_ptr<realm::StringIndex, std::__1::default_delete<realm::StringIndex>> {
    struct __compressed_pair<realm::StringIndex *, std::__1::default_delete<realm::StringIndex>> {
        struct StringIndex *__value_;
    } __ptr_;
};

struct unique_ptr<realm::TableViewBase, std::__1::default_delete<realm::TableViewBase>> {
    struct __compressed_pair<realm::TableViewBase *, std::__1::default_delete<realm::TableViewBase>> {
        struct TableViewBase *__value_;
    } __ptr_;
};

struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase>> {
    struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase>> {
        struct ThreadSafeReferenceBase *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<NSString *, RLMClassInfo, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, RLMClassInfo>>> {
    struct __hash_table<std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::hash<NSString *>, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::equal_to<NSString *>, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, RLMClassInfo>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::hash<NSString *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::equal_to<NSString *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<NSString *, realm::IndexSet, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, realm::IndexSet>>> {
    struct __hash_table<std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::hash<NSString *>, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::equal_to<NSString *>, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, realm::IndexSet>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::hash<NSString *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::equal_to<NSString *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *>> {
    struct RLMClassInfo **_field1;
    struct RLMClassInfo **_field2;
    struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *>> {
        struct RLMClassInfo **_field1;
    } _field3;
};

struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *>> {
    struct RLMObservationInfo **_field1;
    struct RLMObservationInfo **_field2;
    struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *>> {
        struct RLMObservationInfo **_field1;
    } _field3;
};

struct vector<char, std::__1::allocator<char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<char *, std::__1::allocator<char>> {
        char *__value_;
    } __end_cap_;
};

struct vector<realm::CollectionChangeSet::Move, std::__1::allocator<realm::CollectionChangeSet::Move>> {
    struct Move *__begin_;
    struct Move *__end_;
    struct __compressed_pair<realm::CollectionChangeSet::Move *, std::__1::allocator<realm::CollectionChangeSet::Move>> {
        struct Move *__value_;
    } __end_cap_;
};

struct vector<realm::IndexSet, std::__1::allocator<realm::IndexSet>> {
    struct IndexSet *__begin_;
    struct IndexSet *__end_;
    struct __compressed_pair<realm::IndexSet *, std::__1::allocator<realm::IndexSet>> {
        struct IndexSet *__value_;
    } __end_cap_;
};

struct vector<realm::Property, std::__1::allocator<realm::Property>> {
    struct Property *_field1;
    struct Property *_field2;
    struct __compressed_pair<realm::Property *, std::__1::allocator<realm::Property>> {
        struct Property *_field1;
    } _field3;
};

struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup>> {
    struct QueryGroup *__begin_;
    struct QueryGroup *__end_;
    struct __compressed_pair<realm::QueryGroup *, std::__1::allocator<realm::QueryGroup>> {
        struct QueryGroup *__value_;
    } __end_cap_;
};

struct vector<realm::_impl::ChunkedRangeVector::Chunk, std::__1::allocator<realm::_impl::ChunkedRangeVector::Chunk>> {
    struct Chunk *__begin_;
    struct Chunk *__end_;
    struct __compressed_pair<realm::_impl::ChunkedRangeVector::Chunk *, std::__1::allocator<realm::_impl::ChunkedRangeVector::Chunk>> {
        struct Chunk *__value_;
    } __end_cap_;
};

struct vector<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>>> {
    struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> *__begin_;
    struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> *__end_;
    struct __compressed_pair<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>*, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>>> {
        struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> *__value_;
    } __end_cap_;
};

struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

// Template types
typedef struct shared_ptr<realm::Realm> {
    struct Realm *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_130f66cc;

typedef struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase>> {
    struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase>> {
        struct ThreadSafeReferenceBase *__value_;
    } __ptr_;
} unique_ptr_d0e912ad;

#pragma mark Typedef'd Unions

typedef union {
    unsigned long long m_value;
    char m_null_state;
} CDUnion_f76efdce;


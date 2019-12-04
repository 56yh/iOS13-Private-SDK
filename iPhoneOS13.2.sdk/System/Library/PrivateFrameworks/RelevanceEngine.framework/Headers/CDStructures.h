//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BayesianModel {
    struct _opaque_pthread_rwlock_t m_rwlock;
    struct unordered_map<unsigned long long, Gaussian, BayesianModel::SuperHasher, BayesianModel::SuperHasher, std::__1::allocator<std::__1::pair<const unsigned long long, Gaussian>>> m_features;
    int m_nFeaturesCount;
    unsigned long long m_nTotalTrue;
    unsigned long long m_nTotalExamples;
    double m_dSumPredictions;
    double m_dLogScore;
    double m_dNormalizedLogScore;
    double m_dEpsilon;
    int m_nModelVersion;
    unsigned long long m_nCalibrationCurveTrue[10];
    unsigned long long m_nCalibrationCurveCount[10];
    unsigned long long m_maxFeatureCoordinates;
    unsigned long long m_nNumberOfTraining;
    struct Gaussian m_empty;
};




struct Gaussian {
    double m_dPrecision;
    double m_dPredicionMean;
};



struct REContentFeatureExtractor {
    struct _opaque_pthread_rwlock_t m_rwlock;
    struct REFancyShrinkingDictionary m_trueTopTokens;
    struct REFancyShrinkingDictionary m_falseTopTokens;
};

struct REFancyShrinkingDictionary {
    struct unordered_map<std::__1::basic_string<char>, unsigned short, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned short>>> m_mapDocumentFrequency;
    unsigned long long m_maxSize;
    unsigned long long m_shrinkSize;
    int m_nVersion;
    _Bool m_trimTop;
    _Bool m_shinksOnTotalCount;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*> *__next_;
};

struct _opaque_pthread_rwlock_t {
    long long __sig;
    char __opaque[192];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<std::__1::basic_string<char>, unsigned short, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned short>>> {
    struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char>>, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char>>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, Gaussian, BayesianModel::SuperHasher, BayesianModel::SuperHasher, std::__1::allocator<std::__1::pair<const unsigned long long, Gaussian>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, Gaussian>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, Gaussian>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *_field1;
    unsigned long long *_field2;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *_field1;
    } _field3;
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

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

// Template types
typedef struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *_field1;
    unsigned long long *_field2;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *_field1;
    } _field3;
} vector_cfeb9b06;


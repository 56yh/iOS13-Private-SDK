//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CalDatabase;

struct CalEventIdsSearchContext {
    struct __CFArray *_field1;
    struct __CFSet *_field2;
    struct __CFSet *_field3;
    _Bool *_field4;
    _Bool *_field5;
    struct CalDatabase *_field6;
};

struct CalEventOccurrenceCache;

struct CalEventOccurrenceSearchContext {
    struct __CFSet *_field1;
    struct __CFArray *_field2;
    struct __CFArray *_field3;
    struct __CFArray *_field4;
    _Bool *_field5;
    _Bool *_field6;
    double _field7;
    double _field8;
    int _field9;
    double _field10;
    unsigned int _field11;
    struct CalEventOccurrenceCache *_field12;
    CDUnknownFunctionPointerType _field13;
    void *_field14;
    int _field15;
    _Bool _field16;
    struct __CFString *_field17;
    double _field18;
    _Bool _field19;
    double _field20;
};

struct CalLocationIdsSearchContext {
    struct __CFArray *_field1;
    unsigned int _field2;
    _Bool *_field3;
    _Bool *_field4;
    struct CalDatabase *_field5;
};

struct CalParticipantIdsSearchContext {
    struct __CFArray *_field1;
    unsigned int _field2;
    _Bool *_field3;
    _Bool *_field4;
    struct CalDatabase *_field5;
};

struct __CFArray;

struct __CFSet;

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    double _field6;
} CDStruct_79f9e052;


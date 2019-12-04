//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures






struct entryList {
    struct lruEntry *tqh_first;
    struct lruEntry **tqh_last;
};

struct lruEntry {
    id _field1;
    long long _field2;
    struct {
        struct lruEntry *_field1;
        struct lruEntry **_field2;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;


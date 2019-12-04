//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures





struct HKAxisMinMaxDefinition {
    double _field1;
    double _field2;
};

struct HKLinearTransform {
    double offset;
    double scale;
};

struct HKRange {
    double _field1;
    double _field2;
};

struct HKStepSizeTableEntryDefn {
    double _field1;
    double _field2;
};

struct IncrementalSearchResultsDefn {
    unsigned long long _field1;
    struct _NSRange _field2[64];
};





struct _HKLocationSpan {
    double _field1;
    double _field2;
};


struct _WDActivitySummaryAverages {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long index;
    long long zoom;
} CDStruct_6ca94699;

typedef struct {
    CDStruct_c3b9c2ee _field1;
    CDStruct_c3b9c2ee _field2;
} CDStruct_90e2a262;

typedef struct {
    CDStruct_6ca94699 blockPath;
    long long index;
} CDStruct_767cbfa4;

typedef struct {
    CDStruct_767cbfa4 min;
    CDStruct_767cbfa4 max;
} CDStruct_f3788345;

typedef struct {
    struct CGRect transformedRect;
    double labelValue;
    long long options;
} CDStruct_d6e4b0bd;

// Ambiguous groups
typedef struct {
    unsigned int timestamp:1;
    unsigned int type:1;
} CDStruct_1769069f;


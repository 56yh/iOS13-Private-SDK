//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures






struct _PXQuadTreeStoreNode {
    struct _PXQuadTreeStoreNode *_field1;
    struct _PXQuadTreeStoreNode *_field2;
    struct _PXQuadTreeStoreNode *_field3;
    struct _PXQuadTreeStoreNode *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
    CDStruct_02837cd9 _field7;
    id _field8;
    struct *_field9;
};

#pragma mark Typedef'd Structures

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

typedef struct {
    struct CLLocationCoordinate2D _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_26e8d939;


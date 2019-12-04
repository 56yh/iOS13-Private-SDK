//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLToolsDevice, MTLToolsPointerArray;
@protocol MTLDevice;

@interface MTLToolsObject : NSObject
{
    MTLToolsObject *_parent;
    MTLToolsPointerArray *_tracker;
    MTLToolsObject *_baseObject;
    MTLToolsDevice *_device;
    struct ILayerLockingPolicy *_lockingPolicy;
}

+ (void)visitObjects:(id)arg1 withVisitor:(id)arg2;
+ (id)dispatchQueue;
@property(nonatomic) struct ILayerLockingPolicy *lockingPolicy; // @synthesize lockingPolicy=_lockingPolicy;
@property(nonatomic) MTLToolsPointerArray *tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id baseObject; // @synthesize baseObject=_baseObject;
- (void)acceptVisitor:(id)arg1;
- (id)strongParent;
- (id)parent;
- (void)setOriginalObject:(id)arg1;
- (id)originalObject;
- (id)baseObjectWithClass:(Class)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(struct ILayerLockingPolicy *)arg3;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
@property(readonly, nonatomic) id <MTLDevice> device;

@end


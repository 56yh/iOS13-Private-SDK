//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class MTLDebugHeap, NSString;
@protocol MTLHeap;

@interface MTLDebugResource : NSObject 
{
    id _baseObject;
    id _parent;
    MTLDebugHeap *_heap;
    _Bool _hasTrackedMakeAliasable;
}

@property _Bool hasTrackedMakeAliasable; // @synthesize hasTrackedMakeAliasable=_hasTrackedMakeAliasable;
@property(readonly) id baseObject; // @synthesize baseObject=_baseObject;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasResource:(id)arg1;
@property(readonly) id <MTLHeap> heap;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


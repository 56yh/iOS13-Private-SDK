//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DSharegroupToken : NSObject
{
}

+ (id)glExport;
+ (id)sharegroupPool;
+ (id)animation;
+ (id)interactiveCanvas;
- (BOOL)hasInterestForDiscreteGraphics;
- (BOOL)shouldClearCurrentContextOnOwnerChange;
- (BOOL)shouldGarbageCollect;
- (BOOL)mustRunOnMainThread;
- (BOOL)canBeCreatedFromOtherThread;
- (id)targetThreadForFlushingWithOwningThread:(id)arg1;
- (BOOL)isOneShot;
- (BOOL)forceGL;

@end


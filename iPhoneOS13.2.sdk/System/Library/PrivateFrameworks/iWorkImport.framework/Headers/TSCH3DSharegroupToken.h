//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
- (_Bool)hasInterestForDiscreteGraphics;
- (_Bool)shouldClearCurrentContextOnOwnerChange;
- (_Bool)shouldGarbageCollect;
- (_Bool)mustRunOnMainThread;
- (_Bool)canBeCreatedFromOtherThread;
- (id)targetThreadForFlushingWithOwningThread:(id)arg1;
- (_Bool)isOneShot;
- (_Bool)forceGL;

@end

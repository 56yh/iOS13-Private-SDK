//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class TSCH3DScene;

__attribute__((visibility("hidden")))
@interface TSCH3DScenePropertyAccessor : NSObject <TSCHUnretainedParent>
{
    TSCH3DScene *mScene;
}

+ (id)accessorWithScene:(id)arg1;
@property(readonly, nonatomic) TSCH3DScene *scene; // @synthesize scene=mScene;
- (void)clearParent;
- (void)dealloc;
- (id)initWithScene:(id)arg1;

@end


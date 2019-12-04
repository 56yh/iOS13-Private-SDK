//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/BSDescriptionProviding-Protocol.h>


@class FBProcess, NSDictionary, NSString;
@protocol FBSProcess, SBLockScreenPluginLifecycleObserver;

@interface SBLockScreenPluginContext : NSObject <BSDescriptionProviding, NSCopying>
{
    NSString *_name;
    NSDictionary *_userInfo;
    FBProcess<FBSProcess> *_process;
    id /* block */ _auxiliaryAnimation;
    id <SBLockScreenPluginLifecycleObserver> _observer;
}

+ (id)contextWithName:(id)arg1;
@property(retain, nonatomic) id <SBLockScreenPluginLifecycleObserver> observer; // @synthesize observer=_observer;
@property(copy, nonatomic) id /* block */ auxiliaryAnimation; // @synthesize auxiliaryAnimation=_auxiliaryAnimation;
@property(retain, nonatomic) FBProcess<FBSProcess> *process; // @synthesize process=_process;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


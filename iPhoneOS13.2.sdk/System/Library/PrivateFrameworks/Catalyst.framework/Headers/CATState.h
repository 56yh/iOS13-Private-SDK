//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CATState : NSObject
{
    NSMutableDictionary *mTranstionByTriggeringEvent;
    NSString *_name;
    SEL _enterAction;
    SEL _exitAction;
}

+ (id)new;
@property(nonatomic) SEL exitAction; // @synthesize exitAction=_exitAction;
@property(nonatomic) SEL enterAction; // @synthesize enterAction=_enterAction;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)transitionWithTriggeringEvent:(id)arg1;
- (void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 action:(SEL)arg3;
- (void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)init;

@end


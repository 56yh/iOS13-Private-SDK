//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTimeJumpObserving-Protocol.h>

@class NSString;
@protocol SVPlayerItemObserving, SVVideoTimeProviding;

@interface SVVideoTimeJumpObserver : NSObject <SVVideoTimeJumpObserving>
{
    id /* block */ jumpBlock;
    id <SVPlayerItemObserving> _itemObserver;
    id <SVVideoTimeProviding> _timeProvider;
}

@property(readonly, nonatomic) id <SVVideoTimeProviding> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(readonly, nonatomic) id <SVPlayerItemObserving> itemObserver; // @synthesize itemObserver=_itemObserver;
@property(copy, nonatomic, setter=onJump:) id /* block */ jumpBlock; // @synthesize jumpBlock;
- (void)jumped:(id)arg1;
- (id)initWithItemObserver:(id)arg1 timeProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


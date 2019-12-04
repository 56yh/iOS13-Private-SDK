//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface _AFSiriClientState : NSObject
{
    NSMutableSet *_requestUUIDs;
    _Bool _hasActiveSession;
    _Bool _isListening;
    _Bool _isSpeaking;
}

@property(nonatomic) _Bool isSpeaking; // @synthesize isSpeaking=_isSpeaking;
@property(nonatomic) _Bool isListening; // @synthesize isListening=_isListening;
@property(nonatomic) _Bool hasActiveSession; // @synthesize hasActiveSession=_hasActiveSession;
@property(readonly, nonatomic) unsigned long long notifyState;
- (void)removeRequestUUID:(id)arg1;
- (void)addRequestUUID:(id)arg1;
- (id)init;

@end


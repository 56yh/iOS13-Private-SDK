//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UITouchForwardingRecipient : NSObject
{
    UIResponder *fromResponder;
    UIResponder *responder;
    long long recordedPhase;
    long long autocompletedPhase;
}

@property(nonatomic) long long autocompletedPhase; // @synthesize autocompletedPhase;
@property(nonatomic) long long recordedPhase; // @synthesize recordedPhase;
@property(nonatomic) __weak UIResponder *responder; // @synthesize responder;
@property(nonatomic) __weak UIResponder *fromResponder; // @synthesize fromResponder;
- (id)description;
- (id)initWithResponder:(id)arg1 fromResponder:(id)arg2;

@end


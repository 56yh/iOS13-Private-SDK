//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SAObjects/SATimerTimerAction-Protocol.h>

@class NSString, SATimerObject;

@interface SATimerSet : SADomainCommand <SATimerTimerAction>
{
}

+ (id)setWithDictionary:(id)arg1 context:(id)arg2;
+ (id)set;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SATimerObject *timer;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


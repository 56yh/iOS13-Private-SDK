//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString, NSURL;

@interface SAUIAppPunchOutEvent : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)appPunchOutEventWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appPunchOutEvent;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSURL *punchOutUri;
@property(copy, nonatomic) NSString *punchOutName;
@property(copy, nonatomic) NSString *originalCommandId;
@property(copy, nonatomic) NSString *bundleId;
@property(copy, nonatomic) NSString *appDisplayName;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSNumber, NSString;

@interface SAUserState : AceObject <SABackgroundContextObject>
{
}

+ (id)userStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)userState;
@property(copy, nonatomic) NSString *xpAbCookie;
@property(copy, nonatomic) NSString *userToken;
@property(copy, nonatomic) NSNumber *userHistoryUnmodifiable;
@property(copy, nonatomic) NSString *syncSharedUserId;
@property(copy, nonatomic) NSString *status;
@property(copy, nonatomic) NSString *sharedUserId;
@property(nonatomic) _Bool ageVerificationRequired;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


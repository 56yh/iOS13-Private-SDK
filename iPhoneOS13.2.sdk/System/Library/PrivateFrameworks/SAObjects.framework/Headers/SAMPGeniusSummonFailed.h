//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)geniusSummonFailedWithReason:(id)arg1;
+ (id)geniusSummonFailedWithErrorCode:(long long)arg1;
+ (id)geniusSummonFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geniusSummonFailed;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *reason;
@property(nonatomic) long long errorCode;
- (id)initWithReason:(id)arg1;
- (id)initWithErrorCode:(long long)arg1;
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


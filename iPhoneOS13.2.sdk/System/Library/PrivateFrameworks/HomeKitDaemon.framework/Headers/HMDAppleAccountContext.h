//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface HMDAppleAccountContext : HMFObject <HMFObject>
{
    NSString *_identifier;
    NSString *_username;
    NSString *_alternateDSID;
}

@property(readonly, copy) NSString *alternateDSID; // @synthesize alternateDSID=_alternateDSID;
@property(readonly, copy) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)initWithAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSData, NSDate;

@interface KTClientDataRecord : NSObject <NSSecureCoding>
{
    _Bool _verified;
    NSData *_clientData;
    unsigned long long _applicationVersion;
    NSData *_clientDataVRFOutput;
    NSDate *_markedForDeletion;
    NSDate *_deletionEscrowExpiry;
    NSDate *_addedDate;
}

+ (_Bool)supportsSecureCoding;
@property _Bool verified; // @synthesize verified=_verified;
@property(retain) NSDate *addedDate; // @synthesize addedDate=_addedDate;
@property(retain) NSDate *deletionEscrowExpiry; // @synthesize deletionEscrowExpiry=_deletionEscrowExpiry;
@property(retain) NSDate *markedForDeletion; // @synthesize markedForDeletion=_markedForDeletion;
@property(retain) NSData *clientDataVRFOutput; // @synthesize clientDataVRFOutput=_clientDataVRFOutput;
@property unsigned long long applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(retain) NSData *clientData; // @synthesize clientData=_clientData;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSingleDataRecord:(id)arg1;
- (id)initWithMutation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)debugDescription;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SASyncAppIdentifyingInfo : AceObject <SAAceSerializable>
{
}

+ (id)appIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appIdentifyingInfo;
@property(copy, nonatomic) NSString *version;
@property(copy, nonatomic) NSString *clientIdentifier;
@property(copy, nonatomic) NSString *bundleId;
@property(copy, nonatomic) NSString *buildNumber;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


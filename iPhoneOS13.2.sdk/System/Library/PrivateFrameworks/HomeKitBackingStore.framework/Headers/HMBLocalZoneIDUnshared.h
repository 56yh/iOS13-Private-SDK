//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBLocalZoneID-Protocol.h>

@class NSArray, NSData, NSString;

@interface HMBLocalZoneIDUnshared : HMFObject <HMBLocalZoneID>
{
    NSString *_name;
}

+ (id)shortDescription;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *token;
@property(readonly, nonatomic) NSArray *labels;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


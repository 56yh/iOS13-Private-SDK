//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/SFProductInventoryResult-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFProductInventoryResult : NSObject <SFProductInventoryResult, NSSecureCoding, NSCopying>
{
    NSString *_productIdentifier;
    NSArray *_availability;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *availability; // @synthesize availability=_availability;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

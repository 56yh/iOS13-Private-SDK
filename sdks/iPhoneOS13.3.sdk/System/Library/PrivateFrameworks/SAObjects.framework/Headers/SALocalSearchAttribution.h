//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SALocalSearchAttribution : AceObject <SAAceSerializable>
{
}

+ (id)attributionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)attribution;
@property(nonatomic) long long version;
@property(copy, nonatomic) NSArray *urls;
@property(copy, nonatomic) NSString *attributionId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


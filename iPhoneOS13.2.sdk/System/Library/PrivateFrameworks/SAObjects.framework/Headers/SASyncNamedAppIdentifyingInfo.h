//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SASyncAppIdentifyingInfo.h>

@class NSString;

@interface SASyncNamedAppIdentifyingInfo : SASyncAppIdentifyingInfo
{
}

+ (id)namedAppIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)namedAppIdentifyingInfo;
@property(copy, nonatomic) NSString *localizedBundleDisplayName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


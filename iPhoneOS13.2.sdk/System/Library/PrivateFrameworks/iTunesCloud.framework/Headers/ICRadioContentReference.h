//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSDictionary;

@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)storeItemWithIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *matchDictionary;
@property(readonly, nonatomic) long long contentType;

@end


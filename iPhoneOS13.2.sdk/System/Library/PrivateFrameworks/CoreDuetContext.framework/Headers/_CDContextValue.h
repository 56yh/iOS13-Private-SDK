//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSDate, NSMutableDictionary;
@protocol NSCopying><NSSecureCoding;

@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_metadata;
}

+ (_Bool)supportsSecureCoding;
+ (id)supportedContextValueClasses;
@property(retain, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSDate *lastModifiedDate;
@property(retain, nonatomic) NSObject<NSCopying><NSSecureCoding> *value;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString;

@interface AXSSKeyboardCommand : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_type;
    NSString *_standardCommandIdentifier;
}

+ (id)commandWithStandardCommandIdentifier:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *standardCommandIdentifier; // @synthesize standardCommandIdentifier=_standardCommandIdentifier;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToCommand:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *localizedName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStandardCommandIdentifier:(id)arg1;
- (id)_initWithType:(id)arg1 standardCommandIdentifier:(id)arg2;

@end


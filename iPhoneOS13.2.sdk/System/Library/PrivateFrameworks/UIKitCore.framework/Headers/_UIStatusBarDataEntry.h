//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@interface _UIStatusBarDataEntry : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _enabled;
}

+ (id)disabledEntry;
+ (id)entry;
+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)description;
- (id)_ui_descriptionBuilder;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initFromData:(const CDStruct_0942cde0 *)arg1 type:(int)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSArray;

@interface DNDSLegacyBehaviorOverride : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _overrideType;
    unsigned long long _mode;
    NSArray *_effectiveIntervals;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *effectiveIntervals; // @synthesize effectiveIntervals=_effectiveIntervals;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) unsigned long long overrideType; // @synthesize overrideType=_overrideType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOverrideType:(unsigned long long)arg1 mode:(unsigned long long)arg2 effectiveIntervals:(id)arg3;

@end


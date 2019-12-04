//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>





@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay;

@interface BKSHIDEventDeferringPredicate : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    BKSHIDEventDeferringEnvironment *_environment;
    BKSHIDEventDisplay *_display;
    BKSHIDEventDeferringToken *_token;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) BKSHIDEventDeferringToken *token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) BKSHIDEventDisplay *display; // @synthesize display=_display;
@property(readonly, nonatomic) BKSHIDEventDeferringEnvironment *environment; // @synthesize environment=_environment;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithEnvironment:(id)arg1 display:(id)arg2 token:(id)arg3;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class ADSInternalPoint, ADSInternalSize;

@interface ADSInternalRect : NSObject <NSSecureCoding, NSCopying>
{
    ADSInternalPoint *_origin;
    ADSInternalSize *_size;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) ADSInternalSize *size; // @synthesize size=_size;
@property(copy, nonatomic) ADSInternalPoint *origin; // @synthesize origin=_origin;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end


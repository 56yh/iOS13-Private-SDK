//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface CUPowerSourceLEDInfo : NSObject <NSSecureCoding>
{
    int _LEDColor;
    int _LEDState;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int LEDState; // @synthesize LEDState=_LEDState;
@property(nonatomic) int LEDColor; // @synthesize LEDColor=_LEDColor;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/RTReceipt.h>




@class NSString;

@interface RTReceiptEventKit : RTReceipt <NSSecureCoding, NSCopying>
{
    NSString *_title;
    NSString *_location;
    NSString *_calendarIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3;

@end


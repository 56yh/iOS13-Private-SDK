//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSUUID, SUAutoInstallForecast;

@interface _SUAutoInstallOperationModel : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_id;
    SUAutoInstallForecast *_forecast;
    int _agreementStatus;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *id; // @synthesize id=_id;
@property(nonatomic) int agreementStatus; // @synthesize agreementStatus=_agreementStatus;
@property(retain, nonatomic) SUAutoInstallForecast *forecast; // @synthesize forecast=_forecast;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end


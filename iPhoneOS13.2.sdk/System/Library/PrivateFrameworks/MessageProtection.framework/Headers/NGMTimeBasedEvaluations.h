//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject
{
    NSDate *_date;
}

+ (_Bool)prekeyShouldBeRolled:(id)arg1;
+ (_Bool)prekeyCanBeDeleted:(id)arg1;
+ (_Bool)validateFetchedPrekeyTimestamp:(double)arg1 forEvaluationType:(unsigned long long)arg2;
+ (id)debugDescriptionForAction:(unsigned long long)arg1;
+ (double)timeIntervalAllowedForAction:(unsigned long long)arg1;
+ (id)oldestDateAllowedToSendTo;
+ (void)setNowDate:(id)arg1;
+ (id)nowDate;
+ (id)sharedManager;
@property(retain) NSDate *date; // @synthesize date=_date;

@end


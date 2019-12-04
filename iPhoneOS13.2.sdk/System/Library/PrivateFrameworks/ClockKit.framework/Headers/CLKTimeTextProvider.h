//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKTextProvider.h>

@class NSDate, NSDateFormatter, NSMutableArray, NSTimeZone;

@interface CLKTimeTextProvider : CLKTextProvider
{
    NSDateFormatter *_dateFormatter;
    NSMutableArray *_sizingFallbackBlocks;
    _Bool _disallowBothMinutesAndDesignator;
    _Bool _prefersDesignatorToMinutes;
    NSDate *_date;
    NSTimeZone *_timeZone;
}

+ (_Bool)supportsSecureCoding;
+ (id)textProviderWithDate:(id)arg1 timeZone:(id)arg2;
+ (id)textProviderWithDate:(id)arg1;
@property(nonatomic) _Bool prefersDesignatorToMinutes; // @synthesize prefersDesignatorToMinutes=_prefersDesignatorToMinutes;
@property(nonatomic) _Bool disallowBothMinutesAndDesignator; // @synthesize disallowBothMinutesAndDesignator=_disallowBothMinutesAndDesignator;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)_validate;
- (id)_timeAttributedTextWithStyle:(id)arg1 dropMinutes:(_Bool)arg2 dropDesignator:(_Bool)arg3;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;

@end


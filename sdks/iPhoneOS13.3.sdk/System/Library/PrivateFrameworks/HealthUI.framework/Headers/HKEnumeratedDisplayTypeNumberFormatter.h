//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKNumberFormatter-Protocol.h>

@class NSDictionary;

@interface HKEnumeratedDisplayTypeNumberFormatter : NSObject <HKNumberFormatter>
{
    NSDictionary *_valueLabels;
}

// - (void).cxx_destruct;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (id)initWithDisplayType:(id)arg1;
- (BOOL)returnsUnitWithValueForDisplay;

@end

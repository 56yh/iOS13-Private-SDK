//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WDMedicalRecordDaySummary;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordDisplayItemGroup : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    WDMedicalRecordDaySummary *_daySummary;
    NSArray *_items;
}

+ (id)displayItemGroupWithDisplayItems:(id)arg1;
+ (id)displayItemGroupWithDaySummary:(id)arg1;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) WDMedicalRecordDaySummary *daySummary; // @synthesize daySummary=_daySummary;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (long long)numberOfDisplayItems;
- (id)displayItemAtIndex:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *displayItems;

@end


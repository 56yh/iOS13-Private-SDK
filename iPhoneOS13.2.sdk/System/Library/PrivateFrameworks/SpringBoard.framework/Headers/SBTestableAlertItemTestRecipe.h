//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTestRecipe-Protocol.h>

@class NSArray, NSString, SBAlertItem;

@interface SBTestableAlertItemTestRecipe : NSObject <SBTestRecipe>
{
    SBAlertItem *_item;
    NSArray *_recipesToTest;
}

+ (id)nameForCase:(long long)arg1;
+ (id)testCasesGrouped;
+ (id)testCases;
+ (void)load;
@property(retain, nonatomic) NSArray *recipesToTest; // @synthesize recipesToTest=_recipesToTest;
- (id)alertForIndex:(long long)arg1;
- (id)_nextAlertItemToTest;
- (id)dataPlanAlertItemForCase:(long long)arg1;
- (id)_mapsApp;
- (id)_anySUDescriptor;
- (id)_anyUserInstalledAppIcon;
- (id)_anyAppIcon;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)_dismissCurrentItem;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


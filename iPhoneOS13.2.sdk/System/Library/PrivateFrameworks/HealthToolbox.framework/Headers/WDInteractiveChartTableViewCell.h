//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKViewTableViewCell.h>

#import <HealthToolbox/WDDisplayTypeDetailViewControllerChartCellType-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDInteractiveChartTableViewCell : HKViewTableViewCell <WDDisplayTypeDetailViewControllerChartCellType>
{
    unsigned long long _displayMode;
    unsigned long long _marginMode;
}

+ (id)defaultReuseIdentifier;
@property(nonatomic) unsigned long long marginMode; // @synthesize marginMode=_marginMode;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
- (void)setTimeScope:(long long)arg1;
- (void)setPrimaryValueSource:(id)arg1 secondaryValueSource:(id)arg2 chartSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKLauncherComplicationDataSource : NTKComplicationDataSource
{
}

+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;
- (id)_tinCanAppTintColor;
- (id)_complicationLaunchURL;
- (id)_complicationApplicationIdentifier;
- (id)_appBackgroundColor;
- (id)_appTintColor;
- (id)_fullColorImageProvider;
- (id)_tintableAppImageProvider;
- (id)_appTitle;
- (void)_addBackgroundColorToTemplate:(id)arg1;
- (id)_signatureCircularTemplate;
- (id)_signatureBezelTemplate;
- (id)_signatureCornerTemplate;
- (id)_extraLarge;
- (id)_circularTemplateMedium:(_Bool)arg1;
- (id)_utilitarianLargeTemplate;
- (id)_utilitarianSmallTemplate;
- (id)_modularLargeTemplate;
- (id)_modularSmallTemplate;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getTimelineEndDateWithHandler:(id /* block */)arg1;
- (void)getTimelineStartDateWithHandler:(id /* block */)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (id)_currentTimelineEntry;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (id)currentSwitcherTemplate;
- (unsigned long long)timelineAnimationBehavior;

@end


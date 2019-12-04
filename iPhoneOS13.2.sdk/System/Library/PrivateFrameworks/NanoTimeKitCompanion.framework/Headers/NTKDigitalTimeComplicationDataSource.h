//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKDigitalTimeComplicationDataSource : NTKComplicationDataSource
{
}

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_templateWithShouldDisplayIdealizeState:(_Bool)arg1;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)arg1;
- (_Bool)alwaysShowIdealizedTemplateInSwitcher;
- (id)currentSwitcherTemplate;
- (unsigned long long)timelineAnimationBehavior;
- (_Bool)supportsTapAction;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;

@end


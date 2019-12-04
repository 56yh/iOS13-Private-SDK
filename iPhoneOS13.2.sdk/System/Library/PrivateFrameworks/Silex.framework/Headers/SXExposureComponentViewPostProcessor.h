//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentViewPostProcessor-Protocol.h>

@class NSMapTable, NSString;
@protocol SXAnalyticsReportingProvider, SXComponentExposureMonitor;

@interface SXExposureComponentViewPostProcessor : NSObject <SXComponentViewPostProcessor>
{
    id <SXComponentExposureMonitor> _monitor;
    id <SXAnalyticsReportingProvider> _analyticsReporterProvider;
    NSMapTable *_exposedEvents;
}

@property(readonly, nonatomic) NSMapTable *exposedEvents; // @synthesize exposedEvents=_exposedEvents;
@property(readonly, nonatomic) id <SXAnalyticsReportingProvider> analyticsReporterProvider; // @synthesize analyticsReporterProvider=_analyticsReporterProvider;
@property(readonly, nonatomic) id <SXComponentExposureMonitor> monitor; // @synthesize monitor=_monitor;
- (void)processComponent:(id)arg1 view:(id)arg2;
- (id)initWithExposureMonitor:(id)arg1 analyticsReportingProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


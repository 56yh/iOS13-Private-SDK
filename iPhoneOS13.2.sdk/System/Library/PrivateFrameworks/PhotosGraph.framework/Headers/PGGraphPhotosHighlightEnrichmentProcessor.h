//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphDataModelEnrichmentHealthRecording-Protocol.h>
#import <PhotosGraph/PGGraphDataModelEnrichmentProcessor-Protocol.h>

@class NSString;

@interface PGGraphPhotosHighlightEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor, PGGraphDataModelEnrichmentHealthRecording>
{
    unsigned long long _highlightTailorOptions;
}

+ (double)backgroundJobTimeout;
+ (id)backgroundJobName;
+ (_Bool)supportsBackgroundJob;
@property(nonatomic) unsigned long long highlightTailorOptions; // @synthesize highlightTailorOptions=_highlightTailorOptions;
- (void)recordProcessingWasCancelledWithGraphHealthRecorder:(id)arg1;
- (void)recordCurrentProcessingDate:(id)arg1 lastProcessingDate:(id)arg2 graphHealthRecorder:(id)arg3;
- (void)_logFirstTimeExperienceMetricsIfNeededWithManager:(id)arg1;
- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)_updateHighlightTitlesForKind:(unsigned short)arg1 highlightTailor:(id)arg2 graphUpdateInventory:(id)arg3 alreadyEnrichedHighlights:(id)arg4 progressBlock:(id /* block */)arg5;
- (id)initWithHighlightTailorOptions:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


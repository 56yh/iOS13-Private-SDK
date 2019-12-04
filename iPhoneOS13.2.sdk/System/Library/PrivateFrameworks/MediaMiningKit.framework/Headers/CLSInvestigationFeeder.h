//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSInvestigationInterviewDelegate-Protocol.h>

@class NSDate, NSMutableSet, NSSet, NSString;

@interface CLSInvestigationFeeder : NSObject <CLSInvestigationInterviewDelegate>
{
    unsigned long long _locationClusteringAlgorithm;
    _Bool _allowsInterview;
    NSMutableSet *_focusItems;
    NSSet *_focusPeopleUUIDs;
}

@property(retain, nonatomic) NSSet *focusPeopleUUIDs; // @synthesize focusPeopleUUIDs=_focusPeopleUUIDs;
@property(readonly, nonatomic) NSMutableSet *focusItems; // @synthesize focusItems=_focusItems;
@property(nonatomic) _Bool allowsInterview; // @synthesize allowsInterview=_allowsInterview;
@property(nonatomic) unsigned long long locationClusteringAlgorithm; // @synthesize locationClusteringAlgorithm=_locationClusteringAlgorithm;
- (struct CGImage *)itemThumbnailInInvestigation:(id)arg1 atIndex:(unsigned long long)arg2 withResolution:(unsigned long long)arg3;
- (unsigned long long)numberOfItemsInInvestigation:(id)arg1;
- (id)prepareWithProgressBlock:(id /* block */)arg1;
- (id)_prepareFeederWithProgressBlock:(id /* block */)arg1;
- (void)enumeratePersonNames:(id)arg1 withGaussiansUsingBlock:(id /* block */)arg2;
- (void)enumerateLocationClustersWithGaussians:(id)arg1 enumerationBlock:(id /* block */)arg2;
- (double)behavioralScore;
- (unsigned long long)numberOfRegularGemItems;
- (unsigned long long)numberOfShinyGemItems;
- (struct CGImage *)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)allItems;
- (id)approximateLocation;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;
- (unsigned long long)numberOfItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


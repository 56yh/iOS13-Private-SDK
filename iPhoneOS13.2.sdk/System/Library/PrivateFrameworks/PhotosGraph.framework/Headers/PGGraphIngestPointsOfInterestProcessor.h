//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSDictionary, NSString;

@interface PGGraphIngestPointsOfInterestProcessor : NSObject <PGGraphIngestProcessor>
{
    NSDictionary *_momentNodesToResolvePOIByRegion;
    NSDictionary *_momentNodesToResolvePOIAndEnrichByBusinessItemMuid;
}

@property(readonly, nonatomic) NSDictionary *momentNodesToResolvePOIAndEnrichByBusinessItemMuid; // @synthesize momentNodesToResolvePOIAndEnrichByBusinessItemMuid=_momentNodesToResolvePOIAndEnrichByBusinessItemMuid;
@property(readonly, nonatomic) NSDictionary *momentNodesToResolvePOIByRegion; // @synthesize momentNodesToResolvePOIByRegion=_momentNodesToResolvePOIByRegion;
- (_Bool)_fetchPointsOfInterestForRegions:(id)arg1 graph:(id)arg2 progress:(id /* block */)arg3;
- (void)_collectPOIsToResolveWithMomentNodes:(id)arg1 graphUpdate:(id)arg2 progress:(id /* block */)arg3;
- (id)_pointOfInterestTypeStringsFromBusinessItems:(id)arg1 withOriginalCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)_insertPointOfInterestTypeStrings:(id)arg1 graph:(id)arg2 withMomentNodes:(id)arg3;
- (void)disambiguatePointsOfInterestWithMomentNodes:(id)arg1 graphUpdate:(id)arg2 progress:(id /* block */)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


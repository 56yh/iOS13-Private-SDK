//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAsset.h>

#import <PhotoAnalysis/PVAssetProtocol-Protocol.h>

@class NSData, NSDate, NSString;

@interface PHAsset (PVAssetProtocol) <PVAssetProtocol>
@property(readonly, nonatomic) NSDate *clsDistanceIdentity;

// Remaining properties
@property(readonly, nonatomic) NSString *cloudIdentifier;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *distanceIdentity;
@property(readonly, nonatomic) NSString *filename;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) struct CLLocationCoordinate2D locationCoordinate;
@property(readonly, nonatomic) NSString *originalFilename;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly) Class superclass;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGFeatureExtractionSource-Protocol.h>

@interface PGFeatureExtractionSourceMomentShare : NSObject <PGFeatureExtractionSource>
{
}

- (id)fetchMomentsOverlappingMomentShare:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)extractSharingRecordsWithManager:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;

@end

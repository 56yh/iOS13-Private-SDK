//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PFPhotosFaceRepresentation-Protocol.h>

@interface PLFaceDimension : NSObject <PFPhotosFaceRepresentation>
{
    long long _sourceWidth;
    long long _sourceHeight;
    double _centerX;
    double _centerY;
    double _size;
}

- (double)photosFaceRepresentationQuality;
- (double)photosFaceRepresentationRoll;
- (id)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (long long)photosFaceRepresentationQualityMeasure;
- (_Bool)photosFaceRepresentationIsRightEyeClosed;
- (_Bool)photosFaceRepresentationIsLeftEyeClosed;
- (_Bool)photosFaceRepresentationHasSmile;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationCenterX;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (id)description;
- (id)initWithSourceWidth:(long long)arg1 sourceHeight:(long long)arg2 centerX:(double)arg3 centerY:(double)arg4 size:(double)arg5;

@end


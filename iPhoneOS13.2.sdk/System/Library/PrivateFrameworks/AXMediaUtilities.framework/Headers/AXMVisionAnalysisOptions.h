//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class AXMTextDetectionOptions, NSArray;

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding>
{
    _Bool _detectFaceRectangles;
    _Bool _detectFaceNames;
    _Bool _detectFaceAttributes;
    _Bool _detectFaceExpressions;
    _Bool _detectFaceLandmarks;
    _Bool _detectFacePose;
    _Bool _detectScenes;
    _Bool _detectModelClassifications;
    _Bool _detectCaptions;
    _Bool _detectTraits;
    _Bool _detectRectangles;
    _Bool _detectHorizon;
    _Bool _detectProminentObjects;
    _Bool _detectAesthetics;
    _Bool _detectIconClass;
    _Bool _detectText;
    _Bool _includeImageInResult;
    long long _clientID;
    AXMTextDetectionOptions *_textDetectionOptions;
    NSArray *_ignoredLayerContextIDs;
}

+ (_Bool)supportsSecureCoding;
+ (id)voiceOverOptions;
+ (id)defaultOptions;
@property(retain, nonatomic) NSArray *ignoredLayerContextIDs; // @synthesize ignoredLayerContextIDs=_ignoredLayerContextIDs;
@property(nonatomic) _Bool includeImageInResult; // @synthesize includeImageInResult=_includeImageInResult;
@property(retain, nonatomic) AXMTextDetectionOptions *textDetectionOptions; // @synthesize textDetectionOptions=_textDetectionOptions;
@property(nonatomic) _Bool detectText; // @synthesize detectText=_detectText;
@property(nonatomic) _Bool detectIconClass; // @synthesize detectIconClass=_detectIconClass;
@property(nonatomic) _Bool detectAesthetics; // @synthesize detectAesthetics=_detectAesthetics;
@property(nonatomic) _Bool detectProminentObjects; // @synthesize detectProminentObjects=_detectProminentObjects;
@property(nonatomic) _Bool detectHorizon; // @synthesize detectHorizon=_detectHorizon;
@property(nonatomic) _Bool detectRectangles; // @synthesize detectRectangles=_detectRectangles;
@property(nonatomic) _Bool detectTraits; // @synthesize detectTraits=_detectTraits;
@property(nonatomic) _Bool detectCaptions; // @synthesize detectCaptions=_detectCaptions;
@property(nonatomic) _Bool detectModelClassifications; // @synthesize detectModelClassifications=_detectModelClassifications;
@property(nonatomic) _Bool detectScenes; // @synthesize detectScenes=_detectScenes;
@property(nonatomic) _Bool detectFacePose; // @synthesize detectFacePose=_detectFacePose;
@property(nonatomic) _Bool detectFaceLandmarks; // @synthesize detectFaceLandmarks=_detectFaceLandmarks;
@property(nonatomic) _Bool detectFaceExpressions; // @synthesize detectFaceExpressions=_detectFaceExpressions;
@property(nonatomic) _Bool detectFaceAttributes; // @synthesize detectFaceAttributes=_detectFaceAttributes;
@property(nonatomic) _Bool detectFaceNames; // @synthesize detectFaceNames=_detectFaceNames;
@property(nonatomic) _Bool detectFaceRectangles; // @synthesize detectFaceRectangles=_detectFaceRectangles;
@property(nonatomic) long long clientID; // @synthesize clientID=_clientID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool hasDetectionsEnabled;
@property(readonly, nonatomic) _Bool detectFaces;

@end


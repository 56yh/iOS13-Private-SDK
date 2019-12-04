//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, PIReframeSubject;

@interface PISubjectCluster : NSObject
{
    _Bool _salientObject;
    float _saliencyScale;
    PIReframeSubject *_body;
    unsigned long long _direction;
    NSMutableSet *_mutablePoints;
    struct CGPoint _centerPoint;
}

+ (unsigned long long)directionForBody:(id)arg1 face:(id)arg2;
+ (id)subjectForExpansionWithSaliencyScale:(float)arg1 startingSubject:(id)arg2;
@property(readonly, nonatomic, getter=isSalientObject) _Bool salientObject; // @synthesize salientObject=_salientObject;
@property(readonly, nonatomic) float saliencyScale; // @synthesize saliencyScale=_saliencyScale;
@property(readonly, copy, nonatomic) NSMutableSet *mutablePoints; // @synthesize mutablePoints=_mutablePoints;
@property(readonly, nonatomic) struct CGPoint centerPoint; // @synthesize centerPoint=_centerPoint;
@property(readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) PIReframeSubject *body; // @synthesize body=_body;
@property(readonly, nonatomic) struct CGRect boundingBox;
- (void)addPointsFromCluster:(id)arg1;
- (void)addPoint:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *points;
@property(readonly, nonatomic) PIReframeSubject *expandedSubject;
- (_Bool)shouldAllowPoint:(struct CGPoint)arg1;
- (id)description;
- (id)initWithBody:(id)arg1 direction:(unsigned long long)arg2 saliencyScale:(float)arg3;
- (id)initSalientClusterWithCenterPoint:(struct CGPoint)arg1 saliencyScale:(float)arg2;
- (id)initWithBody:(id)arg1 face:(id)arg2 saliencyScale:(float)arg3;

@end


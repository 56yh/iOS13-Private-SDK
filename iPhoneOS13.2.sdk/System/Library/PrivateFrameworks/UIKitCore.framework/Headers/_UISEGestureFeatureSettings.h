//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISEGestureFeatureSettings-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UISEGestureFeatureSettings : NSObject <_UISEGestureFeatureSettings>
{
    double _bottomEdgeAngleWindow;
    double _bottomEdgeRegionSize;
    double _cornerAngleWindow;
    double _edgeAngleWindow;
    double _edgeAngleWindowDecayTime;
    double _edgeRegionSize;
    double _hysteresis;
    unsigned long long _interfaceBottomEdge;
    unsigned long long _minimumNumberOfSubfeatures;
    double _maximumSwipeDuration;
    unsigned long long _targetEdges;
    struct CGRect _bounds;
}

@property(nonatomic) unsigned long long targetEdges; // @synthesize targetEdges=_targetEdges;
@property(nonatomic) double maximumSwipeDuration; // @synthesize maximumSwipeDuration=_maximumSwipeDuration;
@property(nonatomic) unsigned long long minimumNumberOfSubfeatures; // @synthesize minimumNumberOfSubfeatures=_minimumNumberOfSubfeatures;
@property(nonatomic) unsigned long long interfaceBottomEdge; // @synthesize interfaceBottomEdge=_interfaceBottomEdge;
@property(nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property(nonatomic) double edgeRegionSize; // @synthesize edgeRegionSize=_edgeRegionSize;
@property(nonatomic) double edgeAngleWindowDecayTime; // @synthesize edgeAngleWindowDecayTime=_edgeAngleWindowDecayTime;
@property(nonatomic) double edgeAngleWindow; // @synthesize edgeAngleWindow=_edgeAngleWindow;
@property(nonatomic) double cornerAngleWindow; // @synthesize cornerAngleWindow=_cornerAngleWindow;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) double bottomEdgeRegionSize; // @synthesize bottomEdgeRegionSize=_bottomEdgeRegionSize;
@property(nonatomic) double bottomEdgeAngleWindow; // @synthesize bottomEdgeAngleWindow=_bottomEdgeAngleWindow;
- (id)init;

@end


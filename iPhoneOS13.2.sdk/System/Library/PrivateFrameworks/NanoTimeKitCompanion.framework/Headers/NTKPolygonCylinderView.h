//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKEditOptionContainerView-Protocol.h>

@class NSString, _NTKPolygonCylinderTransformView;

@interface NTKPolygonCylinderView : UIView <NTKEditOptionContainerView>
{
    _NTKPolygonCylinderTransformView *_transformView;
    double _rotationAngle;
}

- (void)_updateTransform;
- (void)_informFaceViewsOfRotation;
- (void)_setRotationAngle:(double)arg1;
- (double)_rotationAngleForFaceIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3;
- (void)transitionToSideAtIndex:(unsigned long long)arg1;
- (void)enumerateSideViewsWithBlock:(id /* block */)arg1;
- (id)viewForSideAtIndex:(unsigned long long)arg1;
- (void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long numberOfVisibleSides;
@property(nonatomic) unsigned long long numberOfSides;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


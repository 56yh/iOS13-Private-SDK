//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MKMapView, NSMeasurementFormatter;
@protocol HULocationTriggerEditorMapDragRadiusViewDelegate, MKAnnotation, MKOverlay;

@interface HULocationTriggerEditorMapDragRadiusView : UIView
{
    _Bool _isDragging;
    _Bool _isMinimum;
    _Bool _isMaximum;
    id <HULocationTriggerEditorMapDragRadiusViewDelegate> _delegate;
    unsigned long long _proximity;
    MKMapView *_mapView;
    UIView *_handleEndpointView;
    id <MKAnnotation> _annotation;
    id <MKOverlay> _overlay;
    CAShapeLayer *_shapeLayer;
    NSMeasurementFormatter *_measurmentFormatter;
}

@property(retain, nonatomic) NSMeasurementFormatter *measurmentFormatter; // @synthesize measurmentFormatter=_measurmentFormatter;
@property(nonatomic) _Bool isMaximum; // @synthesize isMaximum=_isMaximum;
@property(nonatomic) _Bool isMinimum; // @synthesize isMinimum=_isMinimum;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) id <MKOverlay> overlay; // @synthesize overlay=_overlay;
@property(retain, nonatomic) id <MKAnnotation> annotation; // @synthesize annotation=_annotation;
@property(retain, nonatomic) UIView *handleEndpointView; // @synthesize handleEndpointView=_handleEndpointView;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) unsigned long long proximity; // @synthesize proximity=_proximity;
@property(nonatomic) __weak id <HULocationTriggerEditorMapDragRadiusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)usesMetric;
- (double)minimumRadiusNormalized;
- (double)maximumRadiusNormalized;
- (double)currentHandleDistance;
- (double)currentHandleDistanceNormalized;
- (struct CGPoint)maxPoint;
- (struct CGPoint)minPoint;
- (void)resizeCircleAfterDelay;
- (double)feetToMeters:(double)arg1;
- (double)minimumInMeters;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)removeHandle:(_Bool)arg1;
- (void)addHandleForAnnotation:(id)arg1 withOverlay:(id)arg2;
- (void)animateHandleIn:(_Bool)arg1;
- (id)shapeLayerWithEndPoint:(struct CGPoint)arg1;
- (id)bezierPathWithEndPoint:(struct CGPoint)arg1;
- (void)popAnimateHandle;
- (struct CGPoint)center;
- (id)initWithFrame:(struct CGRect)arg1;

@end


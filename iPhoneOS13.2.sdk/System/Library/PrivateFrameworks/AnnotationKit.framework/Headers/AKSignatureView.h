//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AKBitmapFIFO, CHBoxcarFilterPointFIFO, CHPointStrokeFIFO, CHQuadCurvePointFIFO, UIColor;
@protocol AKSignatureViewLiveDelegate;

@interface AKSignatureView : UIView
{
    struct CGPoint _lastPoint;
    id _trackingTouchID;
    double _lastSetNeedsDisplayCallToSuperTime;
    struct CGRect _accumulatedSignatureDirtyRect;
    _Bool _isAddingPointWithoutSmoothing;
    UIColor *_strokeColor;
    double _minPressure;
    double _maxPressure;
    double _minThickness;
    double _maxThickness;
    unsigned long long _totalPointsAdded;
    double _currentWeight;
    double _strokeStartTime;
    CHPointStrokeFIFO *_strokeFIFO;
    CHBoxcarFilterPointFIFO *_boxcarFIFO;
    CHQuadCurvePointFIFO *_interpolatingFIFO;
    AKBitmapFIFO *_bitmapFifo;
    id <AKSignatureViewLiveDelegate> _liveDelegate;
    struct CGPoint _strokeStartLocation;
    struct CGPoint _strokeLastLocation;
    struct CGRect _aggregateInvalid;
    struct CGRect _unionDrawingRect;
}

@property(nonatomic) __weak id <AKSignatureViewLiveDelegate> liveDelegate; // @synthesize liveDelegate=_liveDelegate;
@property(nonatomic) struct CGRect unionDrawingRect; // @synthesize unionDrawingRect=_unionDrawingRect;
@property(nonatomic) struct CGRect aggregateInvalid; // @synthesize aggregateInvalid=_aggregateInvalid;
@property(retain, nonatomic) AKBitmapFIFO *bitmapFifo; // @synthesize bitmapFifo=_bitmapFifo;
@property(retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) CHBoxcarFilterPointFIFO *boxcarFIFO; // @synthesize boxcarFIFO=_boxcarFIFO;
@property(retain, nonatomic) CHPointStrokeFIFO *strokeFIFO; // @synthesize strokeFIFO=_strokeFIFO;
@property _Bool isAddingPointWithoutSmoothing; // @synthesize isAddingPointWithoutSmoothing=_isAddingPointWithoutSmoothing;
@property double strokeStartTime; // @synthesize strokeStartTime=_strokeStartTime;
@property struct CGPoint strokeLastLocation; // @synthesize strokeLastLocation=_strokeLastLocation;
@property struct CGPoint strokeStartLocation; // @synthesize strokeStartLocation=_strokeStartLocation;
@property(nonatomic) double currentWeight; // @synthesize currentWeight=_currentWeight;
@property unsigned long long totalPointsAdded; // @synthesize totalPointsAdded=_totalPointsAdded;
@property(nonatomic) double maxThickness; // @synthesize maxThickness=_maxThickness;
@property(nonatomic) double minThickness; // @synthesize minThickness=_minThickness;
@property(nonatomic) double maxPressure; // @synthesize maxPressure=_maxPressure;
@property(nonatomic) double minPressure; // @synthesize minPressure=_minPressure;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void)handleCoalescedTouches:(id)arg1 forTouch:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)weightForTouch:(id)arg1;
- (_Bool)ak_forceAvailableForTouch:(id)arg1;
- (double)weightForValue:(double)arg1;
- (void)terminateStroke;
- (void)continueStrokeWithoutSmoothing: /* Error: Ran out of types for this method. */;
- (void)continueStroke: /* Error: Ran out of types for this method. */;
- (void)startStroke: /* Error: Ran out of types for this method. */;
- (void)setFrame:(struct CGRect)arg1;
- (void)_forceRedisplay;
- (void)clear;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) double interfaceScale;
- (double)_windowBackingScaleFactor;
- (struct CGPath *)copyStrokedInterpolatedPath;
- (void)teardown;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


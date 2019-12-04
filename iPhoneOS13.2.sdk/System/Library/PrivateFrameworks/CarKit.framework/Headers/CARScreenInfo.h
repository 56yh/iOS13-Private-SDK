//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CARScreenViewArea, NSArray, NSString, NSURL;

@interface CARScreenInfo : NSObject
{
    _Bool _limitedUI;
    _Bool _nightMode;
    _Bool _supportsHighFidelityTouch;
    NSString *_identifier;
    unsigned long long _screenType;
    unsigned long long _limitedUIElements;
    unsigned long long _maxFramesPerSecond;
    NSArray *_viewAreas;
    CARScreenViewArea *_currentViewArea;
    CARScreenViewArea *_adjacentViewArea;
    unsigned long long _currentViewAreaTransitionControlType;
    NSURL *_initialURL;
    unsigned long long _systemAvailableInteractionModels;
    unsigned long long _systemPrimaryInteractionModel;
    struct CGSize _physicalSize;
    struct CGSize _pixelSize;
}

@property(nonatomic) unsigned long long systemPrimaryInteractionModel; // @synthesize systemPrimaryInteractionModel=_systemPrimaryInteractionModel;
@property(nonatomic) unsigned long long systemAvailableInteractionModels; // @synthesize systemAvailableInteractionModels=_systemAvailableInteractionModels;
@property(readonly, nonatomic) NSURL *initialURL; // @synthesize initialURL=_initialURL;
@property(nonatomic) unsigned long long currentViewAreaTransitionControlType; // @synthesize currentViewAreaTransitionControlType=_currentViewAreaTransitionControlType;
@property(retain, nonatomic) CARScreenViewArea *adjacentViewArea; // @synthesize adjacentViewArea=_adjacentViewArea;
@property(retain, nonatomic) CARScreenViewArea *currentViewArea; // @synthesize currentViewArea=_currentViewArea;
@property(readonly, copy, nonatomic) NSArray *viewAreas; // @synthesize viewAreas=_viewAreas;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) struct CGSize physicalSize; // @synthesize physicalSize=_physicalSize;
@property(readonly, nonatomic) unsigned long long maxFramesPerSecond; // @synthesize maxFramesPerSecond=_maxFramesPerSecond;
@property(readonly, nonatomic) _Bool supportsHighFidelityTouch; // @synthesize supportsHighFidelityTouch=_supportsHighFidelityTouch;
@property(readonly, nonatomic, getter=isNightMode) _Bool nightMode; // @synthesize nightMode=_nightMode;
@property(readonly, nonatomic) unsigned long long limitedUIElements; // @synthesize limitedUIElements=_limitedUIElements;
@property(readonly, nonatomic, getter=isLimitedUI) _Bool limitedUI; // @synthesize limitedUI=_limitedUI;
@property(readonly, nonatomic) unsigned long long screenType; // @synthesize screenType=_screenType;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)limitedUIChanged:(_Bool)arg1;
- (void)nightModeChanged:(_Bool)arg1;
- (id)description;
@property(readonly, nonatomic) unsigned long long availableInteractionModels;
@property(readonly, nonatomic) unsigned long long primaryInteractionModel;
- (_Bool)_currentProcessHasEntitlement;
- (id)_descriptionForInteractionModel:(unsigned long long)arg1;
- (id)descriptionForPrimaryInteractionModel;
- (id)descriptionForAvailableInteractionModels;
- (id)initWithPropertySupplier:(id /* block */)arg1 screenType:(unsigned long long)arg2 additionalInsets:(struct NSEdgeInsets)arg3;
- (id)initWithPropertySupplier:(id /* block */)arg1 screenType:(unsigned long long)arg2;

@end


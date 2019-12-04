//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKCompactNavigationContainerController.h>

@class LAUIHorizontalArrowView, LAUIPhysicalButtonView;

@interface PKPaymentAuthorizationServiceCompactNavigationContainerController : PKCompactNavigationContainerController
{
    unsigned char _rotationCount;
    _Bool _cameraOrientationSupported;
    _Bool _attemptedFaceIDViewCreation;
    LAUIPhysicalButtonView *_physicalButtonView;
    LAUIHorizontalArrowView *_cameraArrowView;
    _Bool _showPhysicalButtonIndicator;
    _Bool _showCameraIndicator;
}

@property(nonatomic) _Bool showCameraIndicator; // @synthesize showCameraIndicator=_showCameraIndicator;
@property(nonatomic) _Bool showPhysicalButtonIndicator; // @synthesize showPhysicalButtonIndicator=_showPhysicalButtonIndicator;
- (_Bool)_effectiveShowCameraIndicator;
- (_Bool)_effectiveShowPhysicalButtonIndicator;
@property(readonly, nonatomic) LAUIPhysicalButtonView *physicalButtonView;
- (void)_createFaceIDViewsIfNecessary;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAPackage, CAStateController;

@interface PKReaderModeAnimationView : UIView
{
    unsigned long long _state;
    CAPackage *_package;
    CALayer *_phoneLayer;
    CAStateController *_stateController;
    _Bool _isPhoneTarget;
}

- (void)_setState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)animationStateForProvisioningViewState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long state;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setImageForCard:(id)arg1 image:(id)arg2;
- (void)setDigitalCardImage:(id)arg1;
- (void)setPlasticCardImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 assetName:(id)arg2 forPhoneTarget:(_Bool)arg3;
- (id)initWithAssetName:(id)arg1 forPhoneTarget:(_Bool)arg2;

@end


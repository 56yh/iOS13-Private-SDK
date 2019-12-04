//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUIconContentView.h>

#import <HomeUI/CAStateControllerDelegate-Protocol.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

@interface HUCAPackageIconContentView : HUIconContentView <CAStateControllerDelegate>
{
    CAStateController *_stateController;
    CALayer *_rootLayer;
    NSMutableArray *_packageLayers;
    NSString *_stateName;
    struct CGSize _assetSize;
}

@property(retain, nonatomic) NSString *stateName; // @synthesize stateName=_stateName;
@property(nonatomic) struct CGSize assetSize; // @synthesize assetSize=_assetSize;
@property(retain, nonatomic) NSMutableArray *packageLayers; // @synthesize packageLayers=_packageLayers;
@property(retain, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(retain, nonatomic) CAStateController *stateController; // @synthesize stateController=_stateController;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;
- (void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3;
- (void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_applyModifiers;
- (void)_updateForRTL:(_Bool)arg1;
- (void)_updateStateAnimated:(_Bool)arg1;
- (void)_updatePackage;
- (void)setState:(id)arg1 animated:(_Bool)arg2;
- (void)setState:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


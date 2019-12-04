//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ScreenTimeUI/CAStateControllerDelegate-Protocol.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface STCAPackageView : UIView <CAStateControllerDelegate>
{
    CAStateController *_stateController;
    NSMutableArray *_completionHandlers;
}

+ (id)keyPathsForValuesAffectingPackageRootLayer;
@property(readonly) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain) CAStateController *stateController; // @synthesize stateController=_stateController;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;
- (id)_getStateWithName:(id)arg1;
- (void)animateToStateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setStateName:(id)arg1;
@property(readonly, copy) NSString *stateName;
- (void)animateToInitialStateWithCompletionHandler:(id /* block */)arg1;
- (void)setInitialState;
@property(readonly, getter=isInitialState) _Bool initialState;
@property(readonly) CALayer *packageRootLayer;
- (void)_changeAppearance;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_newStateControllerWithSuperlayer:(id)arg1;
- (void)_stcaPackageViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


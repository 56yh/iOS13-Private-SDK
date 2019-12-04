//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <BaseBoardUI/CAStateControllerDelegate-Protocol.h>

@class CALayer, CAStateController, NSArray, NSDictionary, NSObject, NSString;
@protocol CAStateControllerDelegate;

@interface BSUICAPackageView : UIView <CAStateControllerDelegate>
{
    CAStateController *_stateController;
    NSObject<CAStateControllerDelegate> *_stateControllerDelegate;
    CALayer *_rootLayer;
    struct CGSize _originalSize;
    NSString *_pendingCompletionToState;
    NSString *_pendingCompletionFromState;
    id /* block */ _pendingCompletion;
    NSDictionary *_publishedObjectMap;
}

- (void)_clearPendingCompletion;
- (void)_setPendingCompletion:(id /* block */)arg1 fromState:(id)arg2 toState:(id)arg3;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;
- (void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3;
- (void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) __weak NSObject<CAStateControllerDelegate> *stateControllerDelegate;
- (_Bool)setState:(id)arg1 onLayer:(id)arg2 animated:(_Bool)arg3 transitionSpeed:(double)arg4 completion:(id /* block */)arg5;
- (_Bool)setState:(id)arg1 animated:(_Bool)arg2 transitionSpeed:(double)arg3 completion:(id /* block */)arg4;
- (_Bool)setState:(id)arg1 animated:(_Bool)arg2;
- (_Bool)setState:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *publishedObjectNames;
- (id)publishedObjectWithName:(id)arg1;
- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2;

@end


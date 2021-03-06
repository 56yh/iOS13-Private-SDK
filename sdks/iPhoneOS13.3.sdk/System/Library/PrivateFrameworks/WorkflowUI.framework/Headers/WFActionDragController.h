//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFComponentDragController.h>

#import <WorkflowUI/CKComponentHostingViewDelegate-Protocol.h>

@class NSArray, NSHashTable, WFAction;

@interface WFActionDragController : WFComponentDragController <CKComponentHostingViewDelegate>
{
    CGSize _initialSize;
    CGPoint _initialLocation;
    NSArray *_actions;
    WFAction *_sourceAction;
    id /* CDUnknownBlockType */ _actionGenerator;
    NSHashTable *_viewControllers;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) NSHashTable *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(copy, nonatomic) id /* CDUnknownBlockType */ actionGenerator; // @synthesize actionGenerator=_actionGenerator;
@property(retain, nonatomic) WFAction *sourceAction; // @synthesize sourceAction=_sourceAction;
// - (void).cxx_destruct;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (void)reset;
- (void)updateCurrentViewControllers;
- (void)updateView;
- (void)loadView;
- (long long)sizeRangeFlexibility;
- (id)actions;
- (id)initWithGestureRecognizer:(id)arg1 actionGenerator:(id /* CDUnknownBlockType */)arg2;
- (id)initWithGestureRecognizer:(id)arg1 sourceAction:(id)arg2;
- (id)initWithGestureRecognizer:(id)arg1;

@end


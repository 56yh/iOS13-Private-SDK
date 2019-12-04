//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <PassKitUI/PKObservableContentContainer-Protocol.h>

@class NSHashTable, NSLock, NSString, UIVisualEffectView;

@interface PKBlurredNavigationController : UINavigationController <PKObservableContentContainer>
{
    UIVisualEffectView *_backdropView;
    NSLock *_observersLock;
    NSHashTable *_observers;
}

- (id)_observers;
- (void)removeContentContainerObserver:(id)arg1;
- (void)addContentContainerObserver:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
@property(readonly) Class superclass;

@end


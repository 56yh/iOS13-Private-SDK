//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CCUIContentModuleContainerViewController, CCUIModuleCollectionViewController, UIViewController;
@protocol CCUIContentModule;

@protocol CCUIModuleCollectionViewControllerDelegate 
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didUpdateHomeGestureDismissalAllowed:(_Bool)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willRemoveModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didAddModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didCloseExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willCloseExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didOpenExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willOpenExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didFinishInteractionWithModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didBeginInteractionWithModule:(id <CCUIContentModule>)arg2;
- (long long)interfaceOrientationForModuleCollectionViewController:(CCUIModuleCollectionViewController *)arg1;
@end


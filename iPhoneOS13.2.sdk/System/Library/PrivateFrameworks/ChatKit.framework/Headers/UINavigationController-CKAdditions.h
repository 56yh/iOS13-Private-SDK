//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface UINavigationController (CKAdditions)
- (void)__ck_callDelegateBlocks;
- (id)__ck_popToRootViewControllerAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (id)__ck_popToViewController:(id)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (id)__ck_popViewControllerAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)__ck_pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)__ck_enqueueCompletionBlock:(id /* block */)arg1;
@end

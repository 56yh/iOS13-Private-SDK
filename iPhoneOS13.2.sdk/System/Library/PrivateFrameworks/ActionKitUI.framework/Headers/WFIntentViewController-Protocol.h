//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class INInteraction, UIView;
@protocol WFIntentViewControllerDelegate;

@protocol WFIntentViewController 
@property(readonly, nonatomic) _Bool requiresConfirmation;
@property(nonatomic) __weak id <WFIntentViewControllerDelegate> delegate;
- (void)dismissPlatterWithCompletionHandler:(void (^)(void))arg1;
- (void)presentPlatterFromSourceView:(UIView *)arg1 completionHandler:(void (^)(void))arg2;
- (void)updateWithInteraction:(INInteraction *)arg1;
@end


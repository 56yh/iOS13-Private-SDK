//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIComposeReviewDelegate-Protocol.h>

@class NSString, SKUIComposeReviewViewController, SKUIProductReviewURLProvider, SKUIReviewInAppConfiguration, SKUIReviewInAppRatingViewController, SKUIStarRatingQueue, SKUIStoreDialogController;

@interface SKUIReviewInAppController : NSObject <SKUIComposeReviewDelegate>
{
    id /* block */ _completion;
    SKUIReviewInAppConfiguration *_configuration;
    SKUIReviewInAppRatingViewController *_ratingViewController;
    SKUIComposeReviewViewController *_composeViewController;
    SKUIStoreDialogController *_dialogController;
    SKUIProductReviewURLProvider *_reviewURLProvider;
    SKUIStarRatingQueue *_starRatingQueue;
}

@property(retain, nonatomic) SKUIStarRatingQueue *starRatingQueue; // @synthesize starRatingQueue=_starRatingQueue;
@property(retain, nonatomic) SKUIProductReviewURLProvider *reviewURLProvider; // @synthesize reviewURLProvider=_reviewURLProvider;
@property(retain, nonatomic) SKUIStoreDialogController *dialogController; // @synthesize dialogController=_dialogController;
@property(retain, nonatomic) SKUIComposeReviewViewController *composeViewController; // @synthesize composeViewController=_composeViewController;
@property(retain, nonatomic) SKUIReviewInAppRatingViewController *ratingViewController; // @synthesize ratingViewController=_ratingViewController;
@property(copy, nonatomic) SKUIReviewInAppConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
- (void)_promptForStarRatingDuringCompose:(id)arg1;
- (void)_presentAlertForDialog:(id)arg1;
- (void)_presentWriteReview;
- (void)_submitRating:(long long)arg1 completion:(id /* block */)arg2;
- (void)_presentRatingPrompt;
- (void)_finishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)_composeReviewViewControllerDidFinish:(id)arg1 result:(unsigned long long)arg2;
- (void)composeReviewViewControllerDidSubmit:(id)arg1;
- (void)composeReviewViewControllerDidCancel:(id)arg1;
- (_Bool)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;
- (void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2;
- (void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2;
- (void)start;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


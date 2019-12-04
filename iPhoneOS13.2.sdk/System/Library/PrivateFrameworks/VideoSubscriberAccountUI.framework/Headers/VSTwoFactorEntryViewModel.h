//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@class NSArray, NSString, VSExpressionEvaluator, VSTwoFactorEntryTextField;
@protocol VSTwoFactorEntryViewModelDelegate;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryViewModel : VSCuratedViewModel
{
    id <VSTwoFactorEntryViewModelDelegate> _delegate;
    VSTwoFactorEntryTextField *_twoFactorTextField;
    NSString *_headerText;
    NSArray *_buttons;
    NSString *_originalTwoFacorCode;
    VSExpressionEvaluator *_buttonExpressionEvaluator;
}

@property(retain, nonatomic) VSExpressionEvaluator *buttonExpressionEvaluator; // @synthesize buttonExpressionEvaluator=_buttonExpressionEvaluator;
@property(copy, nonatomic) NSString *originalTwoFacorCode; // @synthesize originalTwoFacorCode=_originalTwoFacorCode;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) VSTwoFactorEntryTextField *twoFactorTextField; // @synthesize twoFactorTextField=_twoFactorTextField;
@property(nonatomic) __weak id <VSTwoFactorEntryViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)buttonAtIndexWasPressed:(unsigned long long)arg1;
- (void)configureWithRequest:(id)arg1;
- (id)init;

@end


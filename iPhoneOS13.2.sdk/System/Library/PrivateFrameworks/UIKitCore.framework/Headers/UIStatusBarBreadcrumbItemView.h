//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIStatusBarSystemNavigationItemView.h>

@class NSString, UISystemNavigationAction;

__attribute__((visibility("hidden")))
@interface UIStatusBarBreadcrumbItemView : UIStatusBarSystemNavigationItemView
{
    UISystemNavigationAction *_systemNavigationAction;
    NSString *_destinationText;
}

@property(retain, nonatomic) NSString *destinationText; // @synthesize destinationText=_destinationText;
@property(retain, nonatomic) UISystemNavigationAction *systemNavigationAction; // @synthesize systemNavigationAction=_systemNavigationAction;
- (double)extraRightPadding;
- (id)shortenedTitleWithCompressionLevel:(int)arg1;
- (void)userDidActivateButton:(id)arg1;
- (long long)labelLineBreakMode;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end


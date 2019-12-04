//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUICardSnippetViewController.h>

@class SAUISnippet;

@interface SiriUILegacyCardSnippetViewController : SiriUICardSnippetViewController
{
    SAUISnippet *_snippet;
}

+ (void)initialize;
- (id)snippet;
- (void)cardViewControllerDidLoad:(id)arg1;
- (_Bool)cardViewController:(id)arg1 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id)arg2;
- (Class)transparentHeaderViewClass;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;
- (id)sashItem;
- (void)endEditingAndCorrect:(_Bool)arg1;
- (_Bool)wantsToManageBackgroundColor;
- (_Bool)usePlatterStyle;
- (_Bool)removedAfterDialogProgresses;
- (void)siriDidLayoutSnippetView;
- (void)siriWillLayoutSnippetView;
- (void)_setVirgin:(_Bool)arg1;
- (void)willCancel;
- (void)willConfirm;
- (_Bool)isCancelled;
- (void)setCancelled:(_Bool)arg1;
- (_Bool)isConfirmed;
- (void)setConfirmed:(_Bool)arg1;
- (_Bool)isFullPadWidth;
- (void)setIsFullPadWidth:(_Bool)arg1;
- (_Bool)wantsConfirmationInsets;
- (void)setWantsConfirmationInsets:(_Bool)arg1;
- (id)snippetPunchOut;
- (void)setSnippetPunchOut:(id)arg1;
- (id)headerPunchOut;
- (void)setHeaderPunchOut:(id)arg1;
- (id)requestContext;
- (void)setRequestContext:(id)arg1;
- (id)navigationTitle;
- (void)setNavigationTitle:(id)arg1;
- (id)attributedSubtitle;
- (void)setAttributedSubtitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSnippet:(id)arg1;
- (id)_backingSnippetViewController;
- (id)_legacyCardSectionViewController;
- (id)initWithSnippet:(id)arg1;

@end


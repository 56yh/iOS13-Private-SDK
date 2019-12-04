//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXUIWidget-Protocol.h>

@class NSLayoutConstraint, NSString, PHPerson, PXOneUpPresentation, PXPeopleSuggestionDataSource, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UIButton, UILabel, UIView;
@protocol PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXPeopleCandidateWidget : NSObject <PXChangeObserver, PXUIWidget>
{
    _Bool _dismissed;
    PXPhotosDetailsContext *_context;
    PXWidgetSpec *_spec;
    id <PXWidgetDelegate> _widgetDelegate;
    PXPeopleSuggestionDataSource *_dataSource;
    UIView *_contentView;
    UILabel *_label;
    PHPerson *_person;
    UIButton *_notNowButton;
    NSLayoutConstraint *_avatarToLeadingConstraint;
    NSLayoutConstraint *_notNowToTrailingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *notNowToTrailingConstraint; // @synthesize notNowToTrailingConstraint=_notNowToTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *avatarToLeadingConstraint; // @synthesize avatarToLeadingConstraint=_avatarToLeadingConstraint;
@property(nonatomic) __weak UIButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(nonatomic) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) PXPeopleSuggestionDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
- (void)_updateAndSetDescriptionFont;
- (void)_dismissWithAnimation:(_Bool)arg1;
- (void)_suggestionsDidFinish:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)notNowTapped:(id)arg1;
- (void)reviewTapped:(id)arg1;
- (void)updateNotNowButton;
- (void)setContentSize:(struct CGSize)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)unloadContentData;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (void)controllerTraitCollectionDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)loadContentData;

// Remaining properties
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, nonatomic) long long contentViewAnchoringType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly, nonatomic) _Bool hasLoadedContentData;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate;

@end


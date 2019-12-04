//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

#import <TemplateKit/TLKTextAreaViewTesting-Protocol.h>

@class NSMutableArray, NSString, NUIContainerStackView, TLKRichTextField, TLKTextButton, TLKTitleContainerView;
@protocol TLKTextAreaViewDelegate;

@interface TLKTextAreaView : TLKStackView <TLKTextAreaViewTesting>
{
    _Bool _disableAllObservers;
    id <TLKTextAreaViewDelegate> _buttonDelegate;
    TLKTitleContainerView *_titleContainer;
    NSMutableArray *_detailsFields;
    TLKRichTextField *_footnoteLabel;
    TLKTextButton *_footnoteButton;
    NUIContainerStackView *_footnoteContainer;
}

+ (id)footNoteLabelFont;
@property(nonatomic) _Bool disableAllObservers; // @synthesize disableAllObservers=_disableAllObservers;
@property(retain, nonatomic) NUIContainerStackView *footnoteContainer; // @synthesize footnoteContainer=_footnoteContainer;
@property(retain, nonatomic) TLKTextButton *footnoteButton; // @synthesize footnoteButton=_footnoteButton;
@property(retain, nonatomic) TLKRichTextField *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) NSMutableArray *detailsFields; // @synthesize detailsFields=_detailsFields;
@property(retain, nonatomic) TLKTitleContainerView *titleContainer; // @synthesize titleContainer=_titleContainer;
@property __weak id <TLKTextAreaViewDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
- (id)footnoteLabelString;
- (id)secondaryTitleLabelString;
- (id)titleLabelString;
- (id)textAreaLabelStrings;
- (id)detailsViews;
- (id)titleView;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (_Bool)noFootNote;
- (_Bool)noRichTextFields;
- (void)updateFootnote:(id)arg1 buttonText:(id)arg2;
- (void)internalTextFieldsInBatchUpdate:(_Bool)arg1;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)updateDetails:(id)arg1;
- (void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


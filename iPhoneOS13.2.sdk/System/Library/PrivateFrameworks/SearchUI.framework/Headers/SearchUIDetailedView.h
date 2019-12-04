//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppSupportUI/NUIContainerStackView.h>

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>
#import <SearchUI/SearchUIAccessoryViewDelegate-Protocol.h>
#import <SearchUI/TLKDetailsViewDelegate-Protocol.h>

@class NSMutableArray, NSString, SearchUIAccessoryViewController, SearchUIDetailedRowModel, SearchUILeadingViewController, TLKDetailsView, TLKStackView;
@protocol SearchUIDetailedViewDelegate, SearchUIFeedbackDelegate;

@interface SearchUIDetailedView : NUIContainerStackView <NUIContainerViewDelegate, SearchUIAccessoryViewDelegate, TLKDetailsViewDelegate>
{
    _Bool _isVerticalAlignment;
    id <SearchUIFeedbackDelegate> _feedbackDelegate;
    id <SearchUIDetailedViewDelegate> _buttonDelegate;
    SearchUIAccessoryViewController *_currentAccessoryViewController;
    SearchUILeadingViewController *_currentLeadingViewController;
    SearchUIDetailedRowModel *_rowModel;
    TLKStackView *_innerContainer;
    NSMutableArray *_leadingViewControllers;
    TLKDetailsView *_detailsView;
    NSMutableArray *_accessoryViewControllers;
}

+ (void)addViewIfNecessary:(id)arg1 toStackView:(id)arg2 removeFromStackView:(id)arg3;
@property(retain, nonatomic) NSMutableArray *accessoryViewControllers; // @synthesize accessoryViewControllers=_accessoryViewControllers;
@property(retain, nonatomic) TLKDetailsView *detailsView; // @synthesize detailsView=_detailsView;
@property(retain, nonatomic) NSMutableArray *leadingViewControllers; // @synthesize leadingViewControllers=_leadingViewControllers;
@property(retain, nonatomic) TLKStackView *innerContainer; // @synthesize innerContainer=_innerContainer;
@property(retain, nonatomic) SearchUIDetailedRowModel *rowModel; // @synthesize rowModel=_rowModel;
@property(retain, nonatomic) SearchUILeadingViewController *currentLeadingViewController; // @synthesize currentLeadingViewController=_currentLeadingViewController;
@property(retain, nonatomic) SearchUIAccessoryViewController *currentAccessoryViewController; // @synthesize currentAccessoryViewController=_currentAccessoryViewController;
@property(nonatomic) __weak id <SearchUIDetailedViewDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
@property(nonatomic) _Bool isVerticalAlignment; // @synthesize isVerticalAlignment=_isVerticalAlignment;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)footnoteButtonPressed;
- (_Bool)arrangedViewMustCenter:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)initWithFeedbackDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


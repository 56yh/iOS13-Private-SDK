//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentView.h>

#import <Silex/SXTextViewDelegate-Protocol.h>

@class NSString, SXTextView;

@interface SXButtonComponentView : SXComponentView <SXTextViewDelegate>
{
    SXTextView *_textView;
    struct CGRect _typographicBounds;
}

@property(nonatomic) struct CGRect typographicBounds; // @synthesize typographicBounds=_typographicBounds;
@property(readonly, nonatomic) SXTextView *textView; // @synthesize textView=_textView;
- (struct CGRect)absoluteTextViewFrame;
- (id)accessibilityContextualLabelForTextView:(id)arg1;
- (id)accessibilityCustomRotorMembershipForTextView:(id)arg1;
- (id)textRulesForTextView:(id)arg1;
- (id)componentIdentifierForTextView:(id)arg1;
- (void)provideInfosLayoutTo:(id)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)setPresentationFrame:(struct CGRect)arg1;
- (void)setAbsoluteFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


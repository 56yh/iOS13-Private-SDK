//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <RTTUI/UITextViewDelegate-Protocol.h>

@class CALayer, NSString, RTTUtterance, UITextView;
@protocol RTTUIUtteranceCellDelegate;

@interface RTTUIUtteranceCell : UITableViewCell <UITextViewDelegate>
{
    UITextView *_textView;
    CALayer *_bubbleLayer;
    _Bool _editingUtterance;
    _Bool _accessibilityIsUnread;
    RTTUtterance *_utterance;
    id <RTTUIUtteranceCellDelegate> _delegate;
}

+ (double)heightForUtterance:(id)arg1 andWidth:(double)arg2;
@property(nonatomic, getter=_accessibilityIsUnread, setter=_accessibilitySetIsUnread:) _Bool accessibilityIsUnread; // @synthesize accessibilityIsUnread=_accessibilityIsUnread;
@property(nonatomic) __weak id <RTTUIUtteranceCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditingUtterance) _Bool editingUtterance; // @synthesize editingUtterance=_editingUtterance;
@property(retain, nonatomic) RTTUtterance *utterance; // @synthesize utterance=_utterance;
- (_Bool)_accessibilityRealtimeCompleted;
- (_Bool)_accessibilityRealtimeHasUnread;
- (void)_accessibilityHandleATFocused:(_Bool)arg1 assistiveTech:(id)arg2;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)textViewDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)adjustTextViewSize;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (double)preferredHeightForWidth:(double)arg1;
- (struct _NSRange)selectedTextRange;
- (void)dealloc;
- (void)setSendProgressIndex:(unsigned long long)arg1;
- (void)updateUtterance:(id)arg1;
- (void)updateUtterance:(id)arg1 postNotifications:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


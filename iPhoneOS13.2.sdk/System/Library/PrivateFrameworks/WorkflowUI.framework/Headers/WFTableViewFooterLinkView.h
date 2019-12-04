//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <WorkflowUI/UITextViewDelegate-Protocol.h>

@class NSString, NSURL, UITextView;
@protocol WFTableViewFooterLinkViewDelegate;

@interface WFTableViewFooterLinkView : UITableViewHeaderFooterView <UITextViewDelegate>
{
    id <WFTableViewFooterLinkViewDelegate> _delegate;
    NSString *_text;
    NSURL *_URL;
    UITextView *_textView;
    struct _NSRange _linkRange;
}

@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) struct _NSRange linkRange; // @synthesize linkRange=_linkRange;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <WFTableViewFooterLinkViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)tintColorDidChange;
- (void)updateLinkColor;
- (void)setText:(id)arg1 URL:(id)arg2 linkRange:(struct _NSRange)arg3;
- (void)setText:(id)arg1 URL:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


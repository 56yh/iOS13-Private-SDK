//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKImageBalloonView.h>

@class NSString, UIButton, UIImageView, UILabel, UIView;
@protocol CKLocationShareBalloonViewDelegate;

@interface CKLocationShareBalloonView : CKImageBalloonView
{
    long long _offerState;
    NSString *_titleString;
    NSString *_locationString;
    UILabel *_titleLabel;
    UILabel *_locationLabel;
    UIButton *_startSharingButton;
    UIButton *_ignoreButton;
    UIView *_horizontalSeparator;
    UIView *_verticalSeparator;
    UIImageView *_chevron;
}

@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(retain, nonatomic) UIView *verticalSeparator; // @synthesize verticalSeparator=_verticalSeparator;
@property(retain, nonatomic) UIView *horizontalSeparator; // @synthesize horizontalSeparator=_horizontalSeparator;
@property(retain, nonatomic) UIButton *ignoreButton; // @synthesize ignoreButton=_ignoreButton;
@property(retain, nonatomic) UIButton *startSharingButton; // @synthesize startSharingButton=_startSharingButton;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) long long offerState; // @synthesize offerState=_offerState;
- (void)_ignoreButtonHit:(id)arg1;
- (void)_shareButtonHit:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)prepareForDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForLocationShareOfferChatItem:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <CKLocationShareBalloonViewDelegate> delegate; // @dynamic delegate;

@end


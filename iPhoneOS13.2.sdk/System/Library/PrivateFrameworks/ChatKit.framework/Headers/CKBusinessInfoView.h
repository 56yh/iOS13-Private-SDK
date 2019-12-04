//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;
@protocol CKBusinessInfoViewDelegate;

__attribute__((visibility("hidden")))
@interface CKBusinessInfoView : UIView
{
    id <CKBusinessInfoViewDelegate> _delegate;
    NSString *_descriptionText;
    long long _layoutType;
    UILabel *_descriptionTextLabel;
    UIButton *_infoButton;
}

@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UILabel *descriptionTextLabel; // @synthesize descriptionTextLabel=_descriptionTextLabel;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) __weak id <CKBusinessInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)infoButtonTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithLayoutType:(long long)arg1;

@end


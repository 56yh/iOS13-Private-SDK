//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CNAvatarViewController, CNContact, NSString, PXRoundImageView, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface PXCMMComposeRecipientTableViewCell : UITableViewCell
{
    UIView *_avatarView;
    UIView *_contactAvatarView;
    CNAvatarViewController *_contactAvatarViewController;
    PXRoundImageView *_customAvatarImageView;
    UILabel *_localizedNameLabel;
    UILabel *_transportLabel;
    UIImageView *_accessoryImageView;
    _Bool _emphasizeLocalizedName;
    _Bool _checked;
    int _currentRequestID;
    NSString *_localizedName;
    NSString *_transport;
    UIImage *_faceImage;
    UIColor *_textColor;
    CNContact *_contact;
    double _inset;
    UIView *_popoverSourceView;
    struct CGSize _faceImageViewSize;
}

@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) int currentRequestID; // @synthesize currentRequestID=_currentRequestID;
@property(retain, nonatomic) UIView *popoverSourceView; // @synthesize popoverSourceView=_popoverSourceView;
@property(nonatomic) struct CGSize faceImageViewSize; // @synthesize faceImageViewSize=_faceImageViewSize;
@property(nonatomic) double inset; // @synthesize inset=_inset;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIImage *faceImage; // @synthesize faceImage=_faceImage;
@property(copy, nonatomic) NSString *transport; // @synthesize transport=_transport;
@property(nonatomic) _Bool emphasizeLocalizedName; // @synthesize emphasizeLocalizedName=_emphasizeLocalizedName;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void)_updateAccessoryImageView;
- (void)_updateTransportLabel;
- (void)_updateLocalizedNameLabel;
- (void)_updateAvatarView;
- (void)_updateLayout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


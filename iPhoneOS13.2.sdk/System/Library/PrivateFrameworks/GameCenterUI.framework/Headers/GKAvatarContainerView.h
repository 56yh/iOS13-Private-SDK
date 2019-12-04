//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <GameCenterUI/GKPlayerAvatarViewDelegate-Protocol.h>

@class GKDashboardPlayerPhotoView, GKGradientLabel, NSLayoutConstraint, NSString, UILabel, UITapGestureRecognizer;
@protocol GKAvatarContainerViewDelegate;

@interface GKAvatarContainerView : UIView <GKPlayerAvatarViewDelegate>
{
    id <GKAvatarContainerViewDelegate> _delegate;
    UILabel *_nicknameLabel;
    UILabel *_emailLabel;
    UIView *_imageContainer;
    GKGradientLabel *_editLabel;
    NSLayoutConstraint *_imageContainerTopConstraint;
    GKDashboardPlayerPhotoView *_playerAvatarView;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView; // @synthesize playerAvatarView=_playerAvatarView;
@property(retain, nonatomic) NSLayoutConstraint *imageContainerTopConstraint; // @synthesize imageContainerTopConstraint=_imageContainerTopConstraint;
@property(retain, nonatomic) GKGradientLabel *editLabel; // @synthesize editLabel=_editLabel;
@property(retain, nonatomic) UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(retain, nonatomic) UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(nonatomic) __weak id <GKAvatarContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)prepareForDefaultNicknameViewController;
- (void)updateAvatarEditingAvailability;
- (void)refreshHeaderViewProfileImage;
- (void)refreshViewForLocalPlayer;
- (void)didSelectPlayerAvatarView:(id)arg1;
- (void)didSetPlayerAvatarImage:(id)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


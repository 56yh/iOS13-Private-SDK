//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <ChatKit/CKSearchResultSupplementryCell-Protocol.h>

@class CKAvatarView, CKSpotlightQueryResult, CNContact;

@interface CKSearchAvatarSupplementryView : UICollectionReusableView <CKSearchResultSupplementryCell>
{
    NSUInteger _parentContentType;
    CKSpotlightQueryResult *_associatedResult;
    CNContact *_contact;
    CKAvatarView *_avatarView;
    UIEdgeInsets marginInsets;
}

+ (double)desiredZPosition;
+ (id)reuseIdentifier;
+ (id)supplementaryViewType;
@property(retain, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CKSpotlightQueryResult *associatedResult; // @synthesize associatedResult=_associatedResult;
@property(nonatomic) NSUInteger parentContentType; // @synthesize parentContentType=_parentContentType;
@property(nonatomic) UIEdgeInsets marginInsets; // @synthesize marginInsets;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_updateVisibilityIfNeeded;
- (void)_parentPreviewDidChange:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorLayout-Protocol.h>

@class NSString;
@protocol AVTAvatarAttributeEditorLayout;

@interface AVTAvatarAttributeEditorOverridingLayout : NSObject <AVTAvatarAttributeEditorLayout>
{
    double _avatarContainerAlpha;
    id <AVTAvatarAttributeEditorLayout> _backingLayout;
    CGRect _avatarContainerFrame;
    CGRect _attributesContentViewFrame;
}

@property(readonly, nonatomic) id <AVTAvatarAttributeEditorLayout> backingLayout; // @synthesize backingLayout=_backingLayout;
@property(nonatomic) CGRect attributesContentViewFrame; // @synthesize attributesContentViewFrame=_attributesContentViewFrame;
@property(nonatomic) double avatarContainerAlpha; // @synthesize avatarContainerAlpha=_avatarContainerAlpha;
@property(nonatomic) CGRect avatarContainerFrame; // @synthesize avatarContainerFrame=_avatarContainerFrame;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger supportedLayoutOrientation;
@property(readonly, nonatomic) UIEdgeInsets attributesContentViewScrollIndicatorInsets;
@property(readonly, nonatomic) UIEdgeInsets attributesContentViewInsets;
@property(readonly, nonatomic) CGRect verticalRuleFrame;
@property(readonly, nonatomic) double verticalRuleAlpha;
@property(readonly, nonatomic) CGRect headerMaskingViewFrame;
@property(readonly, nonatomic) double headerMaskingViewAlpha;
@property(readonly, nonatomic) CGRect userInfoFrame;
@property(readonly, nonatomic) CGRect groupDialContainerFrame;
@property(readonly, nonatomic) double screenScale;
@property(readonly, nonatomic) UIEdgeInsets edgeInsets;
@property(readonly, nonatomic) CGSize containerSize;
@property(readonly, copy, nonatomic) NSString *contentSizeCategory;
- (id)initWithLayout:(id)arg1;

@end

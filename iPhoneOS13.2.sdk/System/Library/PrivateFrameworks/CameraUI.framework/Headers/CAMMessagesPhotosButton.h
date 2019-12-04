//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@class NSString;

@interface CAMMessagesPhotosButton : UIButton <CAMAccessibilityHUDImageProvider>
{
    long long _orientation;
    struct UIEdgeInsets _tappableEdgeInsets;
}

+ (id)photosButton;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
- (id)imageForAccessibilityHUD;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


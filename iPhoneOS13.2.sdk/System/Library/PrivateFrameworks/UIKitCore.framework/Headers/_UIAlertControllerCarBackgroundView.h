//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIInterfaceActionVisualBackgroundDisplaying-Protocol.h>
#import <UIKitCore/UIInterfaceActionVisualGroupBackgroundDisplaying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerCarBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
}

- (void)traitCollectionDidChange:(id)arg1;
- (id)_colorForInterfaceStyle:(long long)arg1;
- (void)setPressed:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


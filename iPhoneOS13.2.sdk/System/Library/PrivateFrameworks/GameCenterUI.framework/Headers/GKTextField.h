//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

#import <GameCenterUI/GKTextStyleReplay-Protocol.h>

@class GKTextStyle, NSString;

@interface GKTextField : UITextField <GKTextStyleReplay>
{
    GKTextStyle *_baseStyle;
    GKTextStyle *_appliedStyle;
}

+ (void)initialize;
@property(retain, nonatomic) GKTextStyle *appliedStyle; // @synthesize appliedStyle=_appliedStyle;
- (void)applyTextStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) GKTextStyle *baseStyle;
- (void)replayAndApplyStyleWithSystemContentChange:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


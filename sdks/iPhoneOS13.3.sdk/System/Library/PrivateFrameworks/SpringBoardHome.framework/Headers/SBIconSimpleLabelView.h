//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <SpringBoardHome/SBIconLabelView-Protocol.h>

@class SBIconLabelImageParameters, SBIconView;

@interface SBIconSimpleLabelView : UIImageView <SBIconLabelView>
{
    SBIconView *_iconView;
}

@property(nonatomic) __weak SBIconView *iconView; // @synthesize iconView=_iconView;
// - (void).cxx_destruct;
@property(readonly, nonatomic) SBIconLabelImageParameters *imageParameters;
- (void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2;
- (id)initWithSettings:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class AVTCircularButton, NSString, UIImageSymbolConfiguration;

@interface AVTSimpleAvatarPickerHeaderView : UICollectionReusableView
{
    AVTCircularButton *_button;
    id /* block */ _buttonPressedBlock;
    NSString *_currentSymbolName;
    UIImageSymbolConfiguration *_plusSymbolConfiguration;
    UIImageSymbolConfiguration *_ellipsisSymbolConfiguration;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIImageSymbolConfiguration *ellipsisSymbolConfiguration; // @synthesize ellipsisSymbolConfiguration=_ellipsisSymbolConfiguration;
@property(retain, nonatomic) UIImageSymbolConfiguration *plusSymbolConfiguration; // @synthesize plusSymbolConfiguration=_plusSymbolConfiguration;
@property(retain, nonatomic) NSString *currentSymbolName; // @synthesize currentSymbolName=_currentSymbolName;
@property(copy, nonatomic) id /* block */ buttonPressedBlock; // @synthesize buttonPressedBlock=_buttonPressedBlock;
@property(readonly, nonatomic) AVTCircularButton *button; // @synthesize button=_button;
- (void)buttonPressed:(id)arg1;
- (void)updateWithSymbolNamed:(id)arg1 configuration:(id)arg2 animated:(_Bool)arg3;
- (void)updateForEditMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end


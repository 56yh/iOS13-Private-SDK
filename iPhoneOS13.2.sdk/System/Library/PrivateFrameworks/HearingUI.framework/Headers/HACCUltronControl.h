//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <HearingUI/HACCContentModule-Protocol.h>

@class NSString, UILabel, UIView;
@protocol HACCContentModuleDelegate;

@interface HACCUltronControl : UIControl <HACCContentModule>
{
    _Bool _isListening;
    unsigned long long module;
    id <HACCContentModuleDelegate> delegate;
    UIView *_container;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(nonatomic) __weak id <HACCContentModuleDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned long long module; // @synthesize module;
- (_Bool)isRunning;
- (_Bool)enabled;
- (id)contentValue;
- (void)updateValue;
- (void)updateConstraints;
- (void)buttonTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


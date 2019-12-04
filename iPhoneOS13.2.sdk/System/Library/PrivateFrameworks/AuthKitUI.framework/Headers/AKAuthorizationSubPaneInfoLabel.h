//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class NSString, UILabel;

@interface AKAuthorizationSubPaneInfoLabel : AKAuthorizationSubPane
{
    double _marginInset;
    UILabel *_infoLabel;
    unsigned long long _internalInfoLabelType;
}

@property(nonatomic) unsigned long long internalInfoLabelType; // @synthesize internalInfoLabelType=_internalInfoLabelType;
@property(readonly, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) double marginInset; // @synthesize marginInset=_marginInset;
@property(nonatomic) unsigned long long infoLabelType;
- (id)titleFont;
- (id)messageFont;
- (void)setLabel:(id)arg1 toInfoLabelType:(unsigned long long)arg2;
- (id)infoLabelWithString:(id)arg1;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (void)addToStackView:(id)arg1 context:(id)arg2;
@property(copy, nonatomic) NSString *string;
- (id)initWithString:(id)arg1;

@end


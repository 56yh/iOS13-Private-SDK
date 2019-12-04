//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface PSUIBadgeView : UIView
{
    UILabel *_badgeLabel;
    double _fontSize;
    double _cornerRadius;
    double _minPadding;
    double _baseline;
}

@property(nonatomic) double baseline; // @synthesize baseline=_baseline;
@property(nonatomic) double minPadding; // @synthesize minPadding=_minPadding;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
- (struct CGSize)intrinsicContentSize;
@property(copy, nonatomic) NSString *text;
- (id)init;

@end


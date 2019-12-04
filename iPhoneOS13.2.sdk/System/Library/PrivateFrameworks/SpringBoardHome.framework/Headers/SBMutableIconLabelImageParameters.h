//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardHome/SBIconLabelImageParameters.h>

@class NSString, UIColor, UIFont;

@interface SBMutableIconLabelImageParameters : SBIconLabelImageParameters
{
}

@property(nonatomic) struct UIEdgeInsets fontLanguageInsets; // @dynamic fontLanguageInsets;
@property(nonatomic) struct UIEdgeInsets textInsets; // @dynamic textInsets;
@property(retain, nonatomic) UIColor *focusHighlightColor; // @dynamic focusHighlightColor;
@property(copy, nonatomic) NSString *contentSizeCategory; // @dynamic contentSizeCategory;
@property(nonatomic, getter=isAccessibilityReduceTransparencyEnabled) _Bool accessibilityReduceTransparencyEnabled; // @dynamic accessibilityReduceTransparencyEnabled;
@property(nonatomic) double scale; // @dynamic scale;
@property(retain, nonatomic) UIColor *textColor; // @dynamic textColor;
@property(nonatomic) long long legibilityStyle; // @dynamic legibilityStyle;
@property(nonatomic) _Bool containsEmoji; // @dynamic containsEmoji;
@property(nonatomic) _Bool canTighten; // @dynamic canTighten;
@property(nonatomic) _Bool canTruncate; // @dynamic canTruncate;
@property(copy, nonatomic) NSString *iconLocation; // @dynamic iconLocation;
@property(retain, nonatomic) UIFont *font; // @dynamic font;
@property(nonatomic) struct CGSize maxSize; // @dynamic maxSize;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (id)copy;

@end


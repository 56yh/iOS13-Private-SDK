//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class TSULocale, TSWPPadding;

@protocol TSWPTextDelegate
@property(readonly, nonatomic) _Bool shouldHyphenate;
@property(readonly, nonatomic) TSULocale *locale;
@property(readonly, nonatomic) double maxWidthForChildren;
- (TSWPPadding *)padding;
- (int)verticalAlignment;

@optional
- (_Bool)forceWesternLineBreaking;
@end


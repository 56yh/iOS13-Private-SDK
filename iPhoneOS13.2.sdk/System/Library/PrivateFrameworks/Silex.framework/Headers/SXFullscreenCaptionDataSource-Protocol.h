//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, SXComponentTextRules, SXComponentTextStyle, SXFullscreenCaption, SXTextResizer;
@protocol SXComponentTextStyle, SXTextStyle;

@protocol SXFullscreenCaptionDataSource 
- (NSString *)contentSizeCategoryForCaption:(SXFullscreenCaption *)arg1;
- (SXComponentTextRules *)textRulesForCaption:(SXFullscreenCaption *)arg1;
- (SXTextResizer *)textResizerForCaption:(SXFullscreenCaption *)arg1;
- (id <SXComponentTextStyle>)componentTextStyleForIdentifier:(NSString *)arg1 inheritingFromComponentTextStyle:(SXComponentTextStyle *)arg2;
- (id <SXTextStyle>)textStyleForIdentifier:(NSString *)arg1;
@end


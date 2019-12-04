//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>


@class NSString;

@interface SBHFloatyFolderVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    double _continuousCornerRadius;
    double _titleFontSizeInPortrait;
    double _titleFontSizeInLandscape;
    struct CGSize _contentBackgroundSize;
    struct CGPoint _contentBackgroundOffsetFromCenterInPortrait;
    struct CGPoint _contentBackgroundOffsetFromCenterInLandscape;
}

@property(nonatomic) double titleFontSizeInLandscape; // @synthesize titleFontSizeInLandscape=_titleFontSizeInLandscape;
@property(nonatomic) double titleFontSizeInPortrait; // @synthesize titleFontSizeInPortrait=_titleFontSizeInPortrait;
@property(nonatomic) struct CGPoint contentBackgroundOffsetFromCenterInLandscape; // @synthesize contentBackgroundOffsetFromCenterInLandscape=_contentBackgroundOffsetFromCenterInLandscape;
@property(nonatomic) struct CGPoint contentBackgroundOffsetFromCenterInPortrait; // @synthesize contentBackgroundOffsetFromCenterInPortrait=_contentBackgroundOffsetFromCenterInPortrait;
@property(nonatomic) double continuousCornerRadius; // @synthesize continuousCornerRadius=_continuousCornerRadius;
@property(nonatomic) struct CGSize contentBackgroundSize; // @synthesize contentBackgroundSize=_contentBackgroundSize;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setTitleFontSizeInAllOrientations:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class NSString, PXTitleSubtitleLabelSpec;

@protocol PXGTitleSubtitleSource <PXGLayoutContentSource>
- (PXTitleSubtitleLabelSpec *)titleSubtitleSpecForSpriteAtIndex:(unsigned int)arg1;
- (NSString *)subtitleForSpriteAtIndex:(unsigned int)arg1;
- (NSString *)titleForSpriteAtIndex:(unsigned int)arg1;

@optional
- (void)didRenderTitleAndSubtitleSpriteAtIndex:(unsigned int)arg1 layoutVersion:(long long)arg2 withLastBaseline:(double)arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OADClient-Protocol.h>
#import <OfficeImport/OADImageRecolorInfoClient-Protocol.h>

@class NSString, OADImageRecolorInfo, PDAnimationInfo, PDPlaceholder;

__attribute__((visibility("hidden")))
@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient>
{
    OADImageRecolorInfo *mImageRecolorInfo;
    PDPlaceholder *mPlaceholder;
    _Bool mIsComment;
    PDAnimationInfo *mAnimationInfo;
    _Bool mHasOleChart;
    int mInheritedTextStylePlaceholderType;
}

@property(nonatomic) int inheritedTextStylePlaceholderType; // @synthesize inheritedTextStylePlaceholderType=mInheritedTextStylePlaceholderType;
@property(readonly, copy) NSString *description;
- (void)setHasOleChart:(_Bool)arg1;
- (_Bool)hasOleChart;
- (id)animationInfo;
- (void)setAnimationInfo:(id)arg1;
- (_Bool)hasAnimationInfo;
- (void)setIsComment:(_Bool)arg1;
- (_Bool)isComment;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (_Bool)hasPlaceholder;
- (void)setImageRecolorInfo:(id)arg1;
- (id)imageRecolorInfo;
- (struct CGRect)bounds;
- (_Bool)hasBounds;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


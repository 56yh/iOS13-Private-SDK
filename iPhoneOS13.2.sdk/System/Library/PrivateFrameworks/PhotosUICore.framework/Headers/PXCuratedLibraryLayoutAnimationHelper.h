//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGAnimationDelegate-Protocol.h>

@class NSDictionary, NSString, PXCuratedLibraryLayout;

@interface PXCuratedLibraryLayoutAnimationHelper : NSObject <PXGAnimationDelegate>
{
    _Bool _wantsPresentationAdjustment;
    _Bool _wantsAnimationWithSpriteTransfer;
    NSDictionary *_userData;
    PXCuratedLibraryLayout *_layout;
}

+ (id)createTransitionIfNeededForLayout:(id)arg1 context:(long long)arg2;
+ (id)createAnimationIfNeededForLayout:(id)arg1 context:(long long)arg2 userData:(id)arg3;
@property(readonly, nonatomic) _Bool wantsAnimationWithSpriteTransfer; // @synthesize wantsAnimationWithSpriteTransfer=_wantsAnimationWithSpriteTransfer;
@property(readonly, nonatomic) _Bool wantsPresentationAdjustment; // @synthesize wantsPresentationAdjustment=_wantsPresentationAdjustment;
@property(readonly) __weak PXCuratedLibraryLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_ac168a83 *)arg2 styles:(inout CDStruct_506f5052 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_ac168a83 *)arg2 styles:(inout CDStruct_506f5052 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(struct CGPoint)arg3;
@property(readonly, nonatomic) _Bool wantsDoubleSidedAnimations;
@property(readonly, nonatomic) double animationDuration;
@property(readonly, nonatomic) long long animationCurve;
- (id)initWithLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/CALayerDelegate-Protocol.h>
#import <IconServices/ISScalableCompositorResource-Protocol.h>

@class ISIconManager, NSArray, NSString;
@protocol ISIconIdentity;

@interface ISIcon : NSObject <ISScalableCompositorResource, CALayerDelegate>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)transparentIcon;
+ (id)genericDocumentIcon;
+ (id)genericApplicationIcon;
+ (id)applicationIcon;
+ (id)layerUpdateQueue;
+ (id)sizesFromSet:(unsigned long long)arg1;
+ (int)findVariantFromSet:(unsigned long long)arg1 deviceIdiom:(unsigned long long)arg2 size:(struct CGSize)arg3 scale:(double)arg4;
+ (struct _LIIconVariantInfo *)variantInfoForSet:(unsigned long long)arg1 count:(unsigned long long *)arg2;
- (double)_aspectRatio;
- (id)iconWithDecorations:(id)arg1;
@property(readonly, nonatomic) NSArray *decorations;
- (unsigned long long)badgeOptions;
- (unsigned long long)variantOptions;
@property(readonly) ISIconManager *manager;
- (id)_init;
@property(readonly) id <ISIconIdentity> _identity;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)displayLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


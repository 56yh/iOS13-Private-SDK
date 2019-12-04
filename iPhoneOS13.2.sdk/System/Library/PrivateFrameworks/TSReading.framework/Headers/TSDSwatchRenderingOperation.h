//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSObject, NSString, TSKDocumentRoot, UIView;
@protocol TSSPreset;

@interface TSDSwatchRenderingOperation : NSOperation
{
    UIView *mView;
    NSObject<TSSPreset> *mPreset;
    struct CGSize mImageSize;
    double mImageScale;
    struct CGRect mSwatchFrame;
    TSKDocumentRoot *mDocumentRoot;
    struct CGImage *mDeliveredImage;
    unsigned long long mInsertPopoverPageType;
    unsigned long long mInsertPopoverPageNumber;
    NSString *mIdentifier;
}

@property(copy) NSString *identifier; // @synthesize identifier=mIdentifier;
@property unsigned long long insertPopoverPageNumber; // @synthesize insertPopoverPageNumber=mInsertPopoverPageNumber;
@property unsigned long long insertPopoverPageType; // @synthesize insertPopoverPageType=mInsertPopoverPageType;
@property(readonly) struct CGRect swatchFrame; // @synthesize swatchFrame=mSwatchFrame;
@property(readonly) double imageScale; // @synthesize imageScale=mImageScale;
@property(readonly) struct CGSize imageSize; // @synthesize imageSize=mImageSize;
@property(readonly) NSObject<TSSPreset> *preset; // @synthesize preset=mPreset;
@property(retain) UIView *view; // @synthesize view=mView;
- (void)main;
- (void)doWorkWithReadLock;
- (struct UIEdgeInsets)swatchEdgeInsets;
- (_Bool)needsPressedStateBackground;
@property(readonly, nonatomic) struct CGImage *deliveredImage;
- (void)deliverCGImage:(struct CGImage *)arg1;
- (void)p_deliverResultOnMainThread:(id)arg1;
- (struct CGImage *)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage *)arg1;
- (void)p_animateSwatchIn;
- (void)dealloc;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 documentRoot:(id)arg5;

@end


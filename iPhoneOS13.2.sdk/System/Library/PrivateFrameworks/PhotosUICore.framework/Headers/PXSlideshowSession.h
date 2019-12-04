//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/OKPresentationViewControllerDelegate-Protocol.h>

@class NSString, OKPresentationViewController, PHAssetCollection, UIView;
@protocol PXSlideshowSessionDelegate;

@interface PXSlideshowSession : NSObject <OKPresentationViewControllerDelegate>
{
    OKPresentationViewController *_presentationViewController;
    id <PXSlideshowSessionDelegate> _delegate;
    PHAssetCollection *_assetCollection;
    long long _startIndex;
}

+ (void)preloadSlideshowFrameworkIfNeeded;
+ (void *)_loadSlideshowFrameworkIfNeeded;
+ (void)initialize;
@property(readonly, nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(nonatomic) __weak id <PXSlideshowSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentationViewControllerDidPrepare:(id)arg1;
- (void)_initPresentationViewController;
- (id)_presentationGuidelines;
@property(readonly, nonatomic) UIView *slideshowView;
@property(readonly, nonatomic) OKPresentationViewController *slideshowViewController;
- (void)dealloc;
- (id)initWithAssetCollection:(id)arg1 startIndex:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


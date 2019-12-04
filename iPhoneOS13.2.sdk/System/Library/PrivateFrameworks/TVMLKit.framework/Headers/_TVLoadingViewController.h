//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKImageElement, IKViewElement;

__attribute__((visibility("hidden")))
@interface _TVLoadingViewController : _TVBgImageLoadingViewController
{
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImgElement;
    IKViewElement *_loadingTemplateElement;
    double _spinnerDelay;
}

- (void)setSpinnerDelay:(double)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (struct CGSize)_backgroundImageProxySize;
- (long long)_blurEffectStyle;
- (_Bool)_backgroundImageRequiresBlur;
- (id)_backgroundImageProxy;
- (void)updateWithViewElement:(id)arg1;
- (void)updateWithLoadingTemplate:(id)arg1;
- (id)init;

@end


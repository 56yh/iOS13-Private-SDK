//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

@class SKUIDeveloperInfo, SKUIDeveloperInfoView, UIScrollView;

__attribute__((visibility("hidden")))
@interface SKUIDeveloperInfoViewController : SKUIViewController
{
    SKUIDeveloperInfo *_developerInfo;
    SKUIDeveloperInfoView *_infoView;
    UIScrollView *_scrollView;
}

@property(readonly, nonatomic) SKUIDeveloperInfo *developerInfo; // @synthesize developerInfo=_developerInfo;
- (void)loadView;
- (id)initWithDeveloperInfo:(id)arg1;

@end


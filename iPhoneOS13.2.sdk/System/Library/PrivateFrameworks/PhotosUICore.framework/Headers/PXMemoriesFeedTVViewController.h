//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXMemoriesFeedUIViewController, PXMemoriesSpecManager, UIScrollView;

@interface PXMemoriesFeedTVViewController : UIViewController <PXChangeObserver>
{
    PXMemoriesSpecManager *_specManager;
    PXMemoriesFeedUIViewController *_memoriesFeedController;
}

@property(readonly, nonatomic) PXMemoriesSpecManager *specManager; // @synthesize specManager=_specManager;
@property(retain, nonatomic) PXMemoriesFeedUIViewController *memoriesFeedController; // @synthesize memoriesFeedController=_memoriesFeedController;
@property(readonly, nonatomic) UIScrollView *ppt_scrollView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_specDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@protocol ICDocCamZoomablePageContentViewDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamZoomablePageContentImageView : UIImageView
{
    id <ICDocCamZoomablePageContentViewDelegate> _pageContentViewDelegate;
}

@property(nonatomic) __weak id <ICDocCamZoomablePageContentViewDelegate> pageContentViewDelegate; // @synthesize pageContentViewDelegate=_pageContentViewDelegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;

@end


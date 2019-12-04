//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewBase.h>

#import <CoverSheet/CSPageView-Protocol.h>

@class UIViewController;
@protocol CSPageViewControllerProtocol;

@interface CSPageViewBase : CSCoverSheetViewBase <CSPageView>
{
    UIViewController<CSPageViewControllerProtocol> *_pageViewController;
    double _contentWidth;
}

@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(nonatomic) __weak UIViewController<CSPageViewControllerProtocol> *pageViewController; // @synthesize pageViewController=_pageViewController;

@end


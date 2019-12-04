//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol SBUIBannerSource, SBUIBannerView;

@interface SBBannerViewCallbackManager : NSObject
{
    UIView<SBUIBannerView> *_view;
    id <SBUIBannerSource> _source;
    _Bool _sentWillAppear;
    _Bool _sentDidAppear;
    _Bool _sentWillDismiss;
    _Bool _sentDidDismiss;
    int _dismissReason;
}

- (void)matchPreviousCallbacks:(id)arg1;
- (_Bool)hasSentAnyCallbacks;
- (void)noteDidDismissWithReason:(int)arg1;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteDidAppear;
- (void)noteWillAppear;
- (void)dealloc;
- (id)init;
- (id)initWithBannerView:(id)arg1;

@end


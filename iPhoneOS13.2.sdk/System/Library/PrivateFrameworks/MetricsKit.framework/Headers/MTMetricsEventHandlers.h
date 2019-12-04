//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricsKit/MTEventHandlers.h>

@class MTAccountEventHandler, MTBaseEventDataProvider, MTClickEventHandler, MTDialogEventHandler, MTEnterEventHandler, MTExitEventHandler, MTFlexibleEventHandler, MTImpressionsEventHandler, MTMediaEventHandler, MTPageEventHandler, MTSearchEventHandler;

@interface MTMetricsEventHandlers : MTEventHandlers
{
    MTBaseEventDataProvider *_base;
    MTClickEventHandler *_click;
    MTEnterEventHandler *_enter;
    MTExitEventHandler *_exit;
    MTImpressionsEventHandler *_impressions;
    MTPageEventHandler *_page;
    MTFlexibleEventHandler *_flexible;
    MTSearchEventHandler *_search;
    MTAccountEventHandler *_account;
    MTDialogEventHandler *_dialog;
    MTMediaEventHandler *_media;
}

- (void)setBase:(id)arg1;
@property(readonly, nonatomic) MTMediaEventHandler *media; // @synthesize media=_media;
@property(readonly, nonatomic) MTDialogEventHandler *dialog; // @synthesize dialog=_dialog;
@property(readonly, nonatomic) MTAccountEventHandler *account; // @synthesize account=_account;
@property(readonly, nonatomic) MTSearchEventHandler *search; // @synthesize search=_search;
@property(readonly, nonatomic) MTFlexibleEventHandler *flexible; // @synthesize flexible=_flexible;
@property(readonly, nonatomic) MTPageEventHandler *page; // @synthesize page=_page;
@property(readonly, nonatomic) MTImpressionsEventHandler *impressions; // @synthesize impressions=_impressions;
@property(readonly, nonatomic) MTExitEventHandler *exit; // @synthesize exit=_exit;
@property(readonly, nonatomic) MTEnterEventHandler *enter; // @synthesize enter=_enter;
@property(readonly, nonatomic) MTClickEventHandler *click; // @synthesize click=_click;
- (id)base;

@end


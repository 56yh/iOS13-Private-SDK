//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/WKScriptMessageHandler-Protocol.h>

@class LPYouTubePlayerView, NSString;

__attribute__((visibility("hidden")))
@interface LPYouTubePlayerScriptMessageHandler : NSObject <WKScriptMessageHandler>
{
    LPYouTubePlayerView *_playerView;
}

- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)initWithPlayerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


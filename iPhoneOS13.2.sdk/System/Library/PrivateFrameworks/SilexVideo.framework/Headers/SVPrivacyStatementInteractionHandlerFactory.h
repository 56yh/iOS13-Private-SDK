//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoInteractionHandlerFactory-Protocol.h>

@class NSString;
@protocol SVVideoPlaybackController, SVVideoProviderProviding;

@interface SVPrivacyStatementInteractionHandlerFactory : NSObject <SVVideoInteractionHandlerFactory>
{
    id <SVVideoProviderProviding> _videoProviderProviding;
    id <SVVideoPlaybackController> _playbackController;
}

@property(readonly, nonatomic) id <SVVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SVVideoProviderProviding> videoProviderProviding; // @synthesize videoProviderProviding=_videoProviderProviding;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithVideoProviderProviding:(id)arg1 playbackController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBScenePlaceholderContentViewProvider-Protocol.h>

@class NSString;
@protocol SBScenePlaceholderContentViewProviderDelegate;

@interface SBDeviceApplicationSceneViewPlaceholderContentViewProvider : NSObject <SBScenePlaceholderContentViewProvider>
{
    id <SBScenePlaceholderContentViewProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SBScenePlaceholderContentViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)_contentTypeToSearchFromSceneHandle:(id)arg1 withContext:(id)arg2;
- (id)_loadLiveXIBViewForApplication:(id)arg1;
- (struct CGSize)_naturalSizeForOrientation:(long long)arg1 referenceSize:(struct CGSize)arg2;
- (_Bool)_checkApplicationRestorationState:(id)arg1 useSnapshot:(_Bool *)arg2;
- (id)_contentViewFromSceneHandle:(id)arg1 displayConfiguration:(id)arg2 orientation:(long long)arg3 snapshot:(id)arg4 size:(struct CGSize)arg5 statusBarDescriptor:(id)arg6;
- (id)sceneView:(id)arg1 requestsPlaceholderContentViewWithContext:(id)arg2;
- (void)_snapshotsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


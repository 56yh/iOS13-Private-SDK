//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSSceneAgent-Protocol.h>

@class FBSSceneEvent;
@protocol FBSSceneHandle;

@protocol FBSSceneHostAgent <FBSSceneAgent>
- (void)scene:(id <FBSSceneHandle>)arg1 willInvalidateWithEvent:(FBSSceneEvent *)arg2 completion:(void (^)(void))arg3;
- (void)scene:(id <FBSSceneHandle>)arg1 didInitializeWithEvent:(FBSSceneEvent *)arg2 completion:(void (^)(void))arg3;
@end


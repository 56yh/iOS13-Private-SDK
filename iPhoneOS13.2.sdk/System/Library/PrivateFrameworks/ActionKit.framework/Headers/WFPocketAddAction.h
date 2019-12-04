//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/PocketAPIDelegate-Protocol.h>

@class NSError, NSObject, NSString;
@protocol OS_dispatch_group;

@interface WFPocketAddAction : WFAction <PocketAPIDelegate>
{
    NSObject<OS_dispatch_group> *_addGroup;
    NSError *_lastError;
}

@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *addGroup; // @synthesize addGroup=_addGroup;
- (void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4;
- (void)finishRunningWithError:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


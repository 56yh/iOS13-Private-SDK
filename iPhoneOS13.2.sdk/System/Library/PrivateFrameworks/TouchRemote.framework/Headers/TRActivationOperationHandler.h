//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TROperationHandler-Protocol.h>

@class NSString;

@interface TRActivationOperationHandler : NSObject <TROperationHandler>
{
    id /* block */ _activationHandler;
}

@property(copy, nonatomic) id /* block */ activationHandler; // @synthesize activationHandler=_activationHandler;
- (void)_handleActivationRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithActivationHandler:(id /* block */)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


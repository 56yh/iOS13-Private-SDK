//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionProvider.h>

@interface WFInterchangeActionProvider : WFActionProvider
{
}

- (void)deleteCache;
- (void)updateCache:(id /* CDUnknownBlockType */)arg1;
- (id)actionWithInterchangeAction:(id)arg1 serializedParameters:(id)arg2;
- (void)createActionsForRequests:(id)arg1;
- (id)availableActionIdentifiers;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <RemoteConfiguration/RCOperationIdentifying-Protocol.h>
#import <RemoteConfiguration/RCOperationPrioritizing-Protocol.h>

@class NSString;

@interface NSURLSessionTask (RCOperationPrioritizingSupport) <RCOperationPrioritizing, RCOperationIdentifying>
@property(nonatomic) long long relativePriority;
- (id)longOperationDescription;
- (id)shortOperationDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end


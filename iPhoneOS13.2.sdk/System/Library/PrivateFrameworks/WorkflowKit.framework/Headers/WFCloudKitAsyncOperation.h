//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface WFCloudKitAsyncOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
}

@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
- (void)finishExecuting;
- (void)startExecuting;
- (void)start;

@end

